﻿/**
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
   * <p>The input for the <a>ExecuteChangeSet</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ExecuteChangeSetInput">AWS
   * API Reference</a></p>
   */
  class ExecuteChangeSetRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ExecuteChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteChangeSet"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline ExecuteChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline ExecuteChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline ExecuteChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}


    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline ExecuteChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline ExecuteChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline ExecuteChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline ExecuteChangeSetRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline ExecuteChangeSetRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline ExecuteChangeSetRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Preserves the state of previously provisioned resources when an operation
     * fails. This parameter can't be specified when the <code>OnStackFailure</code>
     * parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation was specified.</p> <ul> <li> <p> <code>True</code> - if the stack
     * creation fails, do nothing. This is equivalent to specifying
     * <code>DO_NOTHING</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>False</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying
     * <code>ROLLBACK</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> </ul> <p>Default: <code>True</code> </p>
     */
    inline bool GetDisableRollback() const{ return m_disableRollback; }

    /**
     * <p>Preserves the state of previously provisioned resources when an operation
     * fails. This parameter can't be specified when the <code>OnStackFailure</code>
     * parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation was specified.</p> <ul> <li> <p> <code>True</code> - if the stack
     * creation fails, do nothing. This is equivalent to specifying
     * <code>DO_NOTHING</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>False</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying
     * <code>ROLLBACK</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> </ul> <p>Default: <code>True</code> </p>
     */
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }

    /**
     * <p>Preserves the state of previously provisioned resources when an operation
     * fails. This parameter can't be specified when the <code>OnStackFailure</code>
     * parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation was specified.</p> <ul> <li> <p> <code>True</code> - if the stack
     * creation fails, do nothing. This is equivalent to specifying
     * <code>DO_NOTHING</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>False</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying
     * <code>ROLLBACK</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> </ul> <p>Default: <code>True</code> </p>
     */
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }

    /**
     * <p>Preserves the state of previously provisioned resources when an operation
     * fails. This parameter can't be specified when the <code>OnStackFailure</code>
     * parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation was specified.</p> <ul> <li> <p> <code>True</code> - if the stack
     * creation fails, do nothing. This is equivalent to specifying
     * <code>DO_NOTHING</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>False</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying
     * <code>ROLLBACK</code> for the <code>OnStackFailure</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateChangeSet.html">CreateChangeSet</a>
     * API operation.</p> </li> </ul> <p>Default: <code>True</code> </p>
     */
    inline ExecuteChangeSetRequest& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}


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
    inline ExecuteChangeSetRequest& WithRetainExceptOnCreate(bool value) { SetRetainExceptOnCreate(value); return *this;}

  private:

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    bool m_disableRollback;
    bool m_disableRollbackHasBeenSet = false;

    bool m_retainExceptOnCreate;
    bool m_retainExceptOnCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
