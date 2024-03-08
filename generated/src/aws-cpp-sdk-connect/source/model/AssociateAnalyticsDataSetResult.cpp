/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateAnalyticsDataSetResult.h>
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

AssociateAnalyticsDataSetResult::AssociateAnalyticsDataSetResult()
{
}

AssociateAnalyticsDataSetResult::AssociateAnalyticsDataSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateAnalyticsDataSetResult& AssociateAnalyticsDataSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

  }

  if(jsonValue.ValueExists("TargetAccountId"))
  {
    m_targetAccountId = jsonValue.GetString("TargetAccountId");

  }

  if(jsonValue.ValueExists("ResourceShareId"))
  {
    m_resourceShareId = jsonValue.GetString("ResourceShareId");

  }

  if(jsonValue.ValueExists("ResourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("ResourceShareArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
