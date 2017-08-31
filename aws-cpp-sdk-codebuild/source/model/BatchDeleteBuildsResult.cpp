/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("buildsDeleted"))
  {
    Array<JsonValue> buildsDeletedJsonList = jsonValue.GetArray("buildsDeleted");
    for(unsigned buildsDeletedIndex = 0; buildsDeletedIndex < buildsDeletedJsonList.GetLength(); ++buildsDeletedIndex)
    {
      m_buildsDeleted.push_back(buildsDeletedJsonList[buildsDeletedIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("buildsNotDeleted"))
  {
    Array<JsonValue> buildsNotDeletedJsonList = jsonValue.GetArray("buildsNotDeleted");
    for(unsigned buildsNotDeletedIndex = 0; buildsNotDeletedIndex < buildsNotDeletedJsonList.GetLength(); ++buildsNotDeletedIndex)
    {
      m_buildsNotDeleted.push_back(buildsNotDeletedJsonList[buildsNotDeletedIndex].AsObject());
    }
  }



  return *this;
}
