/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/AddApplicationOutputResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddApplicationOutputResult::AddApplicationOutputResult() : 
    m_applicationVersionId(0)
{
}

AddApplicationOutputResult::AddApplicationOutputResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_applicationVersionId(0)
{
  *this = result;
}

AddApplicationOutputResult& AddApplicationOutputResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationARN"))
  {
    m_applicationARN = jsonValue.GetString("ApplicationARN");

  }

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

  }

  if(jsonValue.ValueExists("OutputDescriptions"))
  {
    Aws::Utils::Array<JsonView> outputDescriptionsJsonList = jsonValue.GetArray("OutputDescriptions");
    for(unsigned outputDescriptionsIndex = 0; outputDescriptionsIndex < outputDescriptionsJsonList.GetLength(); ++outputDescriptionsIndex)
    {
      m_outputDescriptions.push_back(outputDescriptionsJsonList[outputDescriptionsIndex].AsObject());
    }
  }



  return *this;
}
