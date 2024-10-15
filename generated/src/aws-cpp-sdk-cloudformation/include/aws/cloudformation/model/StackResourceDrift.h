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
    AWS_CLOUDFORMATION_API StackResourceDrift();
    AWS_CLOUDFORMATION_API StackResourceDrift(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackResourceDrift& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline StackResourceDrift& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline StackResourceDrift& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline StackResourceDrift& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }
    inline StackResourceDrift& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}
    inline StackResourceDrift& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}
    inline StackResourceDrift& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }
    inline StackResourceDrift& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}
    inline StackResourceDrift& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}
    inline StackResourceDrift& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& GetPhysicalResourceIdContext() const{ return m_physicalResourceIdContext; }
    inline bool PhysicalResourceIdContextHasBeenSet() const { return m_physicalResourceIdContextHasBeenSet; }
    inline void SetPhysicalResourceIdContext(const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext = value; }
    inline void SetPhysicalResourceIdContext(Aws::Vector<PhysicalResourceIdContextKeyValuePair>&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext = std::move(value); }
    inline StackResourceDrift& WithPhysicalResourceIdContext(const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& value) { SetPhysicalResourceIdContext(value); return *this;}
    inline StackResourceDrift& WithPhysicalResourceIdContext(Aws::Vector<PhysicalResourceIdContextKeyValuePair>&& value) { SetPhysicalResourceIdContext(std::move(value)); return *this;}
    inline StackResourceDrift& AddPhysicalResourceIdContext(const PhysicalResourceIdContextKeyValuePair& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.push_back(value); return *this; }
    inline StackResourceDrift& AddPhysicalResourceIdContext(PhysicalResourceIdContextKeyValuePair&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline StackResourceDrift& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline StackResourceDrift& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline StackResourceDrift& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present.</p>
     */
    inline const Aws::String& GetExpectedProperties() const{ return m_expectedProperties; }
    inline bool ExpectedPropertiesHasBeenSet() const { return m_expectedPropertiesHasBeenSet; }
    inline void SetExpectedProperties(const Aws::String& value) { m_expectedPropertiesHasBeenSet = true; m_expectedProperties = value; }
    inline void SetExpectedProperties(Aws::String&& value) { m_expectedPropertiesHasBeenSet = true; m_expectedProperties = std::move(value); }
    inline void SetExpectedProperties(const char* value) { m_expectedPropertiesHasBeenSet = true; m_expectedProperties.assign(value); }
    inline StackResourceDrift& WithExpectedProperties(const Aws::String& value) { SetExpectedProperties(value); return *this;}
    inline StackResourceDrift& WithExpectedProperties(Aws::String&& value) { SetExpectedProperties(std::move(value)); return *this;}
    inline StackResourceDrift& WithExpectedProperties(const char* value) { SetExpectedProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present.</p>
     */
    inline const Aws::String& GetActualProperties() const{ return m_actualProperties; }
    inline bool ActualPropertiesHasBeenSet() const { return m_actualPropertiesHasBeenSet; }
    inline void SetActualProperties(const Aws::String& value) { m_actualPropertiesHasBeenSet = true; m_actualProperties = value; }
    inline void SetActualProperties(Aws::String&& value) { m_actualPropertiesHasBeenSet = true; m_actualProperties = std::move(value); }
    inline void SetActualProperties(const char* value) { m_actualPropertiesHasBeenSet = true; m_actualProperties.assign(value); }
    inline StackResourceDrift& WithActualProperties(const Aws::String& value) { SetActualProperties(value); return *this;}
    inline StackResourceDrift& WithActualProperties(Aws::String&& value) { SetActualProperties(std::move(value)); return *this;}
    inline StackResourceDrift& WithActualProperties(const char* value) { SetActualProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>.</p>
     */
    inline const Aws::Vector<PropertyDifference>& GetPropertyDifferences() const{ return m_propertyDifferences; }
    inline bool PropertyDifferencesHasBeenSet() const { return m_propertyDifferencesHasBeenSet; }
    inline void SetPropertyDifferences(const Aws::Vector<PropertyDifference>& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = value; }
    inline void SetPropertyDifferences(Aws::Vector<PropertyDifference>&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = std::move(value); }
    inline StackResourceDrift& WithPropertyDifferences(const Aws::Vector<PropertyDifference>& value) { SetPropertyDifferences(value); return *this;}
    inline StackResourceDrift& WithPropertyDifferences(Aws::Vector<PropertyDifference>&& value) { SetPropertyDifferences(std::move(value)); return *this;}
    inline StackResourceDrift& AddPropertyDifferences(const PropertyDifference& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.push_back(value); return *this; }
    inline StackResourceDrift& AddPropertyDifferences(PropertyDifference&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.push_back(std::move(value)); return *this; }
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
     * return this value.</p> </li> </ul>
     */
    inline const StackResourceDriftStatus& GetStackResourceDriftStatus() const{ return m_stackResourceDriftStatus; }
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }
    inline void SetStackResourceDriftStatus(const StackResourceDriftStatus& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus&& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = std::move(value); }
    inline StackResourceDrift& WithStackResourceDriftStatus(const StackResourceDriftStatus& value) { SetStackResourceDriftStatus(value); return *this;}
    inline StackResourceDrift& WithStackResourceDriftStatus(StackResourceDriftStatus&& value) { SetStackResourceDriftStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline StackResourceDrift& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline StackResourceDrift& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
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
    inline StackResourceDrift& WithModuleInfo(const ModuleInfo& value) { SetModuleInfo(value); return *this;}
    inline StackResourceDrift& WithModuleInfo(ModuleInfo&& value) { SetModuleInfo(std::move(value)); return *this;}
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

    StackResourceDriftStatus m_stackResourceDriftStatus;
    bool m_stackResourceDriftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    ModuleInfo m_moduleInfo;
    bool m_moduleInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
