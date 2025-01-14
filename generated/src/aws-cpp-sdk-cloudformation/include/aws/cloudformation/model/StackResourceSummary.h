﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ResourceStatus.h>
#include <aws/cloudformation/model/StackResourceDriftInformationSummary.h>
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
   * <p>Contains high-level information about the specified stack
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackResourceSummary">AWS
   * API Reference</a></p>
   */
  class StackResourceSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackResourceSummary();
    AWS_CLOUDFORMATION_API StackResourceSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackResourceSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }
    inline StackResourceSummary& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}
    inline StackResourceSummary& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    inline StackResourceSummary& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of
     * the resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }
    inline StackResourceSummary& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}
    inline StackResourceSummary& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    inline StackResourceSummary& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of resource. (For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>.)</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline StackResourceSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline StackResourceSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline StackResourceSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the status was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline StackResourceSummary& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline StackResourceSummary& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the resource.</p>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = std::move(value); }
    inline StackResourceSummary& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}
    inline StackResourceSummary& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline const Aws::String& GetResourceStatusReason() const{ return m_resourceStatusReason; }
    inline bool ResourceStatusReasonHasBeenSet() const { return m_resourceStatusReasonHasBeenSet; }
    inline void SetResourceStatusReason(const Aws::String& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = value; }
    inline void SetResourceStatusReason(Aws::String&& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = std::move(value); }
    inline void SetResourceStatusReason(const char* value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason.assign(value); }
    inline StackResourceSummary& WithResourceStatusReason(const Aws::String& value) { SetResourceStatusReason(value); return *this;}
    inline StackResourceSummary& WithResourceStatusReason(Aws::String&& value) { SetResourceStatusReason(std::move(value)); return *this;}
    inline StackResourceSummary& WithResourceStatusReason(const char* value) { SetResourceStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether the resource's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detect
     * unmanaged configuration changes to stacks and resources with drift
     * detection</a>.</p>
     */
    inline const StackResourceDriftInformationSummary& GetDriftInformation() const{ return m_driftInformation; }
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }
    inline void SetDriftInformation(const StackResourceDriftInformationSummary& value) { m_driftInformationHasBeenSet = true; m_driftInformation = value; }
    inline void SetDriftInformation(StackResourceDriftInformationSummary&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::move(value); }
    inline StackResourceSummary& WithDriftInformation(const StackResourceDriftInformationSummary& value) { SetDriftInformation(value); return *this;}
    inline StackResourceSummary& WithDriftInformation(StackResourceDriftInformationSummary&& value) { SetDriftInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline const ModuleInfo& GetModuleInfo() const{ return m_moduleInfo; }
    inline bool ModuleInfoHasBeenSet() const { return m_moduleInfoHasBeenSet; }
    inline void SetModuleInfo(const ModuleInfo& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = value; }
    inline void SetModuleInfo(ModuleInfo&& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = std::move(value); }
    inline StackResourceSummary& WithModuleInfo(const ModuleInfo& value) { SetModuleInfo(value); return *this;}
    inline StackResourceSummary& WithModuleInfo(ModuleInfo&& value) { SetModuleInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    ResourceStatus m_resourceStatus;
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_resourceStatusReason;
    bool m_resourceStatusReasonHasBeenSet = false;

    StackResourceDriftInformationSummary m_driftInformation;
    bool m_driftInformationHasBeenSet = false;

    ModuleInfo m_moduleInfo;
    bool m_moduleInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
