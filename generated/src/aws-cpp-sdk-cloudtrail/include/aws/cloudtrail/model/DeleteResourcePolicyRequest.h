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
  class DeleteResourcePolicyRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API DeleteResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the CloudTrail channel you're deleting the
     * resource-based policy from. The following is the format of a resource ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:channel/MyChannel</code>. </p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
