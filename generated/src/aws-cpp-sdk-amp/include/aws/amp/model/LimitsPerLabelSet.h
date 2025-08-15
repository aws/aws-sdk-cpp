/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/LimitsPerLabelSetEntry.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>This structure defines one label set used to enforce active time series
   * limits for the workspace, and defines the limit for that label set.</p> <p>A
   * label set is a unique combination of label-value pairs. Use them to control time
   * series limits and to monitor usage by specific label groups. Example label sets
   * might be <code>team:finance</code> or <code>env:prod</code> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/LimitsPerLabelSet">AWS
   * API Reference</a></p>
   */
  class LimitsPerLabelSet
  {
  public:
    AWS_PROMETHEUSSERVICE_API LimitsPerLabelSet() = default;
    AWS_PROMETHEUSSERVICE_API LimitsPerLabelSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API LimitsPerLabelSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This structure contains the information about the limits that apply to time
     * series that match this label set.</p>
     */
    inline const LimitsPerLabelSetEntry& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = LimitsPerLabelSetEntry>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = LimitsPerLabelSetEntry>
    LimitsPerLabelSet& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This defines one label set that will have an enforced active time series
     * limit. </p> <p>Label values accept ASCII characters and must contain at least
     * one character that isn't whitespace. ASCII control characters are not accepted.
     * If the label name is metric name label <code>__<i>name</i>__</code>, then the
     * <i>metric</i> part of the name must conform to the following pattern:
     * <code>[a-zA-Z_:][a-zA-Z0-9_:]*</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabelSet() const { return m_labelSet; }
    inline bool LabelSetHasBeenSet() const { return m_labelSetHasBeenSet; }
    template<typename LabelSetT = Aws::Map<Aws::String, Aws::String>>
    void SetLabelSet(LabelSetT&& value) { m_labelSetHasBeenSet = true; m_labelSet = std::forward<LabelSetT>(value); }
    template<typename LabelSetT = Aws::Map<Aws::String, Aws::String>>
    LimitsPerLabelSet& WithLabelSet(LabelSetT&& value) { SetLabelSet(std::forward<LabelSetT>(value)); return *this;}
    template<typename LabelSetKeyT = Aws::String, typename LabelSetValueT = Aws::String>
    LimitsPerLabelSet& AddLabelSet(LabelSetKeyT&& key, LabelSetValueT&& value) {
      m_labelSetHasBeenSet = true; m_labelSet.emplace(std::forward<LabelSetKeyT>(key), std::forward<LabelSetValueT>(value)); return *this;
    }
    ///@}
  private:

    LimitsPerLabelSetEntry m_limits;
    bool m_limitsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labelSet;
    bool m_labelSetHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
