﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/StopModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopModelResult::StopModelResult() : 
    m_status(ModelHostingStatus::NOT_SET)
{
}

StopModelResult::StopModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ModelHostingStatus::NOT_SET)
{
  *this = result;
}

StopModelResult& StopModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelHostingStatusMapper::GetModelHostingStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
