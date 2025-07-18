/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/Envelope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

Envelope::Envelope(JsonView jsonValue)
{
  *this = jsonValue;
}

Envelope& Envelope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Helo"))
  {
    m_helo = jsonValue.GetString("Helo");
    m_heloHasBeenSet = true;
  }
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetString("From");
    m_fromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("To"))
  {
    Aws::Utils::Array<JsonView> toJsonList = jsonValue.GetArray("To");
    for(unsigned toIndex = 0; toIndex < toJsonList.GetLength(); ++toIndex)
    {
      m_to.push_back(toJsonList[toIndex].AsString());
    }
    m_toHasBeenSet = true;
  }
  return *this;
}

JsonValue Envelope::Jsonize() const
{
  JsonValue payload;

  if(m_heloHasBeenSet)
  {
   payload.WithString("Helo", m_helo);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("From", m_from);

  }

  if(m_toHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> toJsonList(m_to.size());
   for(unsigned toIndex = 0; toIndex < toJsonList.GetLength(); ++toIndex)
   {
     toJsonList[toIndex].AsString(m_to[toIndex]);
   }
   payload.WithArray("To", std::move(toJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
