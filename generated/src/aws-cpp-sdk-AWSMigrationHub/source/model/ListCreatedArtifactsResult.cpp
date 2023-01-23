/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ListCreatedArtifactsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCreatedArtifactsResult::ListCreatedArtifactsResult()
{
}

ListCreatedArtifactsResult::ListCreatedArtifactsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCreatedArtifactsResult& ListCreatedArtifactsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("CreatedArtifactList"))
  {
    Aws::Utils::Array<JsonView> createdArtifactListJsonList = jsonValue.GetArray("CreatedArtifactList");
    for(unsigned createdArtifactListIndex = 0; createdArtifactListIndex < createdArtifactListJsonList.GetLength(); ++createdArtifactListIndex)
    {
      m_createdArtifactList.push_back(createdArtifactListJsonList[createdArtifactListIndex].AsObject());
    }
  }



  return *this;
}
