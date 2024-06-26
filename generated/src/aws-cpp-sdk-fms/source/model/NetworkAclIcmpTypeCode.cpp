﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkAclIcmpTypeCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

NetworkAclIcmpTypeCode::NetworkAclIcmpTypeCode() : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_type(0),
    m_typeHasBeenSet(false)
{
}

NetworkAclIcmpTypeCode::NetworkAclIcmpTypeCode(JsonView jsonValue)
  : NetworkAclIcmpTypeCode()
{
  *this = jsonValue;
}

NetworkAclIcmpTypeCode& NetworkAclIcmpTypeCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetInteger("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetInteger("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkAclIcmpTypeCode::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("Code", m_code);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithInteger("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
