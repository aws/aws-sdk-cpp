/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/UpdateIndexTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIndexTypeResult::UpdateIndexTypeResult() : 
    m_state(IndexState::NOT_SET),
    m_type(IndexType::NOT_SET)
{
}

UpdateIndexTypeResult::UpdateIndexTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(IndexState::NOT_SET),
    m_type(IndexType::NOT_SET)
{
  *this = result;
}

UpdateIndexTypeResult& UpdateIndexTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = IndexTypeMapper::GetIndexTypeForName(jsonValue.GetString("Type"));

  }



  return *this;
}
