/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resource to which you want to attach a
     * policy. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy you want to associate with a resource. </p> <p>For an example
     * policy, see <a
     * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/sharing.html">
     * Working with shared backups</a> in the CloudHSM User Guide</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline PutResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline PutResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline PutResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
