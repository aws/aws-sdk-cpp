/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ListUserImportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserImportJobsResult::ListUserImportJobsResult()
{
}

ListUserImportJobsResult::ListUserImportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUserImportJobsResult& ListUserImportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserImportJobs"))
  {
    Aws::Utils::Array<JsonView> userImportJobsJsonList = jsonValue.GetArray("UserImportJobs");
    for(unsigned userImportJobsIndex = 0; userImportJobsIndex < userImportJobsJsonList.GetLength(); ++userImportJobsIndex)
    {
      m_userImportJobs.push_back(userImportJobsJsonList[userImportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("PaginationToken"))
  {
    m_paginationToken = jsonValue.GetString("PaginationToken");

  }



  return *this;
}
