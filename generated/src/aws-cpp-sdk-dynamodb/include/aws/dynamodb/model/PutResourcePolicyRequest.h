/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource to which the policy
     * will be attached. The resources you can specify include tables and streams.</p>
     * <p>You can control index permissions using the base table's policy. To specify
     * the same permission level for your table and its indexes, you can provide both
     * the table and index Amazon Resource Name (ARN)s in the <code>Resource</code>
     * field of a given <code>Statement</code> in your policy document. Alternatively,
     * to specify different permissions for your table, indexes, or both, you can
     * define multiple <code>Statement</code> fields in your policy document.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format.</p>
     * <ul> <li> <p>The maximum size supported for a resource-based policy document is
     * 20 KB. DynamoDB counts whitespaces when calculating the size of a policy against
     * this limit.</p> </li> <li> <p>Within a resource-based policy, if the action for
     * a DynamoDB service-linked role (SLR) to replicate data for a global table is
     * denied, adding or deleting a replica will fail with an error.</p> </li> </ul>
     * <p>For a full list of all considerations that apply while attaching a
     * resource-based policy, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline const Aws::String& GetExpectedRevisionId() const{ return m_expectedRevisionId; }

    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }

    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline void SetExpectedRevisionId(const Aws::String& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = value; }

    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline void SetExpectedRevisionId(Aws::String&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::move(value); }

    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline void SetExpectedRevisionId(const char* value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId.assign(value); }

    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline PutResourcePolicyRequest& WithExpectedRevisionId(const Aws::String& value) { SetExpectedRevisionId(value); return *this;}

    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline PutResourcePolicyRequest& WithExpectedRevisionId(Aws::String&& value) { SetExpectedRevisionId(std::move(value)); return *this;}

    /**
     * <p>A string value that you can use to conditionally update your policy. You can
     * provide the revision ID of your existing policy to make mutating requests
     * against that policy.</p>  <p>When you provide an expected revision ID, if
     * the revision ID of the existing policy on the resource doesn't match or if
     * there's no policy attached to the resource, your request will be rejected with a
     * <code>PolicyNotFoundException</code>.</p>  <p>To conditionally attach a
     * policy when no policy exists for the resource, specify <code>NO_POLICY</code>
     * for the revision ID.</p>
     */
    inline PutResourcePolicyRequest& WithExpectedRevisionId(const char* value) { SetExpectedRevisionId(value); return *this;}


    /**
     * <p>Set this parameter to <code>true</code> to confirm that you want to remove
     * your permissions to change the policy of this resource in the future.</p>
     */
    inline bool GetConfirmRemoveSelfResourceAccess() const{ return m_confirmRemoveSelfResourceAccess; }

    /**
     * <p>Set this parameter to <code>true</code> to confirm that you want to remove
     * your permissions to change the policy of this resource in the future.</p>
     */
    inline bool ConfirmRemoveSelfResourceAccessHasBeenSet() const { return m_confirmRemoveSelfResourceAccessHasBeenSet; }

    /**
     * <p>Set this parameter to <code>true</code> to confirm that you want to remove
     * your permissions to change the policy of this resource in the future.</p>
     */
    inline void SetConfirmRemoveSelfResourceAccess(bool value) { m_confirmRemoveSelfResourceAccessHasBeenSet = true; m_confirmRemoveSelfResourceAccess = value; }

    /**
     * <p>Set this parameter to <code>true</code> to confirm that you want to remove
     * your permissions to change the policy of this resource in the future.</p>
     */
    inline PutResourcePolicyRequest& WithConfirmRemoveSelfResourceAccess(bool value) { SetConfirmRemoveSelfResourceAccess(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;

    bool m_confirmRemoveSelfResourceAccess;
    bool m_confirmRemoveSelfResourceAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
