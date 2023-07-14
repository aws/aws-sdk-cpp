/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/GetRandomPasswordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRandomPasswordRequest::GetRandomPasswordRequest() : 
    m_passwordLength(0),
    m_passwordLengthHasBeenSet(false),
    m_excludeCharactersHasBeenSet(false),
    m_excludeNumbers(false),
    m_excludeNumbersHasBeenSet(false),
    m_excludePunctuation(false),
    m_excludePunctuationHasBeenSet(false),
    m_excludeUppercase(false),
    m_excludeUppercaseHasBeenSet(false),
    m_excludeLowercase(false),
    m_excludeLowercaseHasBeenSet(false),
    m_includeSpace(false),
    m_includeSpaceHasBeenSet(false),
    m_requireEachIncludedType(false),
    m_requireEachIncludedTypeHasBeenSet(false)
{
}

Aws::String GetRandomPasswordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_passwordLengthHasBeenSet)
  {
   payload.WithInt64("PasswordLength", m_passwordLength);

  }

  if(m_excludeCharactersHasBeenSet)
  {
   payload.WithString("ExcludeCharacters", m_excludeCharacters);

  }

  if(m_excludeNumbersHasBeenSet)
  {
   payload.WithBool("ExcludeNumbers", m_excludeNumbers);

  }

  if(m_excludePunctuationHasBeenSet)
  {
   payload.WithBool("ExcludePunctuation", m_excludePunctuation);

  }

  if(m_excludeUppercaseHasBeenSet)
  {
   payload.WithBool("ExcludeUppercase", m_excludeUppercase);

  }

  if(m_excludeLowercaseHasBeenSet)
  {
   payload.WithBool("ExcludeLowercase", m_excludeLowercase);

  }

  if(m_includeSpaceHasBeenSet)
  {
   payload.WithBool("IncludeSpace", m_includeSpace);

  }

  if(m_requireEachIncludedTypeHasBeenSet)
  {
   payload.WithBool("RequireEachIncludedType", m_requireEachIncludedType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRandomPasswordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "secretsmanager.GetRandomPassword"));
  return headers;

}




