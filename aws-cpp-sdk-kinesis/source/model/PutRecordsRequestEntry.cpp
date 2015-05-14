/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesis/model/PutRecordsRequestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRecordsRequestEntry::PutRecordsRequestEntry() : 
    m_explicitHashKeyHasBeenSet(false)
{
}

PutRecordsRequestEntry::PutRecordsRequestEntry(const JsonValue& jsonValue) : 
    m_explicitHashKeyHasBeenSet(false)
{
  *this = jsonValue;
}

PutRecordsRequestEntry& PutRecordsRequestEntry::operator =(const JsonValue& jsonValue)
{
  m_data = HashingUtils::Base64Decode(jsonValue.GetString("Data"));

  if(jsonValue.ValueExists("ExplicitHashKey"))
  {
    m_explicitHashKey = jsonValue.GetString("ExplicitHashKey");

    m_explicitHashKeyHasBeenSet = true;
  }

  m_partitionKey = jsonValue.GetString("PartitionKey");

  return *this;
}

JsonValue PutRecordsRequestEntry::Jsonize() const
{
  JsonValue payload;

  payload.WithString("Data", HashingUtils::Base64Encode(m_data));
  if(m_explicitHashKeyHasBeenSet)
  {
   payload.WithString("ExplicitHashKey", m_explicitHashKey);

  }

  payload.WithString("PartitionKey", m_partitionKey);

  return std::move(payload);
}