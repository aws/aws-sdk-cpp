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
    AWS_DYNAMODB_API PutResourcePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
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
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PutResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutResourcePolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
    template<typename ExpectedRevisionIdT = Aws::String>
    void SetExpectedRevisionId(ExpectedRevisionIdT&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value); }
    template<typename ExpectedRevisionIdT = Aws::String>
    PutResourcePolicyRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) { SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this parameter to <code>true</code> to confirm that you want to remove
     * your permissions to change the policy of this resource in the future.</p>
     */
    inline bool GetConfirmRemoveSelfResourceAccess() const { return m_confirmRemoveSelfResourceAccess; }
    inline bool ConfirmRemoveSelfResourceAccessHasBeenSet() const { return m_confirmRemoveSelfResourceAccessHasBeenSet; }
    inline void SetConfirmRemoveSelfResourceAccess(bool value) { m_confirmRemoveSelfResourceAccessHasBeenSet = true; m_confirmRemoveSelfResourceAccess = value; }
    inline PutResourcePolicyRequest& WithConfirmRemoveSelfResourceAccess(bool value) { SetConfirmRemoveSelfResourceAccess(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;

    bool m_confirmRemoveSelfResourceAccess{false};
    bool m_confirmRemoveSelfResourceAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
