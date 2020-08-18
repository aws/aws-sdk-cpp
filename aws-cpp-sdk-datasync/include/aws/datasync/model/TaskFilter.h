/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/TaskFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/Operator.h>
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
namespace DataSync
{
namespace Model
{

  class AWS_DATASYNC_API TaskFilter
  {
  public:
    TaskFilter();
    TaskFilter(Aws::Utils::Json::JsonView jsonValue);
    TaskFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const TaskFilterName& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const TaskFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(TaskFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline TaskFilter& WithName(const TaskFilterName& value) { SetName(value); return *this;}

    
    inline TaskFilter& WithName(TaskFilterName&& value) { SetName(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    
    inline TaskFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    
    inline TaskFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    
    inline TaskFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    
    inline TaskFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    
    inline TaskFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    
    inline const Operator& GetOperator() const{ return m_operator; }

    
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    
    inline TaskFilter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    
    inline TaskFilter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    TaskFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Operator m_operator;
    bool m_operatorHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
