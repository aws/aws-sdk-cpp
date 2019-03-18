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
   * <p>Specify criteria to restrict the results when listing custom platforms.</p>
   * <p>The filter is evaluated as the expression:</p> <p> <code>Type</code>
   * <code>Operator</code> <code>Values[i]</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformFilter">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API PlatformFilter
  {
  public:
    PlatformFilter();
    PlatformFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    PlatformFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline PlatformFilter& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline PlatformFilter& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The custom platform attribute to which the filter values are applied.</p>
     * <p>Valid Values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformOwner</code> </p>
     */
    inline PlatformFilter& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline PlatformFilter& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline PlatformFilter& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p> Valid Values: <code>=</code> (equal to) |
     * <code>!=</code> (not equal to) | <code>&lt;</code> (less than) |
     * <code>&lt;=</code> (less than or equal to) | <code>&gt;</code> (greater than) |
     * <code>&gt;=</code> (greater than or equal to) | <code>contains</code> |
     * <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline PlatformFilter& WithOperator(const char* value) { SetOperator(value); return *this;}


    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline PlatformFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline PlatformFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline PlatformFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline PlatformFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of values applied to the custom platform attribute.</p>
     */
    inline PlatformFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_operator;
    bool m_operatorHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
