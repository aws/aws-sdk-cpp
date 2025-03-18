﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/SearchQuantumTasksFilterOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>A filter to use to search for tasks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchQuantumTasksFilter">AWS
   * API Reference</a></p>
   */
  class SearchQuantumTasksFilter
  {
  public:
    AWS_BRAKET_API SearchQuantumTasksFilter() = default;
    AWS_BRAKET_API SearchQuantumTasksFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API SearchQuantumTasksFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the device used for the task.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SearchQuantumTasksFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An operator to use in the filter.</p>
     */
    inline SearchQuantumTasksFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(SearchQuantumTasksFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline SearchQuantumTasksFilter& WithOperator(SearchQuantumTasksFilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    SearchQuantumTasksFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    SearchQuantumTasksFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SearchQuantumTasksFilterOperator m_operator{SearchQuantumTasksFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
