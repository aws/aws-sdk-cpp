﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeDetectMitigationActionsTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDetectMitigationActionsTaskResult::DescribeDetectMitigationActionsTaskResult()
{
}

DescribeDetectMitigationActionsTaskResult::DescribeDetectMitigationActionsTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDetectMitigationActionsTaskResult& DescribeDetectMitigationActionsTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskSummary"))
  {
    m_taskSummary = jsonValue.GetObject("taskSummary");

  }



  return *this;
}
