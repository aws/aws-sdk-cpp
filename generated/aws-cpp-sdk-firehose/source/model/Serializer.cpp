/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/Serializer.h>
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

Serializer::Serializer() : 
    m_parquetSerDeHasBeenSet(false),
    m_orcSerDeHasBeenSet(false)
{
}

Serializer::Serializer(JsonView jsonValue) : 
    m_parquetSerDeHasBeenSet(false),
    m_orcSerDeHasBeenSet(false)
{
  *this = jsonValue;
}

Serializer& Serializer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParquetSerDe"))
  {
    m_parquetSerDe = jsonValue.GetObject("ParquetSerDe");

    m_parquetSerDeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrcSerDe"))
  {
    m_orcSerDe = jsonValue.GetObject("OrcSerDe");

    m_orcSerDeHasBeenSet = true;
  }

  return *this;
}

JsonValue Serializer::Jsonize() const
{
  JsonValue payload;

  if(m_parquetSerDeHasBeenSet)
  {
   payload.WithObject("ParquetSerDe", m_parquetSerDe.Jsonize());

  }

  if(m_orcSerDeHasBeenSet)
  {
   payload.WithObject("OrcSerDe", m_orcSerDe.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
