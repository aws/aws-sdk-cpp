/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DkimAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DkimAttributes::DkimAttributes() : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false),
    m_signingAttributesOrigin(DkimSigningAttributesOrigin::NOT_SET),
    m_signingAttributesOriginHasBeenSet(false)
{
}

DkimAttributes::DkimAttributes(JsonView jsonValue) : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false),
    m_signingAttributesOrigin(DkimSigningAttributesOrigin::NOT_SET),
    m_signingAttributesOriginHasBeenSet(false)
{
  *this = jsonValue;
}

DkimAttributes& DkimAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SigningEnabled"))
  {
    m_signingEnabled = jsonValue.GetBool("SigningEnabled");

    m_signingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DkimStatusMapper::GetDkimStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tokens"))
  {
    Array<JsonView> tokensJsonList = jsonValue.GetArray("Tokens");
    for(unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex)
    {
      m_tokens.push_back(tokensJsonList[tokensIndex].AsString());
    }
    m_tokensHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigningAttributesOrigin"))
  {
    m_signingAttributesOrigin = DkimSigningAttributesOriginMapper::GetDkimSigningAttributesOriginForName(jsonValue.GetString("SigningAttributesOrigin"));

    m_signingAttributesOriginHasBeenSet = true;
  }

  return *this;
}

JsonValue DkimAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_signingEnabledHasBeenSet)
  {
   payload.WithBool("SigningEnabled", m_signingEnabled);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DkimStatusMapper::GetNameForDkimStatus(m_status));
  }

  if(m_tokensHasBeenSet)
  {
   Array<JsonValue> tokensJsonList(m_tokens.size());
   for(unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex)
   {
     tokensJsonList[tokensIndex].AsString(m_tokens[tokensIndex]);
   }
   payload.WithArray("Tokens", std::move(tokensJsonList));

  }

  if(m_signingAttributesOriginHasBeenSet)
  {
   payload.WithString("SigningAttributesOrigin", DkimSigningAttributesOriginMapper::GetNameForDkimSigningAttributesOrigin(m_signingAttributesOrigin));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
