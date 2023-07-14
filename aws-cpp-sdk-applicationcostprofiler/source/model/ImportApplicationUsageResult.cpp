﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/ImportApplicationUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportApplicationUsageResult::ImportApplicationUsageResult()
{
}

ImportApplicationUsageResult::ImportApplicationUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportApplicationUsageResult& ImportApplicationUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("importId"))
  {
    m_importId = jsonValue.GetString("importId");

  }



  return *this;
}
