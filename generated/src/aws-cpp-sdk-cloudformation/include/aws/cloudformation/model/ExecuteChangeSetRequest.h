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
    AWS_CLOUDFORMATION_API ExecuteChangeSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteChangeSet"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the change set that you want use to
     * update the specified stack.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    ExecuteChangeSetRequest& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specified the name of a change set, specify the stack name or Amazon
     * Resource Name (ARN) that's associated with the change set you want to
     * execute.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    ExecuteChangeSetRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this <code>ExecuteChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to execute a change set to update a stack with the same
     * name. You might retry <code>ExecuteChangeSet</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    ExecuteChangeSetRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetDisableRollback() const { return m_disableRollback; }
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }
    inline ExecuteChangeSetRequest& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, newly created resources are deleted when the
     * operation rolls back. This includes newly created resources marked with a
     * deletion policy of <code>Retain</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetRetainExceptOnCreate() const { return m_retainExceptOnCreate; }
    inline bool RetainExceptOnCreateHasBeenSet() const { return m_retainExceptOnCreateHasBeenSet; }
    inline void SetRetainExceptOnCreate(bool value) { m_retainExceptOnCreateHasBeenSet = true; m_retainExceptOnCreate = value; }
    inline ExecuteChangeSetRequest& WithRetainExceptOnCreate(bool value) { SetRetainExceptOnCreate(value); return *this;}
    ///@}
  private:

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    bool m_disableRollback{false};
    bool m_disableRollbackHasBeenSet = false;

    bool m_retainExceptOnCreate{false};
    bool m_retainExceptOnCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
