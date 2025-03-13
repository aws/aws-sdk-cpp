/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/DetectorFeatureConfiguration.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class UpdateDetectorRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateDetectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDetector"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the detector to update.</p> <p>To find the
     * <code>detectorId</code> in the current Region, see the Settings page in the
     * GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    UpdateDetectorRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the detector is enabled or not enabled.</p>
     */
    inline bool GetEnable() const { return m_enable; }
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }
    inline UpdateDetectorRequest& WithEnable(bool value) { SetEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enum value that specifies how frequently findings are exported, such as to
     * CloudWatch Events.</p>
     */
    inline FindingPublishingFrequency GetFindingPublishingFrequency() const { return m_findingPublishingFrequency; }
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }
    inline UpdateDetectorRequest& WithFindingPublishingFrequency(FindingPublishingFrequency value) { SetFindingPublishingFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the features that will be updated for the detector.</p>
     */
    inline const Aws::Vector<DetectorFeatureConfiguration>& GetFeatures() const { return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    template<typename FeaturesT = Aws::Vector<DetectorFeatureConfiguration>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<DetectorFeatureConfiguration>>
    UpdateDetectorRequest& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesT = DetectorFeatureConfiguration>
    UpdateDetectorRequest& AddFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features.emplace_back(std::forward<FeaturesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    bool m_enable{false};
    bool m_enableHasBeenSet = false;

    FindingPublishingFrequency m_findingPublishingFrequency{FindingPublishingFrequency::NOT_SET};
    bool m_findingPublishingFrequencyHasBeenSet = false;

    Aws::Vector<DetectorFeatureConfiguration> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
