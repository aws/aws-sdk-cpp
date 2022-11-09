/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchGetRepositoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetRepositoriesResult::BatchGetRepositoriesResult()
{
}

BatchGetRepositoriesResult::BatchGetRepositoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetRepositoriesResult& BatchGetRepositoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("repositories"))
  {
    Aws::Utils::Array<JsonView> repositoriesJsonList = jsonValue.GetArray("repositories");
    for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
    {
      m_repositories.push_back(repositoriesJsonList[repositoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("repositoriesNotFound"))
  {
    Aws::Utils::Array<JsonView> repositoriesNotFoundJsonList = jsonValue.GetArray("repositoriesNotFound");
    for(unsigned repositoriesNotFoundIndex = 0; repositoriesNotFoundIndex < repositoriesNotFoundJsonList.GetLength(); ++repositoriesNotFoundIndex)
    {
      m_repositoriesNotFound.push_back(repositoriesNotFoundJsonList[repositoriesNotFoundIndex].AsString());
    }
  }



  return *this;
}
