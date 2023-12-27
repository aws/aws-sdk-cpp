/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/EdiType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

EdiType::EdiType() : 
    m_x12DetailsHasBeenSet(false)
{
}

EdiType::EdiType(JsonView jsonValue) : 
    m_x12DetailsHasBeenSet(false)
{
  *this = jsonValue;
}

EdiType& EdiType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("x12Details"))
  {
    m_x12Details = jsonValue.GetObject("x12Details");

    m_x12DetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue EdiType::Jsonize() const
{
  JsonValue payload;

  if(m_x12DetailsHasBeenSet)
  {
   payload.WithObject("x12Details", m_x12Details.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
