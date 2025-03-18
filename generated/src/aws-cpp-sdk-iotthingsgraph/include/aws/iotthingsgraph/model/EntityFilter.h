/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/EntityFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that filters an entity search. Multiple filters function as OR
   * criteria in the search. For example a search that includes a
   * <code>NAMESPACE</code> and a <code>REFERENCED_ENTITY_ID</code> filter searches
   * for entities in the specified namespace that use the entity specified by the
   * value of <code>REFERENCED_ENTITY_ID</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/EntityFilter">AWS
   * API Reference</a></p>
   */
  class EntityFilter
  {
  public:
    AWS_IOTTHINGSGRAPH_API EntityFilter() = default;
    AWS_IOTTHINGSGRAPH_API EntityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API EntityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the entity search filter field. <code>REFERENCED_ENTITY_ID</code>
     * filters on entities that are used by the entity in the result set. For example,
     * you can filter on the ID of a property that is used in a state.</p>
     */
    inline EntityFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(EntityFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline EntityFilter& WithName(EntityFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Vector<Aws::String>>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Vector<Aws::String>>
    EntityFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    template<typename ValueT = Aws::String>
    EntityFilter& AddValue(ValueT&& value) { m_valueHasBeenSet = true; m_value.emplace_back(std::forward<ValueT>(value)); return *this; }
    ///@}
  private:

    EntityFilterName m_name{EntityFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
