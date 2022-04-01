﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DeleteImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteImportResult::DeleteImportResult() : 
    m_importStatus(ImportStatus::NOT_SET)
{
}

DeleteImportResult::DeleteImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_importStatus(ImportStatus::NOT_SET)
{
  *this = result;
}

DeleteImportResult& DeleteImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("importId"))
  {
    m_importId = jsonValue.GetString("importId");

  }

  if(jsonValue.ValueExists("importStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("importStatus"));

  }



  return *this;
}
