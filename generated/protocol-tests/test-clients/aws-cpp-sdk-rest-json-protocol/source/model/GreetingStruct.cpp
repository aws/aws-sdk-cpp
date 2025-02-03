/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/GreetingStruct.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

GreetingStruct::GreetingStruct() : 
    m_hiHasBeenSet(false)
{
}

GreetingStruct::GreetingStruct(JsonView jsonValue)
  : GreetingStruct()
{
  *this = jsonValue;
}

GreetingStruct& GreetingStruct::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hi"))
  {
    m_hi = jsonValue.GetString("hi");

    m_hiHasBeenSet = true;
  }

  return *this;
}

JsonValue GreetingStruct::Jsonize() const
{
  JsonValue payload;

  if(m_hiHasBeenSet)
  {
   payload.WithString("hi", m_hi);

  }

  return payload;
}

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
