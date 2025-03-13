/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeClientAuthenticationSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClientAuthenticationSettingsResult::DescribeClientAuthenticationSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeClientAuthenticationSettingsResult& DescribeClientAuthenticationSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClientAuthenticationSettingsInfo"))
  {
    Aws::Utils::Array<JsonView> clientAuthenticationSettingsInfoJsonList = jsonValue.GetArray("ClientAuthenticationSettingsInfo");
    for(unsigned clientAuthenticationSettingsInfoIndex = 0; clientAuthenticationSettingsInfoIndex < clientAuthenticationSettingsInfoJsonList.GetLength(); ++clientAuthenticationSettingsInfoIndex)
    {
      m_clientAuthenticationSettingsInfo.push_back(clientAuthenticationSettingsInfoJsonList[clientAuthenticationSettingsInfoIndex].AsObject());
    }
    m_clientAuthenticationSettingsInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
