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
    AWS_CLOUDFORMATION_API StackResourceSummary() = default;
    AWS_CLOUDFORMATION_API StackResourceSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackResourceSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    StackResourceSummary& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of
     * the resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = Aws::String>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = Aws::String>
    StackResourceSummary& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of resource. (For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>.)</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    StackResourceSummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the status was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    StackResourceSummary& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the resource.</p>
     */
    inline ResourceStatus GetResourceStatus() const { return m_resourceStatus; }
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
    inline void SetResourceStatus(ResourceStatus value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }
    inline StackResourceSummary& WithResourceStatus(ResourceStatus value) { SetResourceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline const Aws::String& GetResourceStatusReason() const { return m_resourceStatusReason; }
    inline bool ResourceStatusReasonHasBeenSet() const { return m_resourceStatusReasonHasBeenSet; }
    template<typename ResourceStatusReasonT = Aws::String>
    void SetResourceStatusReason(ResourceStatusReasonT&& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = std::forward<ResourceStatusReasonT>(value); }
    template<typename ResourceStatusReasonT = Aws::String>
    StackResourceSummary& WithResourceStatusReason(ResourceStatusReasonT&& value) { SetResourceStatusReason(std::forward<ResourceStatusReasonT>(value)); return *this;}
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
    inline const StackResourceDriftInformationSummary& GetDriftInformation() const { return m_driftInformation; }
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }
    template<typename DriftInformationT = StackResourceDriftInformationSummary>
    void SetDriftInformation(DriftInformationT&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::forward<DriftInformationT>(value); }
    template<typename DriftInformationT = StackResourceDriftInformationSummary>
    StackResourceSummary& WithDriftInformation(DriftInformationT&& value) { SetDriftInformation(std::forward<DriftInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the module from which the resource was created, if
     * the resource was created from a module included in the stack template.</p>
     */
    inline const ModuleInfo& GetModuleInfo() const { return m_moduleInfo; }
    inline bool ModuleInfoHasBeenSet() const { return m_moduleInfoHasBeenSet; }
    template<typename ModuleInfoT = ModuleInfo>
    void SetModuleInfo(ModuleInfoT&& value) { m_moduleInfoHasBeenSet = true; m_moduleInfo = std::forward<ModuleInfoT>(value); }
    template<typename ModuleInfoT = ModuleInfo>
    StackResourceSummary& WithModuleInfo(ModuleInfoT&& value) { SetModuleInfo(std::forward<ModuleInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    ResourceStatus m_resourceStatus{ResourceStatus::NOT_SET};
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
