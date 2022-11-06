/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetCelebrityInfoResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCelebrityInfoResult::GetCelebrityInfoResult()
{
}

GetCelebrityInfoResult::GetCelebrityInfoResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCelebrityInfoResult& GetCelebrityInfoResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Urls"))
  {
    Aws::Utils::Array<JsonView> urlsJsonList = jsonValue.GetArray("Urls");
    for(unsigned urlsIndex = 0; urlsIndex < urlsJsonList.GetLength(); ++urlsIndex)
    {
      m_urls.push_back(urlsJsonList[urlsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("KnownGender"))
  {
    m_knownGender = jsonValue.GetObject("KnownGender");

  }



  return *this;
}
