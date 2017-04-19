/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

BuiltinIntentMetadata::BuiltinIntentMetadata(const JsonValue& jsonValue) : 
    m_signatureHasBeenSet(false),
    m_supportedLocalesHasBeenSet(false)
{
  *this = jsonValue;
}

BuiltinIntentMetadata& BuiltinIntentMetadata::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetString("signature");

    m_signatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedLocales"))
  {
    Array<JsonValue> supportedLocalesJsonList = jsonValue.GetArray("supportedLocales");
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
   Array<JsonValue> supportedLocalesJsonList(m_supportedLocales.size());
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