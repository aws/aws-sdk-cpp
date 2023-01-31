/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel attached to the
     * resource-based policy. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }

    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }

    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }

    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p> A JSON-formatted string for an Amazon Web Services resource-based policy.
     * </p> <p>The following are requirements for the resource policy:</p> <ul> <li>
     * <p> Contains only one action: cloudtrail-data:PutAuditEvents </p> </li> <li> <p>
     * Contains at least one statement. The policy can have a maximum of 20 statements.
     * </p> </li> <li> <p> Each statement contains at least one principal. A statement
     * can have a maximum of 50 principals. </p> </li> </ul>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
