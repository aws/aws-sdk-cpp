/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/AdvancedEventSelector.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> Contains configuration information about the channel. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/SourceConfig">AWS
   * API Reference</a></p>
   */
  class SourceConfig
  {
  public:
    AWS_CLOUDTRAIL_API SourceConfig() = default;
    AWS_CLOUDTRAIL_API SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies whether the channel applies to a single Region or to all
     * Regions.</p>
     */
    inline bool GetApplyToAllRegions() const { return m_applyToAllRegions; }
    inline bool ApplyToAllRegionsHasBeenSet() const { return m_applyToAllRegionsHasBeenSet; }
    inline void SetApplyToAllRegions(bool value) { m_applyToAllRegionsHasBeenSet = true; m_applyToAllRegions = value; }
    inline SourceConfig& WithApplyToAllRegions(bool value) { SetApplyToAllRegions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const { return m_advancedEventSelectors; }
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    void SetAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::forward<AdvancedEventSelectorsT>(value); }
    template<typename AdvancedEventSelectorsT = Aws::Vector<AdvancedEventSelector>>
    SourceConfig& WithAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { SetAdvancedEventSelectors(std::forward<AdvancedEventSelectorsT>(value)); return *this;}
    template<typename AdvancedEventSelectorsT = AdvancedEventSelector>
    SourceConfig& AddAdvancedEventSelectors(AdvancedEventSelectorsT&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.emplace_back(std::forward<AdvancedEventSelectorsT>(value)); return *this; }
    ///@}
  private:

    bool m_applyToAllRegions{false};
    bool m_applyToAllRegionsHasBeenSet = false;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
    bool m_advancedEventSelectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
