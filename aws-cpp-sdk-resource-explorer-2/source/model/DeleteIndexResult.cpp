/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/DeleteIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteIndexResult::DeleteIndexResult() : 
    m_state(IndexState::NOT_SET)
{
}

DeleteIndexResult::DeleteIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(IndexState::NOT_SET)
{
  *this = result;
}

DeleteIndexResult& DeleteIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = IndexStateMapper::GetIndexStateForName(jsonValue.GetString("State"));

  }



  return *this;
}
