/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/CreateSourceRepositoryBranchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSourceRepositoryBranchResult::CreateSourceRepositoryBranchResult()
{
}

CreateSourceRepositoryBranchResult::CreateSourceRepositoryBranchResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSourceRepositoryBranchResult& CreateSourceRepositoryBranchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ref"))
  {
    m_ref = jsonValue.GetString("ref");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

  }

  if(jsonValue.ValueExists("headCommitId"))
  {
    m_headCommitId = jsonValue.GetString("headCommitId");

  }



  return *this;
}
