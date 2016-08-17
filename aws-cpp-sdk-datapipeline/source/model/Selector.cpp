/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/model/Selector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

Selector::Selector() : 
    m_fieldNameHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

Selector::Selector(const JsonValue& jsonValue) : 
    m_fieldNameHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

Selector& Selector::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("fieldName"))
  {
    m_fieldName = jsonValue.GetString("fieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = jsonValue.GetObject("operator");

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue Selector::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("fieldName", m_fieldName);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithObject("operator", m_operator.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws