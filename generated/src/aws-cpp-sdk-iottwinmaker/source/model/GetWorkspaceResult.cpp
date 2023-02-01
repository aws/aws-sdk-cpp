/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetWorkspaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkspaceResult::GetWorkspaceResult()
{
}

GetWorkspaceResult::GetWorkspaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkspaceResult& GetWorkspaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workspaceId"))
  {
    m_workspaceId = jsonValue.GetString("workspaceId");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetString("s3Location");

  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = jsonValue.GetString("role");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

  }



  return *this;
}
