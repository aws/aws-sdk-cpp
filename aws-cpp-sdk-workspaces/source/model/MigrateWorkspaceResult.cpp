/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/MigrateWorkspaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

MigrateWorkspaceResult::MigrateWorkspaceResult()
{
}

MigrateWorkspaceResult::MigrateWorkspaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

MigrateWorkspaceResult& MigrateWorkspaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SourceWorkspaceId"))
  {
    m_sourceWorkspaceId = jsonValue.GetString("SourceWorkspaceId");

  }

  if(jsonValue.ValueExists("TargetWorkspaceId"))
  {
    m_targetWorkspaceId = jsonValue.GetString("TargetWorkspaceId");

  }



  return *this;
}
