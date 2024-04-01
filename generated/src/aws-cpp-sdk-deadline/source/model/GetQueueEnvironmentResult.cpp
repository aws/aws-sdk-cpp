/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetQueueEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueueEnvironmentResult::GetQueueEnvironmentResult() : 
    m_priority(0),
    m_templateType(EnvironmentTemplateType::NOT_SET)
{
}

GetQueueEnvironmentResult::GetQueueEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_priority(0),
    m_templateType(EnvironmentTemplateType::NOT_SET)
{
  *this = result;
}

GetQueueEnvironmentResult& GetQueueEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

  }

  if(jsonValue.ValueExists("queueEnvironmentId"))
  {
    m_queueEnvironmentId = jsonValue.GetString("queueEnvironmentId");

  }

  if(jsonValue.ValueExists("template"))
  {
    m_template = jsonValue.GetString("template");

  }

  if(jsonValue.ValueExists("templateType"))
  {
    m_templateType = EnvironmentTemplateTypeMapper::GetEnvironmentTemplateTypeForName(jsonValue.GetString("templateType"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
