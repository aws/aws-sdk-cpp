﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/DescribePipelinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePipelinesResult::DescribePipelinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePipelinesResult& DescribePipelinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pipelineDescriptionList"))
  {
    Aws::Utils::Array<JsonView> pipelineDescriptionListJsonList = jsonValue.GetArray("pipelineDescriptionList");
    for(unsigned pipelineDescriptionListIndex = 0; pipelineDescriptionListIndex < pipelineDescriptionListJsonList.GetLength(); ++pipelineDescriptionListIndex)
    {
      m_pipelineDescriptionList.push_back(pipelineDescriptionListJsonList[pipelineDescriptionListIndex].AsObject());
    }
    m_pipelineDescriptionListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
