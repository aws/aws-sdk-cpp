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
  class AWS_QUICKSIGHT_API UpdateIAMPolicyAssignmentRequest : public QuickSightRequest
  {
  public:
    UpdateIAMPolicyAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIAMPolicyAssignment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID that contains the IAM policy assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }

    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
     */
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }

    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
     */
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = value; }

    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
     */
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::move(value); }

    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
     */
    inline void SetAssignmentName(const char* value) { m_assignmentNameHasBeenSet = true; m_assignmentName.assign(value); }

    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}

    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the assignment. It must be unique within an AWS account.</p>
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
     * <p>The status of an assignment:</p> <ul> <li> <p>ENABLED - Anything specified in
     * this assignment is used while creating the data source.</p> </li> <li>
     * <p>DISABLED - This assignment isn't used while creating the data source.</p>
     * </li> <li> <p>DRAFT - Assignment is an unfinished draft and isn't used while
     * creating the data source.</p> </li> </ul>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }

    /**
     * <p>The status of an assignment:</p> <ul> <li> <p>ENABLED - Anything specified in
     * this assignment is used while creating the data source.</p> </li> <li>
     * <p>DISABLED - This assignment isn't used while creating the data source.</p>
     * </li> <li> <p>DRAFT - Assignment is an unfinished draft and isn't used while
     * creating the data source.</p> </li> </ul>
     */
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }

    /**
     * <p>The status of an assignment:</p> <ul> <li> <p>ENABLED - Anything specified in
     * this assignment is used while creating the data source.</p> </li> <li>
     * <p>DISABLED - This assignment isn't used while creating the data source.</p>
     * </li> <li> <p>DRAFT - Assignment is an unfinished draft and isn't used while
     * creating the data source.</p> </li> </ul>
     */
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }

    /**
     * <p>The status of an assignment:</p> <ul> <li> <p>ENABLED - Anything specified in
     * this assignment is used while creating the data source.</p> </li> <li>
     * <p>DISABLED - This assignment isn't used while creating the data source.</p>
     * </li> <li> <p>DRAFT - Assignment is an unfinished draft and isn't used while
     * creating the data source.</p> </li> </ul>
     */
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = std::move(value); }

    /**
     * <p>The status of an assignment:</p> <ul> <li> <p>ENABLED - Anything specified in
     * this assignment is used while creating the data source.</p> </li> <li>
     * <p>DISABLED - This assignment isn't used while creating the data source.</p>
     * </li> <li> <p>DRAFT - Assignment is an unfinished draft and isn't used while
     * creating the data source.</p> </li> </ul>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}

    /**
     * <p>The status of an assignment:</p> <ul> <li> <p>ENABLED - Anything specified in
     * this assignment is used while creating the data source.</p> </li> <li>
     * <p>DISABLED - This assignment isn't used while creating the data source.</p>
     * </li> <li> <p>DRAFT - Assignment is an unfinished draft and isn't used while
     * creating the data source.</p> </li> </ul>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}


    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>An IAM policy Amazon Resource Name (ARN) that will be applied to specified
     * QuickSight users and groups in this assignment.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIdentities() const{ return m_identities; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline bool IdentitiesHasBeenSet() const { return m_identitiesHasBeenSet; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline void SetIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_identitiesHasBeenSet = true; m_identities = value; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline void SetIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_identitiesHasBeenSet = true; m_identities = std::move(value); }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithIdentities(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetIdentities(value); return *this;}

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& WithIdentities(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetIdentities(std::move(value)); return *this;}

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, value); return *this; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(std::move(key), value); return *this; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const char* key, Aws::Vector<Aws::String>&& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, std::move(value)); return *this; }

    /**
     * <p>QuickSight users and/or groups that you want to assign to the specified IAM
     * policy.</p>
     */
    inline UpdateIAMPolicyAssignmentRequest& AddIdentities(const char* key, const Aws::Vector<Aws::String>& value) { m_identitiesHasBeenSet = true; m_identities.emplace(key, value); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    AssignmentStatus m_assignmentStatus;
    bool m_assignmentStatusHasBeenSet;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_identities;
    bool m_identitiesHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
