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
   * <p>The structure containing summary information about resource drifts for a
   * stack instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackInstanceResourceDriftsSummary">AWS
   * API Reference</a></p>
   */
  class StackInstanceResourceDriftsSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackInstanceResourceDriftsSummary() = default;
    AWS_CLOUDFORMATION_API StackInstanceResourceDriftsSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackInstanceResourceDriftsSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the stack instance.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    StackInstanceResourceDriftsSummary& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
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
    StackInstanceResourceDriftsSummary& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
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
    StackInstanceResourceDriftsSummary& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
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
    StackInstanceResourceDriftsSummary& WithPhysicalResourceIdContext(PhysicalResourceIdContextT&& value) { SetPhysicalResourceIdContext(std::forward<PhysicalResourceIdContextT>(value)); return *this;}
    template<typename PhysicalResourceIdContextT = PhysicalResourceIdContextKeyValuePair>
    StackInstanceResourceDriftsSummary& AddPhysicalResourceIdContext(PhysicalResourceIdContextT&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.emplace_back(std::forward<PhysicalResourceIdContextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Type of resource. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    StackInstanceResourceDriftsSummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline const Aws::Vector<PropertyDifference>& GetPropertyDifferences() const { return m_propertyDifferences; }
    inline bool PropertyDifferencesHasBeenSet() const { return m_propertyDifferencesHasBeenSet; }
    template<typename PropertyDifferencesT = Aws::Vector<PropertyDifference>>
    void SetPropertyDifferences(PropertyDifferencesT&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = std::forward<PropertyDifferencesT>(value); }
    template<typename PropertyDifferencesT = Aws::Vector<PropertyDifference>>
    StackInstanceResourceDriftsSummary& WithPropertyDifferences(PropertyDifferencesT&& value) { SetPropertyDifferences(std::forward<PropertyDifferencesT>(value)); return *this;}
    template<typename PropertyDifferencesT = PropertyDifference>
    StackInstanceResourceDriftsSummary& AddPropertyDifferences(PropertyDifferencesT&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.emplace_back(std::forward<PropertyDifferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The drift status of the resource in a stack instance.</p> <ul> <li> <p>
     * <code>DELETED</code>: The resource differs from its expected template
     * configuration in that the resource has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: One or more resource properties differ from their
     * expected template values.</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resource's actual configuration matches its expected template configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation doesn't currently return
     * this value.</p> </li> </ul>
     */
    inline StackResourceDriftStatus GetStackResourceDriftStatus() const { return m_stackResourceDriftStatus; }
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }
    inline StackInstanceResourceDriftsSummary& WithStackResourceDriftStatus(StackResourceDriftStatus value) { SetStackResourceDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the stack instance drift detection operation was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    StackInstanceResourceDriftsSummary& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
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

    Aws::Vector<PropertyDifference> m_propertyDifferences;
    bool m_propertyDifferencesHasBeenSet = false;

    StackResourceDriftStatus m_stackResourceDriftStatus{StackResourceDriftStatus::NOT_SET};
    bool m_stackResourceDriftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
