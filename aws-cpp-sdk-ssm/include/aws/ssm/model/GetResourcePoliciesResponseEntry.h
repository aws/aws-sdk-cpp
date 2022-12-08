/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
   * Web Services account) that can manage your Systems Manager resources. Currently,
   * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
   * resource policies. The resource policy for <code>OpsItemGroup</code> enables
   * Amazon Web Services accounts to view and interact with OpsCenter operational
   * work items (OpsItems).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetResourcePoliciesResponseEntry">AWS
   * API Reference</a></p>
   */
  class GetResourcePoliciesResponseEntry
  {
  public:
    AWS_SSM_API GetResourcePoliciesResponseEntry();
    AWS_SSM_API GetResourcePoliciesResponseEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API GetResourcePoliciesResponseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A policy ID.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>A policy ID.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>A policy ID.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>A policy ID.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>A policy ID.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>A policy ID.</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>A policy ID.</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>A policy ID.</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline bool PolicyHashHasBeenSet() const { return m_policyHashHasBeenSet; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline void SetPolicyHash(const Aws::String& value) { m_policyHashHasBeenSet = true; m_policyHash = value; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline void SetPolicyHash(Aws::String&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::move(value); }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline void SetPolicyHash(const char* value) { m_policyHashHasBeenSet = true; m_policyHash.assign(value); }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}


    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A resource policy helps you to define the IAM entity (for example, an Amazon
     * Web Services account) that can manage your Systems Manager resources. Currently,
     * <code>OpsItemGroup</code> is the only resource that supports Systems Manager
     * resource policies. The resource policy for <code>OpsItemGroup</code> enables
     * Amazon Web Services accounts to view and interact with OpsCenter operational
     * work items (OpsItems).</p>
     */
    inline GetResourcePoliciesResponseEntry& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
