/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/BuiltinIntentMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

BuiltinIntentMetadata::BuiltinIntentMetadata() : 
    m_signatureHasBeenSet(false),
    m_supportedLocalesHasBeenSet(false)
{
}

BuiltinIntentMetadata::BuiltinIntentMetadata(JsonView jsonValue) : 
    m_signatureHasBeenSet(false),
    m_supportedLocalesHasBeenSet(false)
{
  *this = jsonValue;
}

BuiltinIntentMetadata& BuiltinIntentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetString("signature");

    m_signatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedLocales"))
  {
    Aws::Utils::Array<JsonView> supportedLocalesJsonList = jsonValue.GetArray("supportedLocales");
    for(unsigned supportedLocalesIndex = 0; supportedLocalesIndex < supportedLocalesJsonList.GetLength(); ++supportedLocalesIndex)
    {
      m_supportedLocales.push_back(LocaleMapper::GetLocaleForName(supportedLocalesJsonList[supportedLocalesIndex].AsString()));
    }
    m_supportedLocalesHasBeenSet = true;
  }

  return *this;
}

JsonValue BuiltinIntentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_signatureHasBeenSet)
  {
   payload.WithString("signature", m_signature);

  }

  if(m_supportedLocalesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedLocalesJsonList(m_supportedLocales.size());
   for(unsigned supportedLocalesIndex = 0; supportedLocalesIndex < supportedLocalesJsonList.GetLength(); ++supportedLocalesIndex)
   {
     supportedLocalesJsonList[supportedLocalesIndex].AsString(LocaleMapper::GetNameForLocale(m_supportedLocales[supportedLocalesIndex]));
   }
   payload.WithArray("supportedLocales", std::move(supportedLocalesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
