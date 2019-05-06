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
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API DeleteThreatIntelSetRequest : public GuardDutyRequest
  {
  public:
    DeleteThreatIntelSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteThreatIntelSet"; }

    Aws::String SerializePayload() const override;


    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline DeleteThreatIntelSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline DeleteThreatIntelSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSet you
     * want to delete.
     */
    inline DeleteThreatIntelSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline const Aws::String& GetThreatIntelSetId() const{ return m_threatIntelSetId; }

    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline bool ThreatIntelSetIdHasBeenSet() const { return m_threatIntelSetIdHasBeenSet; }

    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline void SetThreatIntelSetId(const Aws::String& value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId = value; }

    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline void SetThreatIntelSetId(Aws::String&& value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId = std::move(value); }

    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline void SetThreatIntelSetId(const char* value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId.assign(value); }

    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline DeleteThreatIntelSetRequest& WithThreatIntelSetId(const Aws::String& value) { SetThreatIntelSetId(value); return *this;}

    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline DeleteThreatIntelSetRequest& WithThreatIntelSetId(Aws::String&& value) { SetThreatIntelSetId(std::move(value)); return *this;}

    /**
     * The unique ID that specifies the ThreatIntelSet that you want to delete.
     */
    inline DeleteThreatIntelSetRequest& WithThreatIntelSetId(const char* value) { SetThreatIntelSetId(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_threatIntelSetId;
    bool m_threatIntelSetIdHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
