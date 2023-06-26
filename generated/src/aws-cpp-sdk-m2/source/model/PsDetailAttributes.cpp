/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/PsDetailAttributes.h>
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

PsDetailAttributes::PsDetailAttributes() : 
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

PsDetailAttributes::PsDetailAttributes(JsonView jsonValue) : 
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

PsDetailAttributes& PsDetailAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encoding"))
  {
    m_encoding = jsonValue.GetString("encoding");

    m_encodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetString("format");

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue PsDetailAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_encodingHasBeenSet)
  {
   payload.WithString("encoding", m_encoding);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", m_format);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
