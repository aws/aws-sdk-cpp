/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/AuditPolicyState.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyActivityStreamRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyActivityStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyActivityStream"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline ModifyActivityStreamRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline ModifyActivityStreamRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the RDS for Oracle DB instance, for
     * example, <code>arn:aws:rds:us-east-1:12345667890:instance:my-orcl-db</code>.</p>
     */
    inline ModifyActivityStreamRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The audit policy state. When a policy is unlocked, it is read/write. When it
     * is locked, it is read-only. You can edit your audit policy only when the
     * activity stream is unlocked or stopped.</p>
     */
    inline const AuditPolicyState& GetAuditPolicyState() const{ return m_auditPolicyState; }

    /**
     * <p>The audit policy state. When a policy is unlocked, it is read/write. When it
     * is locked, it is read-only. You can edit your audit policy only when the
     * activity stream is unlocked or stopped.</p>
     */
    inline bool AuditPolicyStateHasBeenSet() const { return m_auditPolicyStateHasBeenSet; }

    /**
     * <p>The audit policy state. When a policy is unlocked, it is read/write. When it
     * is locked, it is read-only. You can edit your audit policy only when the
     * activity stream is unlocked or stopped.</p>
     */
    inline void SetAuditPolicyState(const AuditPolicyState& value) { m_auditPolicyStateHasBeenSet = true; m_auditPolicyState = value; }

    /**
     * <p>The audit policy state. When a policy is unlocked, it is read/write. When it
     * is locked, it is read-only. You can edit your audit policy only when the
     * activity stream is unlocked or stopped.</p>
     */
    inline void SetAuditPolicyState(AuditPolicyState&& value) { m_auditPolicyStateHasBeenSet = true; m_auditPolicyState = std::move(value); }

    /**
     * <p>The audit policy state. When a policy is unlocked, it is read/write. When it
     * is locked, it is read-only. You can edit your audit policy only when the
     * activity stream is unlocked or stopped.</p>
     */
    inline ModifyActivityStreamRequest& WithAuditPolicyState(const AuditPolicyState& value) { SetAuditPolicyState(value); return *this;}

    /**
     * <p>The audit policy state. When a policy is unlocked, it is read/write. When it
     * is locked, it is read-only. You can edit your audit policy only when the
     * activity stream is unlocked or stopped.</p>
     */
    inline ModifyActivityStreamRequest& WithAuditPolicyState(AuditPolicyState&& value) { SetAuditPolicyState(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    AuditPolicyState m_auditPolicyState;
    bool m_auditPolicyStateHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
