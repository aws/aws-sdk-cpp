/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class PutComponentPolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API PutComponentPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutComponentPolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline void SetComponentArn(const Aws::String& value) { m_componentArnHasBeenSet = true; m_componentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline void SetComponentArn(Aws::String&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline void SetComponentArn(const char* value) { m_componentArnHasBeenSet = true; m_componentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline PutComponentPolicyRequest& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline PutComponentPolicyRequest& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline PutComponentPolicyRequest& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}


    /**
     * <p>The policy to apply.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The policy to apply.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The policy to apply.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The policy to apply.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The policy to apply.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The policy to apply.</p>
     */
    inline PutComponentPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy to apply.</p>
     */
    inline PutComponentPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The policy to apply.</p>
     */
    inline PutComponentPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
