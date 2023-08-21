/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/IcmpTypeCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

IcmpTypeCode::IcmpTypeCode() : 
    m_type(0),
    m_typeHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false)
{
}

IcmpTypeCode::IcmpTypeCode(JsonView jsonValue) : 
    m_type(0),
    m_typeHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

IcmpTypeCode& IcmpTypeCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetInteger("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetInteger("code");

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue IcmpTypeCode::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithInteger("type", m_type);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
