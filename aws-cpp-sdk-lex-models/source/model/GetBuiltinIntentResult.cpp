/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetBuiltinIntentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBuiltinIntentResult::GetBuiltinIntentResult()
{
}

GetBuiltinIntentResult::GetBuiltinIntentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBuiltinIntentResult& GetBuiltinIntentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("signature"))
  {
    m_signature = jsonValue.GetString("signature");

  }

  if(jsonValue.ValueExists("supportedLocales"))
  {
    Aws::Utils::Array<JsonView> supportedLocalesJsonList = jsonValue.GetArray("supportedLocales");
    for(unsigned supportedLocalesIndex = 0; supportedLocalesIndex < supportedLocalesJsonList.GetLength(); ++supportedLocalesIndex)
    {
      m_supportedLocales.push_back(LocaleMapper::GetLocaleForName(supportedLocalesJsonList[supportedLocalesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("slots"))
  {
    Aws::Utils::Array<JsonView> slotsJsonList = jsonValue.GetArray("slots");
    for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
    {
      m_slots.push_back(slotsJsonList[slotsIndex].AsObject());
    }
  }



  return *this;
}
