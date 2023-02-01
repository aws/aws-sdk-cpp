/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ListFargateProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFargateProfilesResult::ListFargateProfilesResult()
{
}

ListFargateProfilesResult::ListFargateProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFargateProfilesResult& ListFargateProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("fargateProfileNames"))
  {
    Aws::Utils::Array<JsonView> fargateProfileNamesJsonList = jsonValue.GetArray("fargateProfileNames");
    for(unsigned fargateProfileNamesIndex = 0; fargateProfileNamesIndex < fargateProfileNamesJsonList.GetLength(); ++fargateProfileNamesIndex)
    {
      m_fargateProfileNames.push_back(fargateProfileNamesJsonList[fargateProfileNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
