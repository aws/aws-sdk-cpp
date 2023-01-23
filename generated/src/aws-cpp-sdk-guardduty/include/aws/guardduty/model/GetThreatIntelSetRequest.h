/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetThreatIntelSetRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API GetThreatIntelSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetThreatIntelSet"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline GetThreatIntelSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline GetThreatIntelSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector that the threatIntelSet is associated with.</p>
     */
    inline GetThreatIntelSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline const Aws::String& GetThreatIntelSetId() const{ return m_threatIntelSetId; }

    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline bool ThreatIntelSetIdHasBeenSet() const { return m_threatIntelSetIdHasBeenSet; }

    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline void SetThreatIntelSetId(const Aws::String& value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId = value; }

    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline void SetThreatIntelSetId(Aws::String&& value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId = std::move(value); }

    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline void SetThreatIntelSetId(const char* value) { m_threatIntelSetIdHasBeenSet = true; m_threatIntelSetId.assign(value); }

    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline GetThreatIntelSetRequest& WithThreatIntelSetId(const Aws::String& value) { SetThreatIntelSetId(value); return *this;}

    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline GetThreatIntelSetRequest& WithThreatIntelSetId(Aws::String&& value) { SetThreatIntelSetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the threatIntelSet that you want to get.</p>
     */
    inline GetThreatIntelSetRequest& WithThreatIntelSetId(const char* value) { SetThreatIntelSetId(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_threatIntelSetId;
    bool m_threatIntelSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
