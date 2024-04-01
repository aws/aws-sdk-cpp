/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/StartMetadataGenerationRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartMetadataGenerationRunResult::StartMetadataGenerationRunResult() : 
    m_status(MetadataGenerationRunStatus::NOT_SET),
    m_type(MetadataGenerationRunType::NOT_SET)
{
}

StartMetadataGenerationRunResult::StartMetadataGenerationRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MetadataGenerationRunStatus::NOT_SET),
    m_type(MetadataGenerationRunType::NOT_SET)
{
  *this = result;
}

StartMetadataGenerationRunResult& StartMetadataGenerationRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("owningProjectId"))
  {
    m_owningProjectId = jsonValue.GetString("owningProjectId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MetadataGenerationRunStatusMapper::GetMetadataGenerationRunStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = MetadataGenerationRunTypeMapper::GetMetadataGenerationRunTypeForName(jsonValue.GetString("type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
