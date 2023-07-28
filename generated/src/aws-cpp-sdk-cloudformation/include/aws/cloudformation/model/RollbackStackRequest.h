/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class RollbackStackRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API RollbackStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RollbackStack"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline RollbackStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline RollbackStackRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name that's associated with the stack.</p>
     */
    inline RollbackStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline RollbackStackRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline RollbackStackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management role that
     * CloudFormation assumes to rollback the stack.</p>
     */
    inline RollbackStackRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline RollbackStackRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline RollbackStackRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>RollbackStack</code> request.</p>
     */
    inline RollbackStackRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline bool GetRetainExceptOnCreate() const{ return m_retainExceptOnCreate; }

    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline bool RetainExceptOnCreateHasBeenSet() const { return m_retainExceptOnCreateHasBeenSet; }

    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline void SetRetainExceptOnCreate(bool value) { m_retainExceptOnCreateHasBeenSet = true; m_retainExceptOnCreate = value; }

    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline RollbackStackRequest& WithRetainExceptOnCreate(bool value) { SetRetainExceptOnCreate(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    bool m_retainExceptOnCreate;
    bool m_retainExceptOnCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
