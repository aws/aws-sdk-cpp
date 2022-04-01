﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetEvidenceFolderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEvidenceFolderResult::GetEvidenceFolderResult()
{
}

GetEvidenceFolderResult::GetEvidenceFolderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEvidenceFolderResult& GetEvidenceFolderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evidenceFolder"))
  {
    m_evidenceFolder = jsonValue.GetObject("evidenceFolder");

  }



  return *this;
}
