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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Sort.h>
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
namespace Glue
{
namespace Model
{

  class AWS_GLUE_API SortCriterion
  {
  public:
    SortCriterion();
    SortCriterion(Aws::Utils::Json::JsonView jsonValue);
    SortCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    
    inline SortCriterion& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    
    inline SortCriterion& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    
    inline SortCriterion& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    
    inline const Sort& GetSort() const{ return m_sort; }

    
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    
    inline void SetSort(const Sort& value) { m_sortHasBeenSet = true; m_sort = value; }

    
    inline void SetSort(Sort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    
    inline SortCriterion& WithSort(const Sort& value) { SetSort(value); return *this;}

    
    inline SortCriterion& WithSort(Sort&& value) { SetSort(std::move(value)); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet;

    Sort m_sort;
    bool m_sortHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
