/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCrossAccountResourceAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCrossAccountResourceAccountsResult::ListCrossAccountResourceAccountsResult()
{
}

ListCrossAccountResourceAccountsResult::ListCrossAccountResourceAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCrossAccountResourceAccountsResult& ListCrossAccountResourceAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceOwnerAwsAccountIds"))
  {
    Aws::Utils::Array<JsonView> resourceOwnerAwsAccountIdsJsonList = jsonValue.GetArray("ResourceOwnerAwsAccountIds");
    for(unsigned resourceOwnerAwsAccountIdsIndex = 0; resourceOwnerAwsAccountIdsIndex < resourceOwnerAwsAccountIdsJsonList.GetLength(); ++resourceOwnerAwsAccountIdsIndex)
    {
      m_resourceOwnerAwsAccountIds.push_back(resourceOwnerAwsAccountIdsJsonList[resourceOwnerAwsAccountIdsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
