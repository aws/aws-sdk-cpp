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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/NamespaceFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/FilterCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that identifies the namespaces that you want to list. You can
   * choose to list public or private namespaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API NamespaceFilter
  {
  public:
    NamespaceFilter();
    NamespaceFilter(Aws::Utils::Json::JsonView jsonValue);
    NamespaceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>TYPE</code>.</p>
     */
    inline const NamespaceFilterName& GetName() const{ return m_name; }

    /**
     * <p>Specify <code>TYPE</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specify <code>TYPE</code>.</p>
     */
    inline void SetName(const NamespaceFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specify <code>TYPE</code>.</p>
     */
    inline void SetName(NamespaceFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specify <code>TYPE</code>.</p>
     */
    inline NamespaceFilter& WithName(const NamespaceFilterName& value) { SetName(value); return *this;}

    /**
     * <p>Specify <code>TYPE</code>.</p>
     */
    inline NamespaceFilter& WithName(NamespaceFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline NamespaceFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline NamespaceFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline NamespaceFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline NamespaceFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>If you specify <code>EQ</code> for <code>Condition</code>, specify either
     * <code>DNS_PUBLIC</code> or <code>DNS_PRIVATE</code>.</p> <p>If you specify
     * <code>IN</code> for <code>Condition</code>, you can specify
     * <code>DNS_PUBLIC</code>, <code>DNS_PRIVATE</code>, or both.</p>
     */
    inline NamespaceFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator that you want to use to determine whether
     * <code>ListNamespaces</code> returns a namespace. Valid values for
     * <code>condition</code> include:</p> <ul> <li> <p> <code>EQ</code>: When you
     * specify <code>EQ</code> for the condition, you can choose to list only public
     * namespaces or private namespaces, but not both. <code>EQ</code> is the default
     * condition and can be omitted.</p> </li> <li> <p> <code>IN</code>: When you
     * specify <code>IN</code> for the condition, you can choose to list public
     * namespaces, private namespaces, or both. </p> </li> <li> <p>
     * <code>BETWEEN</code>: Not applicable</p> </li> </ul>
     */
    inline const FilterCondition& GetCondition() const{ return m_condition; }

    /**
     * <p>The operator that you want to use to determine whether
     * <code>ListNamespaces</code> returns a namespace. Valid values for
     * <code>condition</code> include:</p> <ul> <li> <p> <code>EQ</code>: When you
     * specify <code>EQ</code> for the condition, you can choose to list only public
     * namespaces or private namespaces, but not both. <code>EQ</code> is the default
     * condition and can be omitted.</p> </li> <li> <p> <code>IN</code>: When you
     * specify <code>IN</code> for the condition, you can choose to list public
     * namespaces, private namespaces, or both. </p> </li> <li> <p>
     * <code>BETWEEN</code>: Not applicable</p> </li> </ul>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The operator that you want to use to determine whether
     * <code>ListNamespaces</code> returns a namespace. Valid values for
     * <code>condition</code> include:</p> <ul> <li> <p> <code>EQ</code>: When you
     * specify <code>EQ</code> for the condition, you can choose to list only public
     * namespaces or private namespaces, but not both. <code>EQ</code> is the default
     * condition and can be omitted.</p> </li> <li> <p> <code>IN</code>: When you
     * specify <code>IN</code> for the condition, you can choose to list public
     * namespaces, private namespaces, or both. </p> </li> <li> <p>
     * <code>BETWEEN</code>: Not applicable</p> </li> </ul>
     */
    inline void SetCondition(const FilterCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The operator that you want to use to determine whether
     * <code>ListNamespaces</code> returns a namespace. Valid values for
     * <code>condition</code> include:</p> <ul> <li> <p> <code>EQ</code>: When you
     * specify <code>EQ</code> for the condition, you can choose to list only public
     * namespaces or private namespaces, but not both. <code>EQ</code> is the default
     * condition and can be omitted.</p> </li> <li> <p> <code>IN</code>: When you
     * specify <code>IN</code> for the condition, you can choose to list public
     * namespaces, private namespaces, or both. </p> </li> <li> <p>
     * <code>BETWEEN</code>: Not applicable</p> </li> </ul>
     */
    inline void SetCondition(FilterCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The operator that you want to use to determine whether
     * <code>ListNamespaces</code> returns a namespace. Valid values for
     * <code>condition</code> include:</p> <ul> <li> <p> <code>EQ</code>: When you
     * specify <code>EQ</code> for the condition, you can choose to list only public
     * namespaces or private namespaces, but not both. <code>EQ</code> is the default
     * condition and can be omitted.</p> </li> <li> <p> <code>IN</code>: When you
     * specify <code>IN</code> for the condition, you can choose to list public
     * namespaces, private namespaces, or both. </p> </li> <li> <p>
     * <code>BETWEEN</code>: Not applicable</p> </li> </ul>
     */
    inline NamespaceFilter& WithCondition(const FilterCondition& value) { SetCondition(value); return *this;}

    /**
     * <p>The operator that you want to use to determine whether
     * <code>ListNamespaces</code> returns a namespace. Valid values for
     * <code>condition</code> include:</p> <ul> <li> <p> <code>EQ</code>: When you
     * specify <code>EQ</code> for the condition, you can choose to list only public
     * namespaces or private namespaces, but not both. <code>EQ</code> is the default
     * condition and can be omitted.</p> </li> <li> <p> <code>IN</code>: When you
     * specify <code>IN</code> for the condition, you can choose to list public
     * namespaces, private namespaces, or both. </p> </li> <li> <p>
     * <code>BETWEEN</code>: Not applicable</p> </li> </ul>
     */
    inline NamespaceFilter& WithCondition(FilterCondition&& value) { SetCondition(std::move(value)); return *this;}

  private:

    NamespaceFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    FilterCondition m_condition;
    bool m_conditionHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
