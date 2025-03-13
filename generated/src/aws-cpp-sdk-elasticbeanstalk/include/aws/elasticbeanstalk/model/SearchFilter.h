/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes criteria to restrict a list of results.</p> <p>For operators that
   * apply a single value to the attribute, the filter is evaluated as follows:
   * <code>Attribute Operator Values[1]</code> </p> <p>Some operators, e.g.
   * <code>in</code>, can apply multiple values. In this case, the filter is
   * evaluated as a logical union (OR) of applications of the operator to the
   * attribute with each one of the values: <code>(Attribute Operator Values[1]) OR
   * (Attribute Operator Values[2]) OR ...</code> </p> <p>The valid values for
   * attributes of <code>SearchFilter</code> depend on the API action. For valid
   * values, see the reference page for the API action you're calling that takes a
   * <code>SearchFilter</code> parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SearchFilter">AWS
   * API Reference</a></p>
   */
  class SearchFilter
  {
  public:
    AWS_ELASTICBEANSTALK_API SearchFilter() = default;
    AWS_ELASTICBEANSTALK_API SearchFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SearchFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    SearchFilter& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline const Aws::String& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = Aws::String>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = Aws::String>
    SearchFilter& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    SearchFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    SearchFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
