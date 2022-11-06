/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListDirectoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDirectoriesResult::ListDirectoriesResult()
{
}

ListDirectoriesResult::ListDirectoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDirectoriesResult& ListDirectoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Directories"))
  {
    Aws::Utils::Array<JsonView> directoriesJsonList = jsonValue.GetArray("Directories");
    for(unsigned directoriesIndex = 0; directoriesIndex < directoriesJsonList.GetLength(); ++directoriesIndex)
    {
      m_directories.push_back(directoriesJsonList[directoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
