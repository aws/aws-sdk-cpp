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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class AWS_FMS_API DeletePolicyRequest : public FMSRequest
  {
  public:
    DeletePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline DeletePolicyRequest& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline DeletePolicyRequest& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the policy that you want to delete. <code>PolicyId</code> is
     * returned by <code>PutPolicy</code> and by <code>ListPolicies</code>.</p>
     */
    inline DeletePolicyRequest& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>If <code>True</code>, the request will also perform a clean-up process that
     * will:</p> <ul> <li> <p>Delete rule groups created by AWS Firewall Manager</p>
     * </li> <li> <p>Remove web ACLs from in-scope resources</p> </li> <li> <p>Delete
     * web ACLs that contain no rules or rule groups</p> </li> </ul> <p>After the
     * cleanup, in-scope resources will no longer be protected by web ACLs in this
     * policy. Protection of out-of-scope resources will remain unchanged. Scope is
     * determined by tags and accounts associated with the policy. When creating the
     * policy, if you specified that only resources in specific accounts or with
     * specific tags be protected by the policy, those resources are in-scope. All
     * others are out of scope. If you did not specify tags or accounts, all resources
     * are in-scope. </p>
     */
    inline bool GetDeleteAllPolicyResources() const{ return m_deleteAllPolicyResources; }

    /**
     * <p>If <code>True</code>, the request will also perform a clean-up process that
     * will:</p> <ul> <li> <p>Delete rule groups created by AWS Firewall Manager</p>
     * </li> <li> <p>Remove web ACLs from in-scope resources</p> </li> <li> <p>Delete
     * web ACLs that contain no rules or rule groups</p> </li> </ul> <p>After the
     * cleanup, in-scope resources will no longer be protected by web ACLs in this
     * policy. Protection of out-of-scope resources will remain unchanged. Scope is
     * determined by tags and accounts associated with the policy. When creating the
     * policy, if you specified that only resources in specific accounts or with
     * specific tags be protected by the policy, those resources are in-scope. All
     * others are out of scope. If you did not specify tags or accounts, all resources
     * are in-scope. </p>
     */
    inline bool DeleteAllPolicyResourcesHasBeenSet() const { return m_deleteAllPolicyResourcesHasBeenSet; }

    /**
     * <p>If <code>True</code>, the request will also perform a clean-up process that
     * will:</p> <ul> <li> <p>Delete rule groups created by AWS Firewall Manager</p>
     * </li> <li> <p>Remove web ACLs from in-scope resources</p> </li> <li> <p>Delete
     * web ACLs that contain no rules or rule groups</p> </li> </ul> <p>After the
     * cleanup, in-scope resources will no longer be protected by web ACLs in this
     * policy. Protection of out-of-scope resources will remain unchanged. Scope is
     * determined by tags and accounts associated with the policy. When creating the
     * policy, if you specified that only resources in specific accounts or with
     * specific tags be protected by the policy, those resources are in-scope. All
     * others are out of scope. If you did not specify tags or accounts, all resources
     * are in-scope. </p>
     */
    inline void SetDeleteAllPolicyResources(bool value) { m_deleteAllPolicyResourcesHasBeenSet = true; m_deleteAllPolicyResources = value; }

    /**
     * <p>If <code>True</code>, the request will also perform a clean-up process that
     * will:</p> <ul> <li> <p>Delete rule groups created by AWS Firewall Manager</p>
     * </li> <li> <p>Remove web ACLs from in-scope resources</p> </li> <li> <p>Delete
     * web ACLs that contain no rules or rule groups</p> </li> </ul> <p>After the
     * cleanup, in-scope resources will no longer be protected by web ACLs in this
     * policy. Protection of out-of-scope resources will remain unchanged. Scope is
     * determined by tags and accounts associated with the policy. When creating the
     * policy, if you specified that only resources in specific accounts or with
     * specific tags be protected by the policy, those resources are in-scope. All
     * others are out of scope. If you did not specify tags or accounts, all resources
     * are in-scope. </p>
     */
    inline DeletePolicyRequest& WithDeleteAllPolicyResources(bool value) { SetDeleteAllPolicyResources(value); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    bool m_deleteAllPolicyResources;
    bool m_deleteAllPolicyResourcesHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
