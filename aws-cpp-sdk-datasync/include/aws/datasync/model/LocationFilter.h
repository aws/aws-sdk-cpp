/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/LocationFilterName.h>
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

  class AWS_DATASYNC_API LocationFilter
  {
  public:
    LocationFilter();
    LocationFilter(Aws::Utils::Json::JsonView jsonValue);
    LocationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const LocationFilterName& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const LocationFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(LocationFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline LocationFilter& WithName(const LocationFilterName& value) { SetName(value); return *this;}

    
    inline LocationFilter& WithName(LocationFilterName&& value) { SetName(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    
    inline LocationFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    
    inline LocationFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    
    inline LocationFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    
    inline LocationFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    
    inline LocationFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    
    inline const Operator& GetOperator() const{ return m_operator; }

    
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    
    inline LocationFilter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    
    inline LocationFilter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    LocationFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Operator m_operator;
    bool m_operatorHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
