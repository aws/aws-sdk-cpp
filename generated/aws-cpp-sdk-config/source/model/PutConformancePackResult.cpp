﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutConformancePackResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutConformancePackResult::PutConformancePackResult()
{
}

PutConformancePackResult::PutConformancePackResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutConformancePackResult& PutConformancePackResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConformancePackArn"))
  {
    m_conformancePackArn = jsonValue.GetString("ConformancePackArn");

  }



  return *this;
}
