/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kinesisanalytics/model/DiscoverInputSchemaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DiscoverInputSchemaResult::DiscoverInputSchemaResult()
{
}

DiscoverInputSchemaResult::DiscoverInputSchemaResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DiscoverInputSchemaResult& DiscoverInputSchemaResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("InputSchema"))
  {
    m_inputSchema = jsonValue.GetObject("InputSchema");

  }

  if(jsonValue.ValueExists("ParsedInputRecords"))
  {
    Array<JsonValue> parsedInputRecordsJsonList = jsonValue.GetArray("ParsedInputRecords");
    for(unsigned parsedInputRecordsIndex = 0; parsedInputRecordsIndex < parsedInputRecordsJsonList.GetLength(); ++parsedInputRecordsIndex)
    {
      Array<JsonValue> parsedInputRecordJsonList = parsedInputRecordsJsonList[parsedInputRecordsIndex].AsArray();
      Aws::Vector<Aws::String> parsedInputRecordList((size_t)parsedInputRecordJsonList.GetLength());
      for(unsigned parsedInputRecordIndex = 0; parsedInputRecordIndex < parsedInputRecordJsonList.GetLength(); ++parsedInputRecordIndex)
      {
        parsedInputRecordList.push_back(parsedInputRecordJsonList[parsedInputRecordIndex].AsString());
      }
      m_parsedInputRecords.push_back(std::move(parsedInputRecordList));
    }
  }

  if(jsonValue.ValueExists("RawInputRecords"))
  {
    Array<JsonValue> rawInputRecordsJsonList = jsonValue.GetArray("RawInputRecords");
    for(unsigned rawInputRecordsIndex = 0; rawInputRecordsIndex < rawInputRecordsJsonList.GetLength(); ++rawInputRecordsIndex)
    {
      m_rawInputRecords.push_back(rawInputRecordsJsonList[rawInputRecordsIndex].AsString());
    }
  }



  return *this;
}
