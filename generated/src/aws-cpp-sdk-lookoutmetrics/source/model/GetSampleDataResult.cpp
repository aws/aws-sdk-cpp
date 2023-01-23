/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/GetSampleDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSampleDataResult::GetSampleDataResult()
{
}

GetSampleDataResult::GetSampleDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSampleDataResult& GetSampleDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HeaderValues"))
  {
    Aws::Utils::Array<JsonView> headerValuesJsonList = jsonValue.GetArray("HeaderValues");
    for(unsigned headerValuesIndex = 0; headerValuesIndex < headerValuesJsonList.GetLength(); ++headerValuesIndex)
    {
      m_headerValues.push_back(headerValuesJsonList[headerValuesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("SampleRows"))
  {
    Aws::Utils::Array<JsonView> sampleRowsJsonList = jsonValue.GetArray("SampleRows");
    for(unsigned sampleRowsIndex = 0; sampleRowsIndex < sampleRowsJsonList.GetLength(); ++sampleRowsIndex)
    {
      Aws::Utils::Array<JsonView> sampleRowJsonList = sampleRowsJsonList[sampleRowsIndex].AsArray();
      Aws::Vector<Aws::String> sampleRowList;
      sampleRowList.reserve((size_t)sampleRowJsonList.GetLength());
      for(unsigned sampleRowIndex = 0; sampleRowIndex < sampleRowJsonList.GetLength(); ++sampleRowIndex)
      {
        sampleRowList.push_back(sampleRowJsonList[sampleRowIndex].AsString());
      }
      m_sampleRows.push_back(std::move(sampleRowList));
    }
  }



  return *this;
}
