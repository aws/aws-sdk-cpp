/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/DimensionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

DimensionDetail::DimensionDetail() : 
    m_identifierHasBeenSet(false)
{
}

DimensionDetail::DimensionDetail(JsonView jsonValue) : 
    m_identifierHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionDetail& DimensionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
