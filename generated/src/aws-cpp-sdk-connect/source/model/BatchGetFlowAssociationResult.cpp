/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BatchGetFlowAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetFlowAssociationResult::BatchGetFlowAssociationResult()
{
}

BatchGetFlowAssociationResult::BatchGetFlowAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetFlowAssociationResult& BatchGetFlowAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FlowAssociationSummaryList"))
  {
    Aws::Utils::Array<JsonView> flowAssociationSummaryListJsonList = jsonValue.GetArray("FlowAssociationSummaryList");
    for(unsigned flowAssociationSummaryListIndex = 0; flowAssociationSummaryListIndex < flowAssociationSummaryListJsonList.GetLength(); ++flowAssociationSummaryListIndex)
    {
      m_flowAssociationSummaryList.push_back(flowAssociationSummaryListJsonList[flowAssociationSummaryListIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
