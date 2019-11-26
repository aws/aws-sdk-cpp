/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/EffectivePolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API DescribeEffectivePolicyRequest : public OrganizationsRequest
  {
  public:
    DescribeEffectivePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEffectivePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of policy that you want information about.</p>
     */
    inline const EffectivePolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy that you want information about.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy that you want information about.</p>
     */
    inline void SetPolicyType(const EffectivePolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy that you want information about.</p>
     */
    inline void SetPolicyType(EffectivePolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy that you want information about.</p>
     */
    inline DescribeEffectivePolicyRequest& WithPolicyType(const EffectivePolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy that you want information about.</p>
     */
    inline DescribeEffectivePolicyRequest& WithPolicyType(EffectivePolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline DescribeEffectivePolicyRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline DescribeEffectivePolicyRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>When you're signed in as the master account, specify the ID of the account
     * that you want details about. Specifying an organization root or OU as the target
     * is not supported. </p>
     */
    inline DescribeEffectivePolicyRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}

  private:

    EffectivePolicyType m_policyType;
    bool m_policyTypeHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
