/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchDeleteBuildsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteBuildsResult::BatchDeleteBuildsResult()
{
}

BatchDeleteBuildsResult::BatchDeleteBuildsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteBuildsResult& BatchDeleteBuildsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("buildsDeleted"))
  {
    Aws::Utils::Array<JsonView> buildsDeletedJsonList = jsonValue.GetArray("buildsDeleted");
    for(unsigned buildsDeletedIndex = 0; buildsDeletedIndex < buildsDeletedJsonList.GetLength(); ++buildsDeletedIndex)
    {
      m_buildsDeleted.push_back(buildsDeletedJsonList[buildsDeletedIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("buildsNotDeleted"))
  {
    Aws::Utils::Array<JsonView> buildsNotDeletedJsonList = jsonValue.GetArray("buildsNotDeleted");
    for(unsigned buildsNotDeletedIndex = 0; buildsNotDeletedIndex < buildsNotDeletedJsonList.GetLength(); ++buildsNotDeletedIndex)
    {
      m_buildsNotDeleted.push_back(buildsNotDeletedJsonList[buildsNotDeletedIndex].AsObject());
    }
  }



  return *this;
}
