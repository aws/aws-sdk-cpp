/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/CreateWorkspaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWorkspaceResult::CreateWorkspaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateWorkspaceResult& CreateWorkspaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");
    m_workspaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
