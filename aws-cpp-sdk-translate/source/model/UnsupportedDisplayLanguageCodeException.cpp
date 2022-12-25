/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/UnsupportedDisplayLanguageCodeException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

UnsupportedDisplayLanguageCodeException::UnsupportedDisplayLanguageCodeException() : 
    m_messageHasBeenSet(false),
    m_displayLanguageCodeHasBeenSet(false)
{
}

UnsupportedDisplayLanguageCodeException::UnsupportedDisplayLanguageCodeException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_displayLanguageCodeHasBeenSet(false)
{
  *this = jsonValue;
}

UnsupportedDisplayLanguageCodeException& UnsupportedDisplayLanguageCodeException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayLanguageCode"))
  {
    m_displayLanguageCode = jsonValue.GetString("DisplayLanguageCode");

    m_displayLanguageCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsupportedDisplayLanguageCodeException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_displayLanguageCodeHasBeenSet)
  {
   payload.WithString("DisplayLanguageCode", m_displayLanguageCode);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
