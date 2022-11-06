/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListConferenceProvidersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConferenceProvidersResult::ListConferenceProvidersResult()
{
}

ListConferenceProvidersResult::ListConferenceProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConferenceProvidersResult& ListConferenceProvidersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConferenceProviders"))
  {
    Aws::Utils::Array<JsonView> conferenceProvidersJsonList = jsonValue.GetArray("ConferenceProviders");
    for(unsigned conferenceProvidersIndex = 0; conferenceProvidersIndex < conferenceProvidersJsonList.GetLength(); ++conferenceProvidersIndex)
    {
      m_conferenceProviders.push_back(conferenceProvidersJsonList[conferenceProvidersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
