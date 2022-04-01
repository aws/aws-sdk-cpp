﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/StartDataIngestionJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDataIngestionJobResult::StartDataIngestionJobResult() : 
    m_status(IngestionJobStatus::NOT_SET)
{
}

StartDataIngestionJobResult::StartDataIngestionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(IngestionJobStatus::NOT_SET)
{
  *this = result;
}

StartDataIngestionJobResult& StartDataIngestionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IngestionJobStatusMapper::GetIngestionJobStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
