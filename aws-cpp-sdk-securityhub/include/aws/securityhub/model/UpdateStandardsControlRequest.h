/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ControlStatus.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateStandardsControlRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateStandardsControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStandardsControl"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline const Aws::String& GetStandardsControlArn() const{ return m_standardsControlArn; }

    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline bool StandardsControlArnHasBeenSet() const { return m_standardsControlArnHasBeenSet; }

    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline void SetStandardsControlArn(const Aws::String& value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn = value; }

    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline void SetStandardsControlArn(Aws::String&& value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn = std::move(value); }

    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline void SetStandardsControlArn(const char* value) { m_standardsControlArnHasBeenSet = true; m_standardsControlArn.assign(value); }

    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline UpdateStandardsControlRequest& WithStandardsControlArn(const Aws::String& value) { SetStandardsControlArn(value); return *this;}

    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline UpdateStandardsControlRequest& WithStandardsControlArn(Aws::String&& value) { SetStandardsControlArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the security standard control to enable or disable.</p>
     */
    inline UpdateStandardsControlRequest& WithStandardsControlArn(const char* value) { SetStandardsControlArn(value); return *this;}


    /**
     * <p>The updated status of the security standard control.</p>
     */
    inline const ControlStatus& GetControlStatus() const{ return m_controlStatus; }

    /**
     * <p>The updated status of the security standard control.</p>
     */
    inline bool ControlStatusHasBeenSet() const { return m_controlStatusHasBeenSet; }

    /**
     * <p>The updated status of the security standard control.</p>
     */
    inline void SetControlStatus(const ControlStatus& value) { m_controlStatusHasBeenSet = true; m_controlStatus = value; }

    /**
     * <p>The updated status of the security standard control.</p>
     */
    inline void SetControlStatus(ControlStatus&& value) { m_controlStatusHasBeenSet = true; m_controlStatus = std::move(value); }

    /**
     * <p>The updated status of the security standard control.</p>
     */
    inline UpdateStandardsControlRequest& WithControlStatus(const ControlStatus& value) { SetControlStatus(value); return *this;}

    /**
     * <p>The updated status of the security standard control.</p>
     */
    inline UpdateStandardsControlRequest& WithControlStatus(ControlStatus&& value) { SetControlStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline const Aws::String& GetDisabledReason() const{ return m_disabledReason; }

    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline bool DisabledReasonHasBeenSet() const { return m_disabledReasonHasBeenSet; }

    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline void SetDisabledReason(const Aws::String& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = value; }

    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline void SetDisabledReason(Aws::String&& value) { m_disabledReasonHasBeenSet = true; m_disabledReason = std::move(value); }

    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline void SetDisabledReason(const char* value) { m_disabledReasonHasBeenSet = true; m_disabledReason.assign(value); }

    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline UpdateStandardsControlRequest& WithDisabledReason(const Aws::String& value) { SetDisabledReason(value); return *this;}

    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline UpdateStandardsControlRequest& WithDisabledReason(Aws::String&& value) { SetDisabledReason(std::move(value)); return *this;}

    /**
     * <p>A description of the reason why you are disabling a security standard
     * control. If you are disabling a control, then this is required.</p>
     */
    inline UpdateStandardsControlRequest& WithDisabledReason(const char* value) { SetDisabledReason(value); return *this;}

  private:

    Aws::String m_standardsControlArn;
    bool m_standardsControlArnHasBeenSet = false;

    ControlStatus m_controlStatus;
    bool m_controlStatusHasBeenSet = false;

    Aws::String m_disabledReason;
    bool m_disabledReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
