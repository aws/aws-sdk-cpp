/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/Deserializer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

Deserializer::Deserializer() : 
    m_openXJsonSerDeHasBeenSet(false),
    m_hiveJsonSerDeHasBeenSet(false)
{
}

Deserializer::Deserializer(JsonView jsonValue) : 
    m_openXJsonSerDeHasBeenSet(false),
    m_hiveJsonSerDeHasBeenSet(false)
{
  *this = jsonValue;
}

Deserializer& Deserializer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpenXJsonSerDe"))
  {
    m_openXJsonSerDe = jsonValue.GetObject("OpenXJsonSerDe");

    m_openXJsonSerDeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HiveJsonSerDe"))
  {
    m_hiveJsonSerDe = jsonValue.GetObject("HiveJsonSerDe");

    m_hiveJsonSerDeHasBeenSet = true;
  }

  return *this;
}

JsonValue Deserializer::Jsonize() const
{
  JsonValue payload;

  if(m_openXJsonSerDeHasBeenSet)
  {
   payload.WithObject("OpenXJsonSerDe", m_openXJsonSerDe.Jsonize());

  }

  if(m_hiveJsonSerDeHasBeenSet)
  {
   payload.WithObject("HiveJsonSerDe", m_hiveJsonSerDe.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
