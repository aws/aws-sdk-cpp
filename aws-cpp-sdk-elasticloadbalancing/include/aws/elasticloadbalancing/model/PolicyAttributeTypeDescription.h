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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a policy attribute type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/PolicyAttributeTypeDescription">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API PolicyAttributeTypeDescription
  {
  public:
    PolicyAttributeTypeDescription();
    PolicyAttributeTypeDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    PolicyAttributeTypeDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute.</p>
     */
    inline PolicyAttributeTypeDescription& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline PolicyAttributeTypeDescription& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p>
     */
    inline PolicyAttributeTypeDescription& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }

    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }

    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }

    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }

    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }

    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline PolicyAttributeTypeDescription& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}

    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline PolicyAttributeTypeDescription& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}

    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline PolicyAttributeTypeDescription& WithAttributeType(const char* value) { SetAttributeType(value); return *this;}


    /**
     * <p>A description of the attribute.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the attribute.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the attribute.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the attribute.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the attribute.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the attribute.</p>
     */
    inline PolicyAttributeTypeDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the attribute.</p>
     */
    inline PolicyAttributeTypeDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the attribute.</p>
     */
    inline PolicyAttributeTypeDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline PolicyAttributeTypeDescription& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline PolicyAttributeTypeDescription& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline PolicyAttributeTypeDescription& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline const Aws::String& GetCardinality() const{ return m_cardinality; }

    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline bool CardinalityHasBeenSet() const { return m_cardinalityHasBeenSet; }

    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline void SetCardinality(const Aws::String& value) { m_cardinalityHasBeenSet = true; m_cardinality = value; }

    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline void SetCardinality(Aws::String&& value) { m_cardinalityHasBeenSet = true; m_cardinality = std::move(value); }

    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline void SetCardinality(const char* value) { m_cardinalityHasBeenSet = true; m_cardinality.assign(value); }

    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline PolicyAttributeTypeDescription& WithCardinality(const Aws::String& value) { SetCardinality(value); return *this;}

    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline PolicyAttributeTypeDescription& WithCardinality(Aws::String&& value) { SetCardinality(std::move(value)); return *this;}

    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline PolicyAttributeTypeDescription& WithCardinality(const char* value) { SetCardinality(value); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_cardinality;
    bool m_cardinalityHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
