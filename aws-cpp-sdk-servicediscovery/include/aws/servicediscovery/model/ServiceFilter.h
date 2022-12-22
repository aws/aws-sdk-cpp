/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/ServiceFilterName.h>
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
   * <p>A complex type that lets you specify the namespaces that you want to list
   * services for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ServiceFilter">AWS
   * API Reference</a></p>
   */
  class ServiceFilter
  {
  public:
    AWS_SERVICEDISCOVERY_API ServiceFilter();
    AWS_SERVICEDISCOVERY_API ServiceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API ServiceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>NAMESPACE_ID</code>.</p>
     */
    inline const ServiceFilterName& GetName() const{ return m_name; }

    /**
     * <p>Specify <code>NAMESPACE_ID</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specify <code>NAMESPACE_ID</code>.</p>
     */
    inline void SetName(const ServiceFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specify <code>NAMESPACE_ID</code>.</p>
     */
    inline void SetName(ServiceFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specify <code>NAMESPACE_ID</code>.</p>
     */
    inline ServiceFilter& WithName(const ServiceFilterName& value) { SetName(value); return *this;}

    /**
     * <p>Specify <code>NAMESPACE_ID</code>.</p>
     */
    inline ServiceFilter& WithName(ServiceFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline ServiceFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline ServiceFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline ServiceFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline ServiceFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that are applicable to the value that you specify for
     * <code>Condition</code> to filter the list of services.</p>
     */
    inline ServiceFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator that you want to use to determine whether a service is returned
     * by <code>ListServices</code>. Valid values for <code>Condition</code> include
     * the following:</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code>, specify one namespace ID for <code>Values</code>.
     * <code>EQ</code> is the default condition and can be omitted.</p> </li> </ul>
     */
    inline const FilterCondition& GetCondition() const{ return m_condition; }

    /**
     * <p>The operator that you want to use to determine whether a service is returned
     * by <code>ListServices</code>. Valid values for <code>Condition</code> include
     * the following:</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code>, specify one namespace ID for <code>Values</code>.
     * <code>EQ</code> is the default condition and can be omitted.</p> </li> </ul>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The operator that you want to use to determine whether a service is returned
     * by <code>ListServices</code>. Valid values for <code>Condition</code> include
     * the following:</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code>, specify one namespace ID for <code>Values</code>.
     * <code>EQ</code> is the default condition and can be omitted.</p> </li> </ul>
     */
    inline void SetCondition(const FilterCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The operator that you want to use to determine whether a service is returned
     * by <code>ListServices</code>. Valid values for <code>Condition</code> include
     * the following:</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code>, specify one namespace ID for <code>Values</code>.
     * <code>EQ</code> is the default condition and can be omitted.</p> </li> </ul>
     */
    inline void SetCondition(FilterCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The operator that you want to use to determine whether a service is returned
     * by <code>ListServices</code>. Valid values for <code>Condition</code> include
     * the following:</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code>, specify one namespace ID for <code>Values</code>.
     * <code>EQ</code> is the default condition and can be omitted.</p> </li> </ul>
     */
    inline ServiceFilter& WithCondition(const FilterCondition& value) { SetCondition(value); return *this;}

    /**
     * <p>The operator that you want to use to determine whether a service is returned
     * by <code>ListServices</code>. Valid values for <code>Condition</code> include
     * the following:</p> <ul> <li> <p> <code>EQ</code>: When you specify
     * <code>EQ</code>, specify one namespace ID for <code>Values</code>.
     * <code>EQ</code> is the default condition and can be omitted.</p> </li> </ul>
     */
    inline ServiceFilter& WithCondition(FilterCondition&& value) { SetCondition(std::move(value)); return *this;}

  private:

    ServiceFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    FilterCondition m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
