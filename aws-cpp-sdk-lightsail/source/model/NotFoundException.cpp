/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/NotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

NotFoundException::NotFoundException() : 
    m_codeHasBeenSet(false),
    m_docsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_tipHasBeenSet(false)
{
}

NotFoundException::NotFoundException(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_docsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_tipHasBeenSet(false)
{
  *this = jsonValue;
}

NotFoundException& NotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("docs"))
  {
    m_docs = jsonValue.GetString("docs");

    m_docsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tip"))
  {
    m_tip = jsonValue.GetString("tip");

    m_tipHasBeenSet = true;
  }

  return *this;
}

JsonValue NotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_docsHasBeenSet)
  {
   payload.WithString("docs", m_docs);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_tipHasBeenSet)
  {
   payload.WithString("tip", m_tip);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
