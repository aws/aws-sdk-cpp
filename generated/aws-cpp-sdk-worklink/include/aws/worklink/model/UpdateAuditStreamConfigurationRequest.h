﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkLink
{
namespace Model
{

  /**
   */
  class AWS_WORKLINK_API UpdateAuditStreamConfigurationRequest : public WorkLinkRequest
  {
  public:
    UpdateAuditStreamConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAuditStreamConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateAuditStreamConfigurationRequest& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateAuditStreamConfigurationRequest& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the fleet.</p>
     */
    inline UpdateAuditStreamConfigurationRequest& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline const Aws::String& GetAuditStreamArn() const{ return m_auditStreamArn; }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline bool AuditStreamArnHasBeenSet() const { return m_auditStreamArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline void SetAuditStreamArn(const Aws::String& value) { m_auditStreamArnHasBeenSet = true; m_auditStreamArn = value; }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline void SetAuditStreamArn(Aws::String&& value) { m_auditStreamArnHasBeenSet = true; m_auditStreamArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline void SetAuditStreamArn(const char* value) { m_auditStreamArnHasBeenSet = true; m_auditStreamArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline UpdateAuditStreamConfigurationRequest& WithAuditStreamArn(const Aws::String& value) { SetAuditStreamArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline UpdateAuditStreamConfigurationRequest& WithAuditStreamArn(Aws::String&& value) { SetAuditStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis data stream that receives the audit events.</p>
     */
    inline UpdateAuditStreamConfigurationRequest& WithAuditStreamArn(const char* value) { SetAuditStreamArn(value); return *this;}

  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    Aws::String m_auditStreamArn;
    bool m_auditStreamArnHasBeenSet;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
