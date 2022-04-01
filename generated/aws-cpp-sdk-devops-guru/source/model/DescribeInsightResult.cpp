﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeInsightResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInsightResult::DescribeInsightResult()
{
}

DescribeInsightResult::DescribeInsightResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInsightResult& DescribeInsightResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProactiveInsight"))
  {
    m_proactiveInsight = jsonValue.GetObject("ProactiveInsight");

  }

  if(jsonValue.ValueExists("ReactiveInsight"))
  {
    m_reactiveInsight = jsonValue.GetObject("ReactiveInsight");

  }



  return *this;
}
