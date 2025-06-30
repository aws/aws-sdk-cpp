/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackResourceDriftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ModuleInfo.h>
#include <aws/cloudformation/model/PhysicalResourceIdContextKeyValuePair.h>
#include <aws/cloudformation/model/PropertyDifference.h>
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
   * <p>Contains the drift information for a resource that has been checked for
   * drift. This includes actual and expected property values for resources in which
   * CloudFormation has detected drift. Only resource properties explicitly defined
   * in the stack template are checked for drift. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detect
   * unmanaged configuration changes to stacks and resources with drift
   * detection</a>.</p> <p>Resources that don't currently support drift detection
   * can't be checked. For a list of resources that support drift detection, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import-supported-resources.html">Resource
   * type support for imports and drift detection</a>.</p> <p>Use
   * <a>DetectStackResourceDrift</a> to detect drift on individual resources, or
   * <a>DetectStackDrift</a> to detect drift on all resources in a given stack that
   * support drift detection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackResourceDrift">AWS
   * API Reference</a></p>
   */
  class StackResourceDrift
  {
  public:
    AWS_CLOUDFORMATION_API StackResourceDrift() = default;
    AWS_CLOUDFORMATION_API StackResourceDrift(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackResourceDrift& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    StackResourceDrift& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    StackResourceDrift& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = Aws::String>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = Aws::String>
    StackResourceDrift& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& GetPhysicalResourceIdContext() const { return m_physicalResourceIdContext; }
    inline bool PhysicalResourceIdContextHasBeenSet() const { return m_physicalResourceIdContextHasBeenSet; }
    template<typename PhysicalResourceIdContextT = Aws::Vector<PhysicalResourceIdContextKeyValuePair>>
    void SetPhysicalResourceIdContext(PhysicalResourceIdContextT&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext = std::forward<PhysicalResourceIdContextT>(value); }
    template<typename PhysicalResourceIdContextT = Aws::Vector<PhysicalResourceIdContextKeyValuePair>>
    StackResourceDrift& WithPhysicalResourceIdContext(PhysicalResourceIdContextT&& value) { SetPhysicalResourceIdContext(std::forward<PhysicalResourceIdContextT>(value)); return *this;}
    template<typename PhysicalResourceIdContextT = PhysicalResourceIdContextKeyValuePair>
    StackResourceDrift& AddPhysicalResourceIdContext(PhysicalResourceIdContextT&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.emplace_back(std::forward<PhysicalResourceIdContextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the resource.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    StackResourceDrift& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON structure that contains the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present.</p>
     */
    inline const Aws::String& GetExpectedProperties() const { return m_expectedProperties; }
    inline bool ExpectedPropertiesHasBeenSet() const { return m_expectedPropertiesHasBeenSet; }
    template<typename ExpectedPropertiesT = Aws::String>
    void SetExpectedProperties(ExpectedPropertiesT&& value) { m_expectedPropertiesHasBeenSet = true; m_expectedProperties = std::forward<ExpectedPropertiesT>(value); }
    template<typename ExpectedPropertiesT = Aws::String>
    StackResourceDrift& WithExpectedProperties(ExpectedPropertiesT&& value) { SetExpectedProperties(std::forward<ExpectedPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON structure that contains the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present.</p>
     */
    inline const Aws::String& GetActualProperties() const { return m_actualProperties; }
    inline bool ActualPropertiesHasBeenSet() const { return m_actualPropertiesHasBeenSet; }
    template<typename ActualPropertiesT = Aws::String>
    void SetActualProperties(ActualPropertiesT&& value) { m_actualPropertiesHasBeenSet = true; m_actualProperties = std::forward<ActualPropertiesT>(value); }
    template<typename ActualPropertiesT = Aws::String>
    StackResourceDrift& WithActualProperties(ActualPropertiesT&& value) { SetActualProperties(std::forward<ActualPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>.</p>
     */
    inline const Aws::Vector<PropertyDifference>& GetPropertyDifferences() const { return m_propertyDifferences; }
    inline bool PropertyDifferencesHasBeenSet() const { return m_propertyDifferencesHasBeenSet; }
    template<typename PropertyDifferencesT = Aws::Vector<PropertyDifference>>
    void SetPropertyDifferences(PropertyDifferencesT&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = std::forward<PropertyDifferencesT>(value); }
    template<typename PropertyDifferencesT = Aws::Vector<PropertyDifference>>
    StackResourceDrift& WithPropertyDifferences(PropertyDifferencesT&& value) { SetPropertyDifferences(std::forward<PropertyDifferencesT>(value)); return *this;}
    template<typename PropertyDifferencesT = PropertyDifference>
    StackResourceDrift& AddPropertyDifferences(PropertyDifferencesT&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.emplace_back(std::forward<PropertyDifferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected template configuration because the resource has been deleted.</p>
     * </li> <li> <p> <code>MODIFIED</code>: One or more resource properties differ
     * from their expected values (as defined in the stack template and any values
     * specified as template parameters).</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation does not currently
     * return this value.</p> </li> <li> <p> <code>UNKNOWN</code>: CloudFormation could
     * not run drift detection for the resource. See the <code>DriftStatusReason</code>
     * for details.</p> </li> </ul>
     */
    inline StackResourceDriftStatus GetStackResourceDriftStatus() const { return m_stackResourceDriftStatus; }
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }
    inline StackResourceDrift& WithStackResourceDriftStatus(StackResourceDriftStatus value) { SetStackResourceDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    StackResourceDrift& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
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
    StackResourceDrift& WithModuleInfo(ModuleInfoT&& value) { SetModuleInfo(std::forward<ModuleInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the drift status. </p>
     */
    inline const Aws::String& GetDriftStatusReason() const { return m_driftStatusReason; }
    inline bool DriftStatusReasonHasBeenSet() const { return m_driftStatusReasonHasBeenSet; }
    template<typename DriftStatusReasonT = Aws::String>
    void SetDriftStatusReason(DriftStatusReasonT&& value) { m_driftStatusReasonHasBeenSet = true; m_driftStatusReason = std::forward<DriftStatusReasonT>(value); }
    template<typename DriftStatusReasonT = Aws::String>
    StackResourceDrift& WithDriftStatusReason(DriftStatusReasonT&& value) { SetDriftStatusReason(std::forward<DriftStatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::Vector<PhysicalResourceIdContextKeyValuePair> m_physicalResourceIdContext;
    bool m_physicalResourceIdContextHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_expectedProperties;
    bool m_expectedPropertiesHasBeenSet = false;

    Aws::String m_actualProperties;
    bool m_actualPropertiesHasBeenSet = false;

    Aws::Vector<PropertyDifference> m_propertyDifferences;
    bool m_propertyDifferencesHasBeenSet = false;

    StackResourceDriftStatus m_stackResourceDriftStatus{StackResourceDriftStatus::NOT_SET};
    bool m_stackResourceDriftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    ModuleInfo m_moduleInfo;
    bool m_moduleInfoHasBeenSet = false;

    Aws::String m_driftStatusReason;
    bool m_driftStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
