/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/PutRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutRecordsResult::PutRecordsResult() : 
    m_failedRecordCount(0),
    m_encryptionType(EncryptionType::NOT_SET)
{
}

PutRecordsResult::PutRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_failedRecordCount(0),
    m_encryptionType(EncryptionType::NOT_SET)
{
  *this = result;
}

PutRecordsResult& PutRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedRecordCount"))
  {
    m_failedRecordCount = jsonValue.GetInteger("FailedRecordCount");

  }

  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("EncryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("EncryptionType"));

  }



  return *this;
}
