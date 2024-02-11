/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ResourceStatus.h>
#include <aws/cloudformation/model/StackResourceDriftInformation.h>
#include <aws/cloudformation/model/ModuleInfo.h>
#include <utility>

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
   * <p>The StackResource data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackResource">AWS
   * API Reference</a></p>
   */
  class StackResource
  {
  public:
    AWS_CLOUDFORMATION_API StackResource();
    AWS_CLOUDFORMATION_API StackResource(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackResource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackResource& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackResource& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackResource& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline StackResource& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline StackResource& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline StackResource& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResource& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResource& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResource& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}


    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline StackResource& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline StackResource& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline StackResource& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}


    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline StackResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline StackResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline StackResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Time the status was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time the status was updated.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Time the status was updated.</p>
     */
    inline StackResource& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Time the status was updated.</p>
     */
    inline StackResource& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>Current status of the resource.</p>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }

    /**
     * <p>Current status of the resource.</p>
     */
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }

    /**
     * <p>Current status of the resource.</p>
     */
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }

    /**
     * <p>Current status of the resource.</p>
     */
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = std::move(value); }

    /**
     * <p>Current status of the resource.</p>
     */
    inline StackResource& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}

    /**
     * <p>Current status of the resource.</p>
     */
    inline StackResource& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}


    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline const Aws::String& GetResourceStatusReason() const{ return m_resourceStatusReason; }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline bool ResourceStatusReasonHasBeenSet() const { return m_resourceStatusReasonHasBeenSet; }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline void SetResourceStatusReason(const Aws::String& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = value; }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline void SetResourceStatusReason(Aws::String&& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = std::move(value); }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline void SetResourceStatusReason(const char* value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason.assign(value); }

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackResource& WithResourceStatusReason(const Aws::String& value) { SetResourceStatusReason(value); return *this;}

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackResource& WithResourceStatusReason(Aws::String&& value) { SetResourceStatusReason(std::move(value)); return *this;}

    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline StackResource& WithResourceStatusReason(const char* value) { SetResourceStatusReason(value); return *this;}


    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline StackResource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline StackResource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>User defined description associated with the resource.</p>
     */
    inline StackResource& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about whether the resource's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline const StackResourceDriftInformation& GetDriftInformation() const{ return m_driftInformation; }

    /**
     * <p>Information about whether the resource's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }

    /**
     * <p>Information about whether the resource's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline void SetDriftInformation(const StackResourceDriftInformation& value) { m_driftInformationHasBeenSet = true; m_driftInformation = value; }

    /**
     * <p>Information about whether the resource's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline void SetDriftInformation(StackResourceDriftInformation&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::move(value); }

    /**
     * <p>Information about whether the resource's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline StackResource& WithDriftInformation(const StackResourceDriftInformation& value) { SetDriftInformation(value); return *this;}

    /**
     * <p>Information about whether the resource's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline StackResource& WithDriftInformation(StackResourceDriftInformation&& value) { SetDriftInformation(std::move(value)); return *this;}


    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline const ModuleInfo& GetModuleInfo() const{ return m_moduleInfo; }

    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline bool ModuleInfoHasBeenSet() const { return m_moduleInfoHasBeenSet; }

    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline void SetModuleInfo(const ModuleInfo& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = value; }

    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline void SetModuleInfo(ModuleInfo&& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = std::move(value); }

    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline StackResource& WithModuleInfo(const ModuleInfo& value) { SetModuleInfo(value); return *this;}

    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline StackResource& WithModuleInfo(ModuleInfo&& value) { SetModuleInfo(std::move(value)); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    ResourceStatus m_resourceStatus;
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_resourceStatusReason;
    bool m_resourceStatusReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackResourceDriftInformation m_driftInformation;
    bool m_driftInformationHasBeenSet = false;

    ModuleInfo m_moduleInfo;
    bool m_moduleInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
