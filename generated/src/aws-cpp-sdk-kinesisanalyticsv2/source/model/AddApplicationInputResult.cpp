/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/AddApplicationInputResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddApplicationInputResult::AddApplicationInputResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddApplicationInputResult& AddApplicationInputResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationARN"))
  {
    m_applicationARN = jsonValue.GetString("ApplicationARN");
    m_applicationARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");
    m_applicationVersionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputDescriptions"))
  {
    Aws::Utils::Array<JsonView> inputDescriptionsJsonList = jsonValue.GetArray("InputDescriptions");
    for(unsigned inputDescriptionsIndex = 0; inputDescriptionsIndex < inputDescriptionsJsonList.GetLength(); ++inputDescriptionsIndex)
    {
      m_inputDescriptions.push_back(inputDescriptionsJsonList[inputDescriptionsIndex].AsObject());
    }
    m_inputDescriptionsHasBeenSet = true;
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
