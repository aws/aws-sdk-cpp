/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRestoreTestingSelectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRestoreTestingSelectionResult::UpdateRestoreTestingSelectionResult()
{
}

UpdateRestoreTestingSelectionResult::UpdateRestoreTestingSelectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateRestoreTestingSelectionResult& UpdateRestoreTestingSelectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("RestoreTestingPlanArn"))
  {
    m_restoreTestingPlanArn = jsonValue.GetString("RestoreTestingPlanArn");

  }

  if(jsonValue.ValueExists("RestoreTestingPlanName"))
  {
    m_restoreTestingPlanName = jsonValue.GetString("RestoreTestingPlanName");

  }

  if(jsonValue.ValueExists("RestoreTestingSelectionName"))
  {
    m_restoreTestingSelectionName = jsonValue.GetString("RestoreTestingSelectionName");

  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetDouble("UpdateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
