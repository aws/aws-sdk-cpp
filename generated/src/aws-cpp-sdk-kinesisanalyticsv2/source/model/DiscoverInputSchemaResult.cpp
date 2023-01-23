/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DiscoverInputSchemaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DiscoverInputSchemaResult::DiscoverInputSchemaResult()
{
}

DiscoverInputSchemaResult::DiscoverInputSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DiscoverInputSchemaResult& DiscoverInputSchemaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InputSchema"))
  {
    m_inputSchema = jsonValue.GetObject("InputSchema");

  }

  if(jsonValue.ValueExists("ParsedInputRecords"))
  {
    Aws::Utils::Array<JsonView> parsedInputRecordsJsonList = jsonValue.GetArray("ParsedInputRecords");
    for(unsigned parsedInputRecordsIndex = 0; parsedInputRecordsIndex < parsedInputRecordsJsonList.GetLength(); ++parsedInputRecordsIndex)
    {
      Aws::Utils::Array<JsonView> parsedInputRecordJsonList = parsedInputRecordsJsonList[parsedInputRecordsIndex].AsArray();
      Aws::Vector<Aws::String> parsedInputRecordList;
      parsedInputRecordList.reserve((size_t)parsedInputRecordJsonList.GetLength());
      for(unsigned parsedInputRecordIndex = 0; parsedInputRecordIndex < parsedInputRecordJsonList.GetLength(); ++parsedInputRecordIndex)
      {
        parsedInputRecordList.push_back(parsedInputRecordJsonList[parsedInputRecordIndex].AsString());
      }
      m_parsedInputRecords.push_back(std::move(parsedInputRecordList));
    }
  }

  if(jsonValue.ValueExists("ProcessedInputRecords"))
  {
    Aws::Utils::Array<JsonView> processedInputRecordsJsonList = jsonValue.GetArray("ProcessedInputRecords");
    for(unsigned processedInputRecordsIndex = 0; processedInputRecordsIndex < processedInputRecordsJsonList.GetLength(); ++processedInputRecordsIndex)
    {
      m_processedInputRecords.push_back(processedInputRecordsJsonList[processedInputRecordsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("RawInputRecords"))
  {
    Aws::Utils::Array<JsonView> rawInputRecordsJsonList = jsonValue.GetArray("RawInputRecords");
    for(unsigned rawInputRecordsIndex = 0; rawInputRecordsIndex < rawInputRecordsJsonList.GetLength(); ++rawInputRecordsIndex)
    {
      m_rawInputRecords.push_back(rawInputRecordsJsonList[rawInputRecordsIndex].AsString());
    }
  }



  return *this;
}
