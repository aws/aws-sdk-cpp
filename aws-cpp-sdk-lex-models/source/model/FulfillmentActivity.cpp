/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

FulfillmentActivity::FulfillmentActivity(JsonView jsonValue) : 
    m_type(FulfillmentActivityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_codeHookHasBeenSet(false)
{
  *this = jsonValue;
}

FulfillmentActivity& FulfillmentActivity::operator =(JsonView jsonValue)
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
