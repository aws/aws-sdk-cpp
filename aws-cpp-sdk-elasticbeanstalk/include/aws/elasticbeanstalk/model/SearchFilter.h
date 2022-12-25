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
    AWS_ELASTICBEANSTALK_API SearchFilter();
    AWS_ELASTICBEANSTALK_API SearchFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SearchFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }

    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline SearchFilter& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}

    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline SearchFilter& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}

    /**
     * <p>The result attribute to which the filter values are applied. Valid values
     * vary by API action.</p>
     */
    inline SearchFilter& WithAttribute(const char* value) { SetAttribute(value); return *this;}


    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }

    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline SearchFilter& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline SearchFilter& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}

    /**
     * <p>The operator to apply to the <code>Attribute</code> with each of the
     * <code>Values</code>. Valid values vary by <code>Attribute</code>.</p>
     */
    inline SearchFilter& WithOperator(const char* value) { SetOperator(value); return *this;}


    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline SearchFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline SearchFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline SearchFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline SearchFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of values applied to the <code>Attribute</code> and
     * <code>Operator</code> attributes. Number of values and valid values vary by
     * <code>Attribute</code>.</p>
     */
    inline SearchFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

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
