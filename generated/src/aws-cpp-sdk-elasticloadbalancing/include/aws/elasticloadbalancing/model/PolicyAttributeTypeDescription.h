/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PolicyAttributeTypeDescription
  {
  public:
    AWS_ELASTICLOADBALANCING_API PolicyAttributeTypeDescription() = default;
    AWS_ELASTICLOADBALANCING_API PolicyAttributeTypeDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API PolicyAttributeTypeDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    PolicyAttributeTypeDescription& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the attribute. For example, <code>Boolean</code> or
     * <code>Integer</code>.</p>
     */
    inline const Aws::String& GetAttributeType() const { return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    template<typename AttributeTypeT = Aws::String>
    void SetAttributeType(AttributeTypeT&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::forward<AttributeTypeT>(value); }
    template<typename AttributeTypeT = Aws::String>
    PolicyAttributeTypeDescription& WithAttributeType(AttributeTypeT&& value) { SetAttributeType(std::forward<AttributeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the attribute.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PolicyAttributeTypeDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the attribute, if applicable.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    PolicyAttributeTypeDescription& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cardinality of the attribute.</p> <p>Valid values:</p> <ul> <li>
     * <p>ONE(1) : Single value required</p> </li> <li> <p>ZERO_OR_ONE(0..1) : Up to
     * one value is allowed</p> </li> <li> <p>ZERO_OR_MORE(0..*) : Optional. Multiple
     * values are allowed</p> </li> <li> <p>ONE_OR_MORE(1..*0) : Required. Multiple
     * values are allowed</p> </li> </ul>
     */
    inline const Aws::String& GetCardinality() const { return m_cardinality; }
    inline bool CardinalityHasBeenSet() const { return m_cardinalityHasBeenSet; }
    template<typename CardinalityT = Aws::String>
    void SetCardinality(CardinalityT&& value) { m_cardinalityHasBeenSet = true; m_cardinality = std::forward<CardinalityT>(value); }
    template<typename CardinalityT = Aws::String>
    PolicyAttributeTypeDescription& WithCardinality(CardinalityT&& value) { SetCardinality(std::forward<CardinalityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_cardinality;
    bool m_cardinalityHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
