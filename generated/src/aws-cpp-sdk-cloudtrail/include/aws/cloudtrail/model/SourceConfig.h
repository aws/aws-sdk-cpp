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
    AWS_CLOUDTRAIL_API SourceConfig();
    AWS_CLOUDTRAIL_API SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies whether the channel applies to a single region or to all
     * regions.</p>
     */
    inline bool GetApplyToAllRegions() const{ return m_applyToAllRegions; }

    /**
     * <p> Specifies whether the channel applies to a single region or to all
     * regions.</p>
     */
    inline bool ApplyToAllRegionsHasBeenSet() const { return m_applyToAllRegionsHasBeenSet; }

    /**
     * <p> Specifies whether the channel applies to a single region or to all
     * regions.</p>
     */
    inline void SetApplyToAllRegions(bool value) { m_applyToAllRegionsHasBeenSet = true; m_applyToAllRegions = value; }

    /**
     * <p> Specifies whether the channel applies to a single region or to all
     * regions.</p>
     */
    inline SourceConfig& WithApplyToAllRegions(bool value) { SetApplyToAllRegions(value); return *this;}


    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }

    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline bool AdvancedEventSelectorsHasBeenSet() const { return m_advancedEventSelectorsHasBeenSet; }

    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = value; }

    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors = std::move(value); }

    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline SourceConfig& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}

    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline SourceConfig& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}

    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline SourceConfig& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(value); return *this; }

    /**
     * <p> The advanced event selectors that are configured for the channel.</p>
     */
    inline SourceConfig& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectorsHasBeenSet = true; m_advancedEventSelectors.push_back(std::move(value)); return *this; }

  private:

    bool m_applyToAllRegions;
    bool m_applyToAllRegionsHasBeenSet = false;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
    bool m_advancedEventSelectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
