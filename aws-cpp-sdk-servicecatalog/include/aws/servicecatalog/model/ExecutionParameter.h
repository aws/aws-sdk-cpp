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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{

  class AWS_SERVICECATALOG_API ExecutionParameter
  {
  public:
    ExecutionParameter();
    ExecutionParameter(Aws::Utils::Json::JsonView jsonValue);
    ExecutionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ExecutionParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ExecutionParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline ExecutionParameter& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    
    inline ExecutionParameter& WithType(const Aws::String& value) { SetType(value); return *this;}

    
    inline ExecutionParameter& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    
    inline ExecutionParameter& WithType(const char* value) { SetType(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetDefaultValues() const{ return m_defaultValues; }

    
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }

    
    inline void SetDefaultValues(const Aws::Vector<Aws::String>& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = value; }

    
    inline void SetDefaultValues(Aws::Vector<Aws::String>&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::move(value); }

    
    inline ExecutionParameter& WithDefaultValues(const Aws::Vector<Aws::String>& value) { SetDefaultValues(value); return *this;}

    
    inline ExecutionParameter& WithDefaultValues(Aws::Vector<Aws::String>&& value) { SetDefaultValues(std::move(value)); return *this;}

    
    inline ExecutionParameter& AddDefaultValues(const Aws::String& value) { m_defaultValuesHasBeenSet = true; m_defaultValues.push_back(value); return *this; }

    
    inline ExecutionParameter& AddDefaultValues(Aws::String&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues.push_back(std::move(value)); return *this; }

    
    inline ExecutionParameter& AddDefaultValues(const char* value) { m_defaultValuesHasBeenSet = true; m_defaultValues.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<Aws::String> m_defaultValues;
    bool m_defaultValuesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
