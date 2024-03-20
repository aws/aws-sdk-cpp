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
  class DeleteResourcePolicyRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DeleteResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DynamoDB resource from which the policy
     * will be removed. The resources you can specify include tables and streams. If
     * you remove the policy of a table, it will also remove the permissions for the
     * table's indexes defined in that policy document. This is because index
     * permissions are defined in the table's policy.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline const Aws::String& GetExpectedRevisionId() const{ return m_expectedRevisionId; }

    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }

    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline void SetExpectedRevisionId(const Aws::String& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = value; }

    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline void SetExpectedRevisionId(Aws::String&& value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId = std::move(value); }

    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline void SetExpectedRevisionId(const char* value) { m_expectedRevisionIdHasBeenSet = true; m_expectedRevisionId.assign(value); }

    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline DeleteResourcePolicyRequest& WithExpectedRevisionId(const Aws::String& value) { SetExpectedRevisionId(value); return *this;}

    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline DeleteResourcePolicyRequest& WithExpectedRevisionId(Aws::String&& value) { SetExpectedRevisionId(std::move(value)); return *this;}

    /**
     * <p>A string value that you can use to conditionally delete your policy. When you
     * provide an expected revision ID, if the revision ID of the existing policy on
     * the resource doesn't match or if there's no policy attached to the resource, the
     * request will fail and return a <code>PolicyNotFoundException</code>.</p>
     */
    inline DeleteResourcePolicyRequest& WithExpectedRevisionId(const char* value) { SetExpectedRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_expectedRevisionId;
    bool m_expectedRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
