﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/CancelResourceRequestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudControlApi::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelResourceRequestResult::CancelResourceRequestResult()
{
}

CancelResourceRequestResult::CancelResourceRequestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelResourceRequestResult& CancelResourceRequestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProgressEvent"))
  {
    m_progressEvent = jsonValue.GetObject("ProgressEvent");

  }



  return *this;
}
