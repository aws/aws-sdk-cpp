/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/CreatePipelineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePipelineResult::CreatePipelineResult()
{
}

CreatePipelineResult::CreatePipelineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePipelineResult& CreatePipelineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Pipeline"))
  {
    m_pipeline = jsonValue.GetObject("Pipeline");

  }

  if(jsonValue.ValueExists("Warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("Warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsObject());
    }
  }



  return *this;
}
