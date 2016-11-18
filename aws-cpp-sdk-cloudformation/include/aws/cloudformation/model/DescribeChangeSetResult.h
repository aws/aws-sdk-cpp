﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ExecutionStatus.h>
#include <aws/cloudformation/model/ChangeSetStatus.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>
#include <aws/cloudformation/model/Change.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  /**
   * <p>The output for the <a>DescribeChangeSet</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DescribeChangeSetResult
  {
  public:
    DescribeChangeSetResult();
    DescribeChangeSetResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeChangeSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The name of the change set.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The name of the change set.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetName = value; }

    /**
     * <p>The name of the change set.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetName = value; }

    /**
     * <p>The name of the change set.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetName.assign(value); }

    /**
     * <p>The name of the change set.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name of the change set.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetName(Aws::String&& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name of the change set.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The ARN of the change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * <p>The ARN of the change set.</p>
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetId = value; }

    /**
     * <p>The ARN of the change set.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetId = value; }

    /**
     * <p>The ARN of the change set.</p>
     */
    inline void SetChangeSetId(const char* value) { m_changeSetId.assign(value); }

    /**
     * <p>The ARN of the change set.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>The ARN of the change set.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetId(Aws::String&& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>The ARN of the change set.</p>
     */
    inline DescribeChangeSetResult& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}

    /**
     * <p>The ARN of the stack that is associated with the change set.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ARN of the stack that is associated with the change set.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The ARN of the stack that is associated with the change set.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = value; }

    /**
     * <p>The ARN of the stack that is associated with the change set.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The ARN of the stack that is associated with the change set.</p>
     */
    inline DescribeChangeSetResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ARN of the stack that is associated with the change set.</p>
     */
    inline DescribeChangeSetResult& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The ARN of the stack that is associated with the change set.</p>
     */
    inline DescribeChangeSetResult& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The name of the stack that is associated with the change set.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack that is associated with the change set.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackName = value; }

    /**
     * <p>The name of the stack that is associated with the change set.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackName = value; }

    /**
     * <p>The name of the stack that is associated with the change set.</p>
     */
    inline void SetStackName(const char* value) { m_stackName.assign(value); }

    /**
     * <p>The name of the stack that is associated with the change set.</p>
     */
    inline DescribeChangeSetResult& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack that is associated with the change set.</p>
     */
    inline DescribeChangeSetResult& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack that is associated with the change set.</p>
     */
    inline DescribeChangeSetResult& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>Information about the change set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the change set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Information about the change set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>Information about the change set.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Information about the change set.</p>
     */
    inline DescribeChangeSetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the change set.</p>
     */
    inline DescribeChangeSetResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the change set.</p>
     */
    inline DescribeChangeSetResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline DescribeChangeSetResult& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline DescribeChangeSetResult& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline DescribeChangeSetResult& AddParameters(const Parameter& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline DescribeChangeSetResult& AddParameters(Parameter&& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = value; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline DescribeChangeSetResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline DescribeChangeSetResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatus = value; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatus = value; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline DescribeChangeSetResult& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline DescribeChangeSetResult& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>The current status of the change set, such as
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_COMPLETE</code>, or
     * <code>FAILED</code>.</p>
     */
    inline const ChangeSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the change set, such as
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_COMPLETE</code>, or
     * <code>FAILED</code>.</p>
     */
    inline void SetStatus(const ChangeSetStatus& value) { m_status = value; }

    /**
     * <p>The current status of the change set, such as
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_COMPLETE</code>, or
     * <code>FAILED</code>.</p>
     */
    inline void SetStatus(ChangeSetStatus&& value) { m_status = value; }

    /**
     * <p>The current status of the change set, such as
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_COMPLETE</code>, or
     * <code>FAILED</code>.</p>
     */
    inline DescribeChangeSetResult& WithStatus(const ChangeSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the change set, such as
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_COMPLETE</code>, or
     * <code>FAILED</code>.</p>
     */
    inline DescribeChangeSetResult& WithStatus(ChangeSetStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, AWS CloudFormation shows the error message.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, AWS CloudFormation shows the error message.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, AWS CloudFormation shows the error message.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = value; }

    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, AWS CloudFormation shows the error message.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, AWS CloudFormation shows the error message.</p>
     */
    inline DescribeChangeSetResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, AWS CloudFormation shows the error message.</p>
     */
    inline DescribeChangeSetResult& WithStatusReason(Aws::String&& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, AWS CloudFormation shows the error message.</p>
     */
    inline DescribeChangeSetResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNs = value; }

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNs = value; }

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& AddNotificationARNs(const Aws::String& value) { m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& AddNotificationARNs(Aws::String&& value) { m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The ARNs of the Amazon Simple Notification Service (Amazon SNS) topics that
     * will be associated with the stack if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& AddNotificationARNs(const char* value) { m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilities = value; }

    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilities = value; }

    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline DescribeChangeSetResult& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline DescribeChangeSetResult& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(value); return *this;}

    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline DescribeChangeSetResult& AddCapabilities(const Capability& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline DescribeChangeSetResult& AddCapabilities(Capability&& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = value; }

    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline DescribeChangeSetResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline DescribeChangeSetResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline DescribeChangeSetResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline DescribeChangeSetResult& AddTags(Tag&& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <code>Change</code> structures that describes the resources AWS
     * CloudFormation changes if you execute the change set.</p>
     */
    inline const Aws::Vector<Change>& GetChanges() const{ return m_changes; }

    /**
     * <p>A list of <code>Change</code> structures that describes the resources AWS
     * CloudFormation changes if you execute the change set.</p>
     */
    inline void SetChanges(const Aws::Vector<Change>& value) { m_changes = value; }

    /**
     * <p>A list of <code>Change</code> structures that describes the resources AWS
     * CloudFormation changes if you execute the change set.</p>
     */
    inline void SetChanges(Aws::Vector<Change>&& value) { m_changes = value; }

    /**
     * <p>A list of <code>Change</code> structures that describes the resources AWS
     * CloudFormation changes if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& WithChanges(const Aws::Vector<Change>& value) { SetChanges(value); return *this;}

    /**
     * <p>A list of <code>Change</code> structures that describes the resources AWS
     * CloudFormation changes if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& WithChanges(Aws::Vector<Change>&& value) { SetChanges(value); return *this;}

    /**
     * <p>A list of <code>Change</code> structures that describes the resources AWS
     * CloudFormation changes if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& AddChanges(const Change& value) { m_changes.push_back(value); return *this; }

    /**
     * <p>A list of <code>Change</code> structures that describes the resources AWS
     * CloudFormation changes if you execute the change set.</p>
     */
    inline DescribeChangeSetResult& AddChanges(Change&& value) { m_changes.push_back(value); return *this; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline DescribeChangeSetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline DescribeChangeSetResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline DescribeChangeSetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeChangeSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeChangeSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_changeSetName;
    Aws::String m_changeSetId;
    Aws::String m_stackId;
    Aws::String m_stackName;
    Aws::String m_description;
    Aws::Vector<Parameter> m_parameters;
    Aws::Utils::DateTime m_creationTime;
    ExecutionStatus m_executionStatus;
    ChangeSetStatus m_status;
    Aws::String m_statusReason;
    Aws::Vector<Aws::String> m_notificationARNs;
    Aws::Vector<Capability> m_capabilities;
    Aws::Vector<Tag> m_tags;
    Aws::Vector<Change> m_changes;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws