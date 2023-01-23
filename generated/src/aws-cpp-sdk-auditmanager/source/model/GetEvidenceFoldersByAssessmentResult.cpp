/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEvidenceFoldersByAssessmentResult::GetEvidenceFoldersByAssessmentResult()
{
}

GetEvidenceFoldersByAssessmentResult::GetEvidenceFoldersByAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEvidenceFoldersByAssessmentResult& GetEvidenceFoldersByAssessmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evidenceFolders"))
  {
    Aws::Utils::Array<JsonView> evidenceFoldersJsonList = jsonValue.GetArray("evidenceFolders");
    for(unsigned evidenceFoldersIndex = 0; evidenceFoldersIndex < evidenceFoldersJsonList.GetLength(); ++evidenceFoldersIndex)
    {
      m_evidenceFolders.push_back(evidenceFoldersJsonList[evidenceFoldersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
