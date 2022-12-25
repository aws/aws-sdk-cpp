/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AssignmentStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateIAMPolicyAssignmentRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateIAMPolicyAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIAMPolicyAssignment"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IAM policy
     * assignment. </p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }

    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }

    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = value; }

    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::move(value); }

    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline void SetAssignmentName(const char* value) { m_assignmentNameHasBeenSet = true; m_assignmentName.assign(value); }

    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}

    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the assignment, also called a rule. This name must be unique
     * within an Amazon Web Services account.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}


    /**
     * <p>The namespace of the assignment.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the assignment.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the assignment.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the assignment.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the assignment.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = std::move(value); }

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}

    /**
     * <p>The status of the assignment. Possible values are as follows:</p> <ul> <li>
     * <p> <code>ENABLED</code> - Anything specified in this assignment is used when
     * creating the data source.</p> </li> <li> <p> <code>DISABLED</code> - This
     * assignment isn't used when creating the data source.</p> </li> <li> <p>
     * <code>DRAFT</code> - This assignment is an unfinished draft and isn't used when
     * creating the data source.</p> </li> </ul>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM policy to apply to the Amazon QuickSight users and groups
     * specified in this assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIdentities() const{ return m_identities; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline bool IdentitiesHasBeenSet() const { return m_identitiesHasBeenSet; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline void SetIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_identitiesHasBeenSet = true; m_identities = value; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline void SetIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_identitiesHasBeenSet = true; m_identities = std::move(value); }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetIdentities(value); return *this;}

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetIdentities(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, value); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const char* key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon QuickSight users, groups, or both that you want to assign the
     * policy to.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const char* key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, value); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    AssignmentStatus m_assignmentStatus;
    bool m_assignmentStatusHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_identities;
    bool m_identitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
