/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/PrimaryKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

PrimaryKey::PrimaryKey() : 
    m_length(0),
    m_lengthHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false)
{
}

PrimaryKey::PrimaryKey(JsonView jsonValue) : 
    m_length(0),
    m_lengthHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offset(0),
    m_offsetHasBeenSet(false)
{
  *this = jsonValue;
}

PrimaryKey& PrimaryKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("length"))
  {
    m_length = jsonValue.GetInteger("length");

    m_lengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetInteger("offset");

    m_offsetHasBeenSet = true;
  }

  return *this;
}

JsonValue PrimaryKey::Jsonize() const
{
  JsonValue payload;

  if(m_lengthHasBeenSet)
  {
   payload.WithInteger("length", m_length);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("offset", m_offset);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
