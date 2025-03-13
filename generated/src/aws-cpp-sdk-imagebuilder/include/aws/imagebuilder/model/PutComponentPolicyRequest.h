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
    AWS_IMAGEBUILDER_API PutComponentPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutComponentPolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component that this policy should be
     * applied to.</p>
     */
    inline const Aws::String& GetComponentArn() const { return m_componentArn; }
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }
    template<typename ComponentArnT = Aws::String>
    void SetComponentArn(ComponentArnT&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::forward<ComponentArnT>(value); }
    template<typename ComponentArnT = Aws::String>
    PutComponentPolicyRequest& WithComponentArn(ComponentArnT&& value) { SetComponentArn(std::forward<ComponentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy to apply.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutComponentPolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
