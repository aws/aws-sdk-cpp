﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetEvidenceByEvidenceFolderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEvidenceByEvidenceFolderResult::GetEvidenceByEvidenceFolderResult()
{
}

GetEvidenceByEvidenceFolderResult::GetEvidenceByEvidenceFolderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEvidenceByEvidenceFolderResult& GetEvidenceByEvidenceFolderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evidence"))
  {
    Array<JsonView> evidenceJsonList = jsonValue.GetArray("evidence");
    for(unsigned evidenceIndex = 0; evidenceIndex < evidenceJsonList.GetLength(); ++evidenceIndex)
    {
      m_evidence.push_back(evidenceJsonList[evidenceIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
