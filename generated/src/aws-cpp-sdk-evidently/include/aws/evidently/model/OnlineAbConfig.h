/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration of which variation to use as the
   * "control" version. The "control" version is used for comparison with other
   * variations. This structure also specifies how much experiment traffic is
   * allocated to each variation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/OnlineAbConfig">AWS
   * API Reference</a></p>
   */
  class OnlineAbConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API OnlineAbConfig() = default;
    AWS_CLOUDWATCHEVIDENTLY_API OnlineAbConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API OnlineAbConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the variation that is to be the default variation that the other
     * variations are compared to.</p>
     */
    inline const Aws::String& GetControlTreatmentName() const { return m_controlTreatmentName; }
    inline bool ControlTreatmentNameHasBeenSet() const { return m_controlTreatmentNameHasBeenSet; }
    template<typename ControlTreatmentNameT = Aws::String>
    void SetControlTreatmentName(ControlTreatmentNameT&& value) { m_controlTreatmentNameHasBeenSet = true; m_controlTreatmentName = std::forward<ControlTreatmentNameT>(value); }
    template<typename ControlTreatmentNameT = Aws::String>
    OnlineAbConfig& WithControlTreatmentName(ControlTreatmentNameT&& value) { SetControlTreatmentName(std::forward<ControlTreatmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs. The keys are variation names, and the values are
     * the portion of experiment traffic to be assigned to that variation. Specify the
     * traffic portion in thousandths of a percent, so 20,000 for a variation would
     * allocate 20% of the experiment traffic to that variation.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetTreatmentWeights() const { return m_treatmentWeights; }
    inline bool TreatmentWeightsHasBeenSet() const { return m_treatmentWeightsHasBeenSet; }
    template<typename TreatmentWeightsT = Aws::Map<Aws::String, long long>>
    void SetTreatmentWeights(TreatmentWeightsT&& value) { m_treatmentWeightsHasBeenSet = true; m_treatmentWeights = std::forward<TreatmentWeightsT>(value); }
    template<typename TreatmentWeightsT = Aws::Map<Aws::String, long long>>
    OnlineAbConfig& WithTreatmentWeights(TreatmentWeightsT&& value) { SetTreatmentWeights(std::forward<TreatmentWeightsT>(value)); return *this;}
    inline OnlineAbConfig& AddTreatmentWeights(Aws::String key, long long value) {
      m_treatmentWeightsHasBeenSet = true; m_treatmentWeights.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_controlTreatmentName;
    bool m_controlTreatmentNameHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_treatmentWeights;
    bool m_treatmentWeightsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
