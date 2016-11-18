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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/ChangeAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/Replacement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResourceAttribute.h>
#include <aws/cloudformation/model/ResourceChangeDetail.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The <code>ResourceChange</code> structure describes the resource and the
   * action that AWS CloudFormation will perform on it if you execute this change
   * set.</p>
   */
  class AWS_CLOUDFORMATION_API ResourceChange
  {
  public:
    ResourceChange();
    ResourceChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResourceChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The action that AWS CloudFormation takes on the resource, such as
     * <code>Add</code> (adds a new resource), <code>Modify</code> (changes a
     * resource), or <code>Remove</code> (deletes a resource).</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that AWS CloudFormation takes on the resource, such as
     * <code>Add</code> (adds a new resource), <code>Modify</code> (changes a
     * resource), or <code>Remove</code> (deletes a resource).</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that AWS CloudFormation takes on the resource, such as
     * <code>Add</code> (adds a new resource), <code>Modify</code> (changes a
     * resource), or <code>Remove</code> (deletes a resource).</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that AWS CloudFormation takes on the resource, such as
     * <code>Add</code> (adds a new resource), <code>Modify</code> (changes a
     * resource), or <code>Remove</code> (deletes a resource).</p>
     */
    inline ResourceChange& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that AWS CloudFormation takes on the resource, such as
     * <code>Add</code> (adds a new resource), <code>Modify</code> (changes a
     * resource), or <code>Remove</code> (deletes a resource).</p>
     */
    inline ResourceChange& WithAction(ChangeAction&& value) { SetAction(value); return *this;}

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline ResourceChange& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline ResourceChange& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The resource's logical ID, which is defined in the stack's template.</p>
     */
    inline ResourceChange& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline ResourceChange& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline ResourceChange& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The resource's physical ID (resource name). Resources that you are adding
     * don't have physical IDs because they haven't been created.</p>
     */
    inline ResourceChange& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The type of AWS CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of AWS CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of AWS CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of AWS CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ResourceChange& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ResourceChange& WithResourceType(Aws::String&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of AWS CloudFormation resource, such as
     * <code>AWS::S3::Bucket</code>.</p>
     */
    inline ResourceChange& WithResourceType(const char* value) { SetResourceType(value); return *this;}

    /**
     * <p>For the <code>Modify</code> action, indicates whether AWS CloudFormation will
     * replace the resource by creating a new one and deleting the old one. This value
     * depends on the value of the <code>RequiresRecreation</code> property in the
     * <code>ResourceTargetDefinition</code> structure. For example, if the
     * <code>RequiresRecreation</code> field is <code>Always</code> and the
     * <code>Evaluation</code> field is <code>Static</code>, <code>Replacement</code>
     * is <code>True</code>. If the <code>RequiresRecreation</code> field is
     * <code>Always</code> and the <code>Evaluation</code> field is
     * <code>Dynamic</code>, <code>Replacement</code> is
     * <code>Conditionally</code>.</p> <p>If you have multiple changes with different
     * <code>RequiresRecreation</code> values, the <code>Replacement</code> value
     * depends on the change with the most impact. A <code>RequiresRecreation</code>
     * value of <code>Always</code> has the most impact, followed by
     * <code>Conditionally</code>, and then <code>Never</code>.</p>
     */
    inline const Replacement& GetReplacement() const{ return m_replacement; }

    /**
     * <p>For the <code>Modify</code> action, indicates whether AWS CloudFormation will
     * replace the resource by creating a new one and deleting the old one. This value
     * depends on the value of the <code>RequiresRecreation</code> property in the
     * <code>ResourceTargetDefinition</code> structure. For example, if the
     * <code>RequiresRecreation</code> field is <code>Always</code> and the
     * <code>Evaluation</code> field is <code>Static</code>, <code>Replacement</code>
     * is <code>True</code>. If the <code>RequiresRecreation</code> field is
     * <code>Always</code> and the <code>Evaluation</code> field is
     * <code>Dynamic</code>, <code>Replacement</code> is
     * <code>Conditionally</code>.</p> <p>If you have multiple changes with different
     * <code>RequiresRecreation</code> values, the <code>Replacement</code> value
     * depends on the change with the most impact. A <code>RequiresRecreation</code>
     * value of <code>Always</code> has the most impact, followed by
     * <code>Conditionally</code>, and then <code>Never</code>.</p>
     */
    inline void SetReplacement(const Replacement& value) { m_replacementHasBeenSet = true; m_replacement = value; }

    /**
     * <p>For the <code>Modify</code> action, indicates whether AWS CloudFormation will
     * replace the resource by creating a new one and deleting the old one. This value
     * depends on the value of the <code>RequiresRecreation</code> property in the
     * <code>ResourceTargetDefinition</code> structure. For example, if the
     * <code>RequiresRecreation</code> field is <code>Always</code> and the
     * <code>Evaluation</code> field is <code>Static</code>, <code>Replacement</code>
     * is <code>True</code>. If the <code>RequiresRecreation</code> field is
     * <code>Always</code> and the <code>Evaluation</code> field is
     * <code>Dynamic</code>, <code>Replacement</code> is
     * <code>Conditionally</code>.</p> <p>If you have multiple changes with different
     * <code>RequiresRecreation</code> values, the <code>Replacement</code> value
     * depends on the change with the most impact. A <code>RequiresRecreation</code>
     * value of <code>Always</code> has the most impact, followed by
     * <code>Conditionally</code>, and then <code>Never</code>.</p>
     */
    inline void SetReplacement(Replacement&& value) { m_replacementHasBeenSet = true; m_replacement = value; }

    /**
     * <p>For the <code>Modify</code> action, indicates whether AWS CloudFormation will
     * replace the resource by creating a new one and deleting the old one. This value
     * depends on the value of the <code>RequiresRecreation</code> property in the
     * <code>ResourceTargetDefinition</code> structure. For example, if the
     * <code>RequiresRecreation</code> field is <code>Always</code> and the
     * <code>Evaluation</code> field is <code>Static</code>, <code>Replacement</code>
     * is <code>True</code>. If the <code>RequiresRecreation</code> field is
     * <code>Always</code> and the <code>Evaluation</code> field is
     * <code>Dynamic</code>, <code>Replacement</code> is
     * <code>Conditionally</code>.</p> <p>If you have multiple changes with different
     * <code>RequiresRecreation</code> values, the <code>Replacement</code> value
     * depends on the change with the most impact. A <code>RequiresRecreation</code>
     * value of <code>Always</code> has the most impact, followed by
     * <code>Conditionally</code>, and then <code>Never</code>.</p>
     */
    inline ResourceChange& WithReplacement(const Replacement& value) { SetReplacement(value); return *this;}

    /**
     * <p>For the <code>Modify</code> action, indicates whether AWS CloudFormation will
     * replace the resource by creating a new one and deleting the old one. This value
     * depends on the value of the <code>RequiresRecreation</code> property in the
     * <code>ResourceTargetDefinition</code> structure. For example, if the
     * <code>RequiresRecreation</code> field is <code>Always</code> and the
     * <code>Evaluation</code> field is <code>Static</code>, <code>Replacement</code>
     * is <code>True</code>. If the <code>RequiresRecreation</code> field is
     * <code>Always</code> and the <code>Evaluation</code> field is
     * <code>Dynamic</code>, <code>Replacement</code> is
     * <code>Conditionally</code>.</p> <p>If you have multiple changes with different
     * <code>RequiresRecreation</code> values, the <code>Replacement</code> value
     * depends on the change with the most impact. A <code>RequiresRecreation</code>
     * value of <code>Always</code> has the most impact, followed by
     * <code>Conditionally</code>, and then <code>Never</code>.</p>
     */
    inline ResourceChange& WithReplacement(Replacement&& value) { SetReplacement(value); return *this;}

    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline const Aws::Vector<ResourceAttribute>& GetScope() const{ return m_scope; }

    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline void SetScope(const Aws::Vector<ResourceAttribute>& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline void SetScope(Aws::Vector<ResourceAttribute>&& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline ResourceChange& WithScope(const Aws::Vector<ResourceAttribute>& value) { SetScope(value); return *this;}

    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline ResourceChange& WithScope(Aws::Vector<ResourceAttribute>&& value) { SetScope(value); return *this;}

    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline ResourceChange& AddScope(const ResourceAttribute& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }

    /**
     * <p>For the <code>Modify</code> action, indicates which resource attribute is
     * triggering this update, such as a change in the resource attribute's
     * <code>Metadata</code>, <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline ResourceChange& AddScope(ResourceAttribute&& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }

    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that AWS
     * CloudFormation will make to the resource. </p>
     */
    inline const Aws::Vector<ResourceChangeDetail>& GetDetails() const{ return m_details; }

    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that AWS
     * CloudFormation will make to the resource. </p>
     */
    inline void SetDetails(const Aws::Vector<ResourceChangeDetail>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that AWS
     * CloudFormation will make to the resource. </p>
     */
    inline void SetDetails(Aws::Vector<ResourceChangeDetail>&& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that AWS
     * CloudFormation will make to the resource. </p>
     */
    inline ResourceChange& WithDetails(const Aws::Vector<ResourceChangeDetail>& value) { SetDetails(value); return *this;}

    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that AWS
     * CloudFormation will make to the resource. </p>
     */
    inline ResourceChange& WithDetails(Aws::Vector<ResourceChangeDetail>&& value) { SetDetails(value); return *this;}

    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that AWS
     * CloudFormation will make to the resource. </p>
     */
    inline ResourceChange& AddDetails(const ResourceChangeDetail& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p>For the <code>Modify</code> action, a list of
     * <code>ResourceChangeDetail</code> structures that describes the changes that AWS
     * CloudFormation will make to the resource. </p>
     */
    inline ResourceChange& AddDetails(ResourceChangeDetail&& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

  private:
    ChangeAction m_action;
    bool m_actionHasBeenSet;
    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet;
    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet;
    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Replacement m_replacement;
    bool m_replacementHasBeenSet;
    Aws::Vector<ResourceAttribute> m_scope;
    bool m_scopeHasBeenSet;
    Aws::Vector<ResourceChangeDetail> m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
