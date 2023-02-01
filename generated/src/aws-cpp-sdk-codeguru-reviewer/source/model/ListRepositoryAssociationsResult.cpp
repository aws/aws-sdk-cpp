/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRepositoryAssociationsResult::ListRepositoryAssociationsResult()
{
}

ListRepositoryAssociationsResult::ListRepositoryAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRepositoryAssociationsResult& ListRepositoryAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RepositoryAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> repositoryAssociationSummariesJsonList = jsonValue.GetArray("RepositoryAssociationSummaries");
    for(unsigned repositoryAssociationSummariesIndex = 0; repositoryAssociationSummariesIndex < repositoryAssociationSummariesJsonList.GetLength(); ++repositoryAssociationSummariesIndex)
    {
      m_repositoryAssociationSummaries.push_back(repositoryAssociationSummariesJsonList[repositoryAssociationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
