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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API PutTagPolicyRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    PutTagPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTagPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline PutTagPolicyRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline PutTagPolicyRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The account ID or the root identifier of the organization. If you don't know
     * the root ID, you can call the AWS Organizations <a
     * href="http://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API to find it. </p>
     */
    inline PutTagPolicyRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline PutTagPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline PutTagPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The tag policy to attach to the target.</p>
     */
    inline PutTagPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
