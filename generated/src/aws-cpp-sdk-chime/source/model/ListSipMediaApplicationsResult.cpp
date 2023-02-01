/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListSipMediaApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSipMediaApplicationsResult::ListSipMediaApplicationsResult()
{
}

ListSipMediaApplicationsResult::ListSipMediaApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSipMediaApplicationsResult& ListSipMediaApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SipMediaApplications"))
  {
    Aws::Utils::Array<JsonView> sipMediaApplicationsJsonList = jsonValue.GetArray("SipMediaApplications");
    for(unsigned sipMediaApplicationsIndex = 0; sipMediaApplicationsIndex < sipMediaApplicationsJsonList.GetLength(); ++sipMediaApplicationsIndex)
    {
      m_sipMediaApplications.push_back(sipMediaApplicationsJsonList[sipMediaApplicationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
