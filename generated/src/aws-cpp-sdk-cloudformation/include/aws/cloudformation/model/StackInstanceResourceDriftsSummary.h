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
    AWS_CLOUDFORMATION_API StackInstanceResourceDriftsSummary();
    AWS_CLOUDFORMATION_API StackInstanceResourceDriftsSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackInstanceResourceDriftsSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the stack instance.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithStackId(const char* value) { SetStackId(value); return *this;}


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
    inline StackInstanceResourceDriftsSummary& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}


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
    inline StackInstanceResourceDriftsSummary& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}


    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& GetPhysicalResourceIdContext() const{ return m_physicalResourceIdContext; }

    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline bool PhysicalResourceIdContextHasBeenSet() const { return m_physicalResourceIdContextHasBeenSet; }

    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline void SetPhysicalResourceIdContext(const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext = value; }

    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline void SetPhysicalResourceIdContext(Aws::Vector<PhysicalResourceIdContextKeyValuePair>&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext = std::move(value); }

    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithPhysicalResourceIdContext(const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& value) { SetPhysicalResourceIdContext(value); return *this;}

    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithPhysicalResourceIdContext(Aws::Vector<PhysicalResourceIdContextKeyValuePair>&& value) { SetPhysicalResourceIdContext(std::move(value)); return *this;}

    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackInstanceResourceDriftsSummary& AddPhysicalResourceIdContext(const PhysicalResourceIdContextKeyValuePair& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.push_back(value); return *this; }

    /**
     * <p>Context information that enables CloudFormation to uniquely identify a
     * resource. CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs aren't enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackInstanceResourceDriftsSummary& AddPhysicalResourceIdContext(PhysicalResourceIdContextKeyValuePair&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.push_back(std::move(value)); return *this; }


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
    inline StackInstanceResourceDriftsSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Type of resource. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services Resource Types Reference</a> in the CloudFormation User Guide.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline const Aws::Vector<PropertyDifference>& GetPropertyDifferences() const{ return m_propertyDifferences; }

    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline bool PropertyDifferencesHasBeenSet() const { return m_propertyDifferencesHasBeenSet; }

    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline void SetPropertyDifferences(const Aws::Vector<PropertyDifference>& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = value; }

    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline void SetPropertyDifferences(Aws::Vector<PropertyDifference>&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = std::move(value); }

    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackInstanceResourceDriftsSummary& WithPropertyDifferences(const Aws::Vector<PropertyDifference>& value) { SetPropertyDifferences(value); return *this;}

    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackInstanceResourceDriftsSummary& WithPropertyDifferences(Aws::Vector<PropertyDifference>&& value) { SetPropertyDifferences(std::move(value)); return *this;}

    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackInstanceResourceDriftsSummary& AddPropertyDifferences(const PropertyDifference& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.push_back(value); return *this; }

    /**
     * <p>Status of the actual configuration of the resource compared to its expected
     * configuration. These will be present only for resources whose
     * <code>StackInstanceResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackInstanceResourceDriftsSummary& AddPropertyDifferences(PropertyDifference&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.push_back(std::move(value)); return *this; }


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
    inline const StackResourceDriftStatus& GetStackResourceDriftStatus() const{ return m_stackResourceDriftStatus; }

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
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }

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
    inline void SetStackResourceDriftStatus(const StackResourceDriftStatus& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }

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
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus&& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = std::move(value); }

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
    inline StackInstanceResourceDriftsSummary& WithStackResourceDriftStatus(const StackResourceDriftStatus& value) { SetStackResourceDriftStatus(value); return *this;}

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
    inline StackInstanceResourceDriftsSummary& WithStackResourceDriftStatus(StackResourceDriftStatus&& value) { SetStackResourceDriftStatus(std::move(value)); return *this;}


    /**
     * <p>Time at which the stack instance drift detection operation was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time at which the stack instance drift detection operation was initiated.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time at which the stack instance drift detection operation was initiated.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time at which the stack instance drift detection operation was initiated.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Time at which the stack instance drift detection operation was initiated.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Time at which the stack instance drift detection operation was initiated.</p>
     */
    inline StackInstanceResourceDriftsSummary& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

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

    StackResourceDriftStatus m_stackResourceDriftStatus;
    bool m_stackResourceDriftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
