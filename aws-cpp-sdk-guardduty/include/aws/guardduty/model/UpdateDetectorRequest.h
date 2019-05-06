/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * UpdateDetector request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateDetectorRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API UpdateDetectorRequest : public GuardDutyRequest
  {
  public:
    UpdateDetectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDetector"; }

    Aws::String SerializePayload() const override;


    /**
     * The unique ID of the detector that you want to update.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector that you want to update.
     */
    inline UpdateDetectorRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector that you want to update.
     */
    inline UpdateDetectorRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector that you want to update.
     */
    inline UpdateDetectorRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * Updated boolean value for the detector that specifies whether the detector is
     * enabled.
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * Updated boolean value for the detector that specifies whether the detector is
     * enabled.
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * Updated boolean value for the detector that specifies whether the detector is
     * enabled.
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * Updated boolean value for the detector that specifies whether the detector is
     * enabled.
     */
    inline UpdateDetectorRequest& WithEnable(bool value) { SetEnable(value); return *this;}


    /**
     * A enum value that specifies how frequently customer got Finding updates
     * published.
     */
    inline const FindingPublishingFrequency& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * A enum value that specifies how frequently customer got Finding updates
     * published.
     */
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }

    /**
     * A enum value that specifies how frequently customer got Finding updates
     * published.
     */
    inline void SetFindingPublishingFrequency(const FindingPublishingFrequency& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }

    /**
     * A enum value that specifies how frequently customer got Finding updates
     * published.
     */
    inline void SetFindingPublishingFrequency(FindingPublishingFrequency&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::move(value); }

    /**
     * A enum value that specifies how frequently customer got Finding updates
     * published.
     */
    inline UpdateDetectorRequest& WithFindingPublishingFrequency(const FindingPublishingFrequency& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * A enum value that specifies how frequently customer got Finding updates
     * published.
     */
    inline UpdateDetectorRequest& WithFindingPublishingFrequency(FindingPublishingFrequency&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    bool m_enable;
    bool m_enableHasBeenSet;

    FindingPublishingFrequency m_findingPublishingFrequency;
    bool m_findingPublishingFrequencyHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
