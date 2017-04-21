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
#include <aws/lex-models/model/GetBuiltinIntentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBuiltinIntentResult::GetBuiltinIntentResult()
{
}

GetBuiltinIntentResult::GetBuiltinIntentResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBuiltinIntentResult& GetBuiltinIntentResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetString("signature");

  }

  if(jsonValue.ValueExists("supportedLocales"))
  {
    Array<JsonValue> supportedLocalesJsonList = jsonValue.GetArray("supportedLocales");
    for(unsigned supportedLocalesIndex = 0; supportedLocalesIndex < supportedLocalesJsonList.GetLength(); ++supportedLocalesIndex)
    {
      m_supportedLocales.push_back(LocaleMapper::GetLocaleForName(supportedLocalesJsonList[supportedLocalesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("slots"))
  {
    Array<JsonValue> slotsJsonList = jsonValue.GetArray("slots");
    for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
    {
      m_slots.push_back(slotsJsonList[slotsIndex].AsObject());
    }
  }



  return *this;
}
