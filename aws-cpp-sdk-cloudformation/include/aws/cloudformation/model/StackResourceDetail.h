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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ResourceStatus.h>

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
   * <p>Contains detailed information about the specified stack resource.</p>
   */
  class AWS_CLOUDFORMATION_API StackResourceDetail
  {
  public:
    StackResourceDetail();
    StackResourceDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackResourceDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackResourceDetail& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackResourceDetail& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackResourceDetail& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline StackResourceDetail& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline StackResourceDetail& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline StackResourceDetail& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResourceDetail& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResourceDetail& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResourceDetail& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p>
     */
    inline StackResourceDetail& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p>
     */
    inline StackResourceDetail& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p>
     */
    inline StackResourceDetail& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>Type of resource. ((For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of resource. ((For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource. ((For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource. ((For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Type of resource. ((For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline StackResourceDetail& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource. ((For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline StackResourceDetail& WithResourceType(Aws::String&& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource. ((For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline StackResourceDetail& WithResourceType(const char* value) { SetResourceType(value); return *this;}

    /**
     * <p>Time the status was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline StackResourceDetail& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>Time the status was updated.</p>
     */
    inline StackResourceDetail& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>Current status of the resource.</p>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }

    /**
     * <p>Current status of the resource.</p>
     */
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }

    /**
     * <p>Current status of the resource.</p>
     */
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }

    /**
     * <p>Current status of the resource.</p>
     */
    inline StackResourceDetail& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Current status of the resource.</p>
     */
    inline StackResourceDetail& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline const Aws::String& GetResourceStatusReason() const{ return m_resourceStatusReason; }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline void SetResourceStatusReason(const Aws::String& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = value; }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline void SetResourceStatusReason(Aws::String&& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = value; }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline void SetResourceStatusReason(const char* value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason.assign(value); }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackResourceDetail& WithResourceStatusReason(const Aws::String& value) { SetResourceStatusReason(value); return *this;}

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackResourceDetail& WithResourceStatusReason(Aws::String&& value) { SetResourceStatusReason(value); return *this;}

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackResourceDetail& WithResourceStatusReason(const char* value) { SetResourceStatusReason(value); return *this;}

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline StackResourceDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline StackResourceDetail& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline StackResourceDetail& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The content of the <code>Metadata</code> attribute declared for the resource.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-metadata.html">Metadata
     * Attribute</a> in the AWS CloudFormation User Guide.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The content of the <code>Metadata</code> attribute declared for the resource.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-metadata.html">Metadata
     * Attribute</a> in the AWS CloudFormation User Guide.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The content of the <code>Metadata</code> attribute declared for the resource.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-metadata.html">Metadata
     * Attribute</a> in the AWS CloudFormation User Guide.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The content of the <code>Metadata</code> attribute declared for the resource.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-metadata.html">Metadata
     * Attribute</a> in the AWS CloudFormation User Guide.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The content of the <code>Metadata</code> attribute declared for the resource.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-metadata.html">Metadata
     * Attribute</a> in the AWS CloudFormation User Guide.</p>
     */
    inline StackResourceDetail& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The content of the <code>Metadata</code> attribute declared for the resource.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-metadata.html">Metadata
     * Attribute</a> in the AWS CloudFormation User Guide.</p>
     */
    inline StackResourceDetail& WithMetadata(Aws::String&& value) { SetMetadata(value); return *this;}

    /**
     * <p>The content of the <code>Metadata</code> attribute declared for the resource.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-metadata.html">Metadata
     * Attribute</a> in the AWS CloudFormation User Guide.</p>
     */
    inline StackResourceDetail& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet;
    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet;
    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet;
    ResourceStatus m_resourceStatus;
    bool m_resourceStatusHasBeenSet;
    Aws::String m_resourceStatusReason;
    bool m_resourceStatusReasonHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_metadata;
    bool m_metadataHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
