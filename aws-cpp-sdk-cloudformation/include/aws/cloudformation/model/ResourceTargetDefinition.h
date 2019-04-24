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
#include <aws/cloudformation/model/ResourceAttribute.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/RequiresRecreation.h>
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
   * <p>The field that AWS CloudFormation will change, such as the name of a
   * resource's property, and whether the resource will be recreated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ResourceTargetDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API ResourceTargetDefinition
  {
  public:
    ResourceTargetDefinition();
    ResourceTargetDefinition(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResourceTargetDefinition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates which resource attribute is triggering this update, such as a
     * change in the resource attribute's <code>Metadata</code>,
     * <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline const ResourceAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>Indicates which resource attribute is triggering this update, such as a
     * change in the resource attribute's <code>Metadata</code>,
     * <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>Indicates which resource attribute is triggering this update, such as a
     * change in the resource attribute's <code>Metadata</code>,
     * <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline void SetAttribute(const ResourceAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>Indicates which resource attribute is triggering this update, such as a
     * change in the resource attribute's <code>Metadata</code>,
     * <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline void SetAttribute(ResourceAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>Indicates which resource attribute is triggering this update, such as a
     * change in the resource attribute's <code>Metadata</code>,
     * <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline ResourceTargetDefinition& WithAttribute(const ResourceAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>Indicates which resource attribute is triggering this update, such as a
     * change in the resource attribute's <code>Metadata</code>,
     * <code>Properties</code>, or <code>Tags</code>.</p>
     */
    inline ResourceTargetDefinition& WithAttribute(ResourceAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline ResourceTargetDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline ResourceTargetDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, the name of
     * the property. For all other attributes, the value is null.</p>
     */
    inline ResourceTargetDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, indicates
     * whether a change to this property causes the resource to be recreated. The value
     * can be <code>Never</code>, <code>Always</code>, or <code>Conditionally</code>.
     * To determine the conditions for a <code>Conditionally</code> recreation, see the
     * update behavior for that <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">property</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline const RequiresRecreation& GetRequiresRecreation() const{ return m_requiresRecreation; }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, indicates
     * whether a change to this property causes the resource to be recreated. The value
     * can be <code>Never</code>, <code>Always</code>, or <code>Conditionally</code>.
     * To determine the conditions for a <code>Conditionally</code> recreation, see the
     * update behavior for that <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">property</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline bool RequiresRecreationHasBeenSet() const { return m_requiresRecreationHasBeenSet; }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, indicates
     * whether a change to this property causes the resource to be recreated. The value
     * can be <code>Never</code>, <code>Always</code>, or <code>Conditionally</code>.
     * To determine the conditions for a <code>Conditionally</code> recreation, see the
     * update behavior for that <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">property</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline void SetRequiresRecreation(const RequiresRecreation& value) { m_requiresRecreationHasBeenSet = true; m_requiresRecreation = value; }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, indicates
     * whether a change to this property causes the resource to be recreated. The value
     * can be <code>Never</code>, <code>Always</code>, or <code>Conditionally</code>.
     * To determine the conditions for a <code>Conditionally</code> recreation, see the
     * update behavior for that <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">property</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline void SetRequiresRecreation(RequiresRecreation&& value) { m_requiresRecreationHasBeenSet = true; m_requiresRecreation = std::move(value); }

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, indicates
     * whether a change to this property causes the resource to be recreated. The value
     * can be <code>Never</code>, <code>Always</code>, or <code>Conditionally</code>.
     * To determine the conditions for a <code>Conditionally</code> recreation, see the
     * update behavior for that <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">property</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline ResourceTargetDefinition& WithRequiresRecreation(const RequiresRecreation& value) { SetRequiresRecreation(value); return *this;}

    /**
     * <p>If the <code>Attribute</code> value is <code>Properties</code>, indicates
     * whether a change to this property causes the resource to be recreated. The value
     * can be <code>Never</code>, <code>Always</code>, or <code>Conditionally</code>.
     * To determine the conditions for a <code>Conditionally</code> recreation, see the
     * update behavior for that <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">property</a>
     * in the AWS CloudFormation User Guide.</p>
     */
    inline ResourceTargetDefinition& WithRequiresRecreation(RequiresRecreation&& value) { SetRequiresRecreation(std::move(value)); return *this;}

  private:

    ResourceAttribute m_attribute;
    bool m_attributeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    RequiresRecreation m_requiresRecreation;
    bool m_requiresRecreationHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
