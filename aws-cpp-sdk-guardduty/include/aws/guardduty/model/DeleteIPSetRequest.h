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
  class DeleteIPSetRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API DeleteIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIPSet"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline DeleteIPSetRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline DeleteIPSetRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector associated with the IPSet.</p>
     */
    inline DeleteIPSetRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline const Aws::String& GetIpSetId() const{ return m_ipSetId; }

    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline bool IpSetIdHasBeenSet() const { return m_ipSetIdHasBeenSet; }

    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline void SetIpSetId(const Aws::String& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = value; }

    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline void SetIpSetId(Aws::String&& value) { m_ipSetIdHasBeenSet = true; m_ipSetId = std::move(value); }

    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline void SetIpSetId(const char* value) { m_ipSetIdHasBeenSet = true; m_ipSetId.assign(value); }

    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline DeleteIPSetRequest& WithIpSetId(const Aws::String& value) { SetIpSetId(value); return *this;}

    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline DeleteIPSetRequest& WithIpSetId(Aws::String&& value) { SetIpSetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the IPSet to delete.</p>
     */
    inline DeleteIPSetRequest& WithIpSetId(const char* value) { SetIpSetId(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_ipSetId;
    bool m_ipSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
