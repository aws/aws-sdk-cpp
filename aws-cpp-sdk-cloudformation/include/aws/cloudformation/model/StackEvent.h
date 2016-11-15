/*
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
   * <p>The StackEvent data type.</p>
   */
  class AWS_CLOUDFORMATION_API StackEvent
  {
  public:
    StackEvent();
    StackEvent(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackEvent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline StackEvent& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline StackEvent& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline StackEvent& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The unique ID of this event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The unique ID of this event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The unique ID of this event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The unique ID of this event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The unique ID of this event.</p>
     */
    inline StackEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The unique ID of this event.</p>
     */
    inline StackEvent& WithEventId(Aws::String&& value) { SetEventId(value); return *this;}

    /**
     * <p>The unique ID of this event.</p>
     */
    inline StackEvent& WithEventId(const char* value) { SetEventId(value); return *this;}

    /**
     * <p>The name associated with a stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name associated with a stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with a stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with a stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name associated with a stack.</p>
     */
    inline StackEvent& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with a stack.</p>
     */
    inline StackEvent& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with a stack.</p>
     */
    inline StackEvent& WithStackName(const char* value) { SetStackName(value); return *this;}

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
    inline StackEvent& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackEvent& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackEvent& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline StackEvent& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline StackEvent& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline StackEvent& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>Type of resource. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of resource. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Type of resource. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline StackEvent& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline StackEvent& WithResourceType(Aws::String&& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">
     * AWS Resource Types Reference</a> in the AWS CloudFormation User Guide.)</p>
     */
    inline StackEvent& WithResourceType(const char* value) { SetResourceType(value); return *this;}

    /**
     * <p>Time the status was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline StackEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Time the status was updated.</p>
     */
    inline StackEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(value); return *this;}

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
    inline StackEvent& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Current status of the resource.</p>
     */
    inline StackEvent& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(value); return *this;}

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
    inline StackEvent& WithResourceStatusReason(const Aws::String& value) { SetResourceStatusReason(value); return *this;}

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackEvent& WithResourceStatusReason(Aws::String&& value) { SetResourceStatusReason(value); return *this;}

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackEvent& WithResourceStatusReason(const char* value) { SetResourceStatusReason(value); return *this;}

    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline const Aws::String& GetResourceProperties() const{ return m_resourceProperties; }

    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline void SetResourceProperties(const Aws::String& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = value; }

    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline void SetResourceProperties(Aws::String&& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = value; }

    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline void SetResourceProperties(const char* value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties.assign(value); }

    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline StackEvent& WithResourceProperties(const Aws::String& value) { SetResourceProperties(value); return *this;}

    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline StackEvent& WithResourceProperties(Aws::String&& value) { SetResourceProperties(value); return *this;}

    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline StackEvent& WithResourceProperties(const char* value) { SetResourceProperties(value); return *this;}

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet;
    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet;
    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
    ResourceStatus m_resourceStatus;
    bool m_resourceStatusHasBeenSet;
    Aws::String m_resourceStatusReason;
    bool m_resourceStatusReasonHasBeenSet;
    Aws::String m_resourceProperties;
    bool m_resourcePropertiesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
