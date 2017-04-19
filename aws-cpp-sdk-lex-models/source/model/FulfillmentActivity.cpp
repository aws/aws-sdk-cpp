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
#include <aws/lex-models/model/FulfillmentActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

FulfillmentActivity::FulfillmentActivity() : 
    m_type(FulfillmentActivityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_codeHookHasBeenSet(false)
{
}

FulfillmentActivity::FulfillmentActivity(const JsonValue& jsonValue) : 
    m_type(FulfillmentActivityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_codeHookHasBeenSet(false)
{
  *this = jsonValue;
}

FulfillmentActivity& FulfillmentActivity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = FulfillmentActivityTypeMapper::GetFulfillmentActivityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeHook"))
  {
    m_codeHook = jsonValue.GetObject("codeHook");

    m_codeHookHasBeenSet = true;
  }

  return *this;
}

JsonValue FulfillmentActivity::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FulfillmentActivityTypeMapper::GetNameForFulfillmentActivityType(m_type));
  }

  if(m_codeHookHasBeenSet)
  {
   payload.WithObject("codeHook", m_codeHook.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws