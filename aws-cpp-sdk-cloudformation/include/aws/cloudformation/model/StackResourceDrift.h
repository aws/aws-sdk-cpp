/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Contains the drift information for a resource that has been checked for
   * drift. This includes actual and expected property values for resources in which
   * AWS CloudFormation has detected drift. Only resource properties explicitly
   * defined in the stack template are checked for drift. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
   * Unregulated Configuration Changes to Stacks and Resources</a>.</p> <p>Resources
   * that do not currently support drift detection cannot be checked. For a list of
   * resources that support drift detection, see <a
   * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
   * that Support Drift Detection</a>.</p> <p>Use <a>DetectStackResourceDrift</a> to
   * detect drift on individual resources, or <a>DetectStackDrift</a> to detect drift
   * on all resources in a given stack that support drift detection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackResourceDrift">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API StackResourceDrift
  {
  public:
    StackResourceDrift();
    StackResourceDrift(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackResourceDrift& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack.</p>
     */
    inline StackResourceDrift& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack.</p>
     */
    inline StackResourceDrift& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack.</p>
     */
    inline StackResourceDrift& WithStackId(const char* value) { SetStackId(value); return *this;}


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
    inline StackResourceDrift& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResourceDrift& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline StackResourceDrift& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}


    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline StackResourceDrift& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline StackResourceDrift& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation. </p>
     */
    inline StackResourceDrift& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}


    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& GetPhysicalResourceIdContext() const{ return m_physicalResourceIdContext; }

    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline bool PhysicalResourceIdContextHasBeenSet() const { return m_physicalResourceIdContextHasBeenSet; }

    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline void SetPhysicalResourceIdContext(const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext = value; }

    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline void SetPhysicalResourceIdContext(Aws::Vector<PhysicalResourceIdContextKeyValuePair>&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext = std::move(value); }

    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackResourceDrift& WithPhysicalResourceIdContext(const Aws::Vector<PhysicalResourceIdContextKeyValuePair>& value) { SetPhysicalResourceIdContext(value); return *this;}

    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackResourceDrift& WithPhysicalResourceIdContext(Aws::Vector<PhysicalResourceIdContextKeyValuePair>&& value) { SetPhysicalResourceIdContext(std::move(value)); return *this;}

    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackResourceDrift& AddPhysicalResourceIdContext(const PhysicalResourceIdContextKeyValuePair& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.push_back(value); return *this; }

    /**
     * <p>Context information that enables AWS CloudFormation to uniquely identify a
     * resource. AWS CloudFormation uses context key-value pairs in cases where a
     * resource's logical and physical IDs are not enough to uniquely identify that
     * resource. Each context key-value pair specifies a unique resource that contains
     * the targeted resource.</p>
     */
    inline StackResourceDrift& AddPhysicalResourceIdContext(PhysicalResourceIdContextKeyValuePair&& value) { m_physicalResourceIdContextHasBeenSet = true; m_physicalResourceIdContext.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of the resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline StackResourceDrift& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline StackResourceDrift& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline StackResourceDrift& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline const Aws::String& GetExpectedProperties() const{ return m_expectedProperties; }

    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline bool ExpectedPropertiesHasBeenSet() const { return m_expectedPropertiesHasBeenSet; }

    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline void SetExpectedProperties(const Aws::String& value) { m_expectedPropertiesHasBeenSet = true; m_expectedProperties = value; }

    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline void SetExpectedProperties(Aws::String&& value) { m_expectedPropertiesHasBeenSet = true; m_expectedProperties = std::move(value); }

    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline void SetExpectedProperties(const char* value) { m_expectedPropertiesHasBeenSet = true; m_expectedProperties.assign(value); }

    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline StackResourceDrift& WithExpectedProperties(const Aws::String& value) { SetExpectedProperties(value); return *this;}

    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline StackResourceDrift& WithExpectedProperties(Aws::String&& value) { SetExpectedProperties(std::move(value)); return *this;}

    /**
     * <p>A JSON structure containing the expected property values of the stack
     * resource, as defined in the stack template and any values specified as template
     * parameters. </p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline StackResourceDrift& WithExpectedProperties(const char* value) { SetExpectedProperties(value); return *this;}


    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline const Aws::String& GetActualProperties() const{ return m_actualProperties; }

    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline bool ActualPropertiesHasBeenSet() const { return m_actualPropertiesHasBeenSet; }

    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline void SetActualProperties(const Aws::String& value) { m_actualPropertiesHasBeenSet = true; m_actualProperties = value; }

    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline void SetActualProperties(Aws::String&& value) { m_actualPropertiesHasBeenSet = true; m_actualProperties = std::move(value); }

    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline void SetActualProperties(const char* value) { m_actualPropertiesHasBeenSet = true; m_actualProperties.assign(value); }

    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline StackResourceDrift& WithActualProperties(const Aws::String& value) { SetActualProperties(value); return *this;}

    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline StackResourceDrift& WithActualProperties(Aws::String&& value) { SetActualProperties(std::move(value)); return *this;}

    /**
     * <p>A JSON structure containing the actual property values of the stack
     * resource.</p> <p>For resources whose <code>StackResourceDriftStatus</code> is
     * <code>DELETED</code>, this structure will not be present. </p>
     */
    inline StackResourceDrift& WithActualProperties(const char* value) { SetActualProperties(value); return *this;}


    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline const Aws::Vector<PropertyDifference>& GetPropertyDifferences() const{ return m_propertyDifferences; }

    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline bool PropertyDifferencesHasBeenSet() const { return m_propertyDifferencesHasBeenSet; }

    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline void SetPropertyDifferences(const Aws::Vector<PropertyDifference>& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = value; }

    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline void SetPropertyDifferences(Aws::Vector<PropertyDifference>&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences = std::move(value); }

    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackResourceDrift& WithPropertyDifferences(const Aws::Vector<PropertyDifference>& value) { SetPropertyDifferences(value); return *this;}

    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackResourceDrift& WithPropertyDifferences(Aws::Vector<PropertyDifference>&& value) { SetPropertyDifferences(std::move(value)); return *this;}

    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackResourceDrift& AddPropertyDifferences(const PropertyDifference& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.push_back(value); return *this; }

    /**
     * <p>A collection of the resource properties whose actual values differ from their
     * expected values. These will be present only for resources whose
     * <code>StackResourceDriftStatus</code> is <code>MODIFIED</code>. </p>
     */
    inline StackResourceDrift& AddPropertyDifferences(PropertyDifference&& value) { m_propertyDifferencesHasBeenSet = true; m_propertyDifferences.push_back(std::move(value)); return *this; }


    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected template configuration because the resource has been deleted.</p>
     * </li> <li> <p> <code>MODIFIED</code>: One or more resource properties differ
     * from their expected values (as defined in the stack template and any values
     * specified as template parameters).</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resources's actual configuration matches its expected template
     * configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation
     * does not currently return this value.</p> </li> </ul>
     */
    inline const StackResourceDriftStatus& GetStackResourceDriftStatus() const{ return m_stackResourceDriftStatus; }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected template configuration because the resource has been deleted.</p>
     * </li> <li> <p> <code>MODIFIED</code>: One or more resource properties differ
     * from their expected values (as defined in the stack template and any values
     * specified as template parameters).</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resources's actual configuration matches its expected template
     * configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation
     * does not currently return this value.</p> </li> </ul>
     */
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected template configuration because the resource has been deleted.</p>
     * </li> <li> <p> <code>MODIFIED</code>: One or more resource properties differ
     * from their expected values (as defined in the stack template and any values
     * specified as template parameters).</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resources's actual configuration matches its expected template
     * configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation
     * does not currently return this value.</p> </li> </ul>
     */
    inline void SetStackResourceDriftStatus(const StackResourceDriftStatus& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected template configuration because the resource has been deleted.</p>
     * </li> <li> <p> <code>MODIFIED</code>: One or more resource properties differ
     * from their expected values (as defined in the stack template and any values
     * specified as template parameters).</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resources's actual configuration matches its expected template
     * configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation
     * does not currently return this value.</p> </li> </ul>
     */
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus&& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = std::move(value); }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected template configuration because the resource has been deleted.</p>
     * </li> <li> <p> <code>MODIFIED</code>: One or more resource properties differ
     * from their expected values (as defined in the stack template and any values
     * specified as template parameters).</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resources's actual configuration matches its expected template
     * configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation
     * does not currently return this value.</p> </li> </ul>
     */
    inline StackResourceDrift& WithStackResourceDriftStatus(const StackResourceDriftStatus& value) { SetStackResourceDriftStatus(value); return *this;}

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected template configuration because the resource has been deleted.</p>
     * </li> <li> <p> <code>MODIFIED</code>: One or more resource properties differ
     * from their expected values (as defined in the stack template and any values
     * specified as template parameters).</p> </li> <li> <p> <code>IN_SYNC</code>: The
     * resources's actual configuration matches its expected template
     * configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation
     * does not currently return this value.</p> </li> </ul>
     */
    inline StackResourceDrift& WithStackResourceDriftStatus(StackResourceDriftStatus&& value) { SetStackResourceDriftStatus(std::move(value)); return *this;}


    /**
     * <p>Time at which AWS CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time at which AWS CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time at which AWS CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time at which AWS CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>Time at which AWS CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline StackResourceDrift& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Time at which AWS CloudFormation performed drift detection on the stack
     * resource.</p>
     */
    inline StackResourceDrift& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet;

    Aws::Vector<PhysicalResourceIdContextKeyValuePair> m_physicalResourceIdContext;
    bool m_physicalResourceIdContextHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_expectedProperties;
    bool m_expectedPropertiesHasBeenSet;

    Aws::String m_actualProperties;
    bool m_actualPropertiesHasBeenSet;

    Aws::Vector<PropertyDifference> m_propertyDifferences;
    bool m_propertyDifferencesHasBeenSet;

    StackResourceDriftStatus m_stackResourceDriftStatus;
    bool m_stackResourceDriftStatusHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
