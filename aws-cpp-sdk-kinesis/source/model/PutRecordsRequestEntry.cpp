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
#include <aws/kinesis/model/PutRecordsRequestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kinesis
{
namespace Model
{

PutRecordsRequestEntry::PutRecordsRequestEntry() : 
    m_dataHasBeenSet(false),
    m_explicitHashKeyHasBeenSet(false),
    m_partitionKeyHasBeenSet(false)
{
}

PutRecordsRequestEntry::PutRecordsRequestEntry(const JsonValue& jsonValue) : 
    m_dataHasBeenSet(false),
    m_explicitHashKeyHasBeenSet(false),
    m_partitionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

PutRecordsRequestEntry& PutRecordsRequestEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("Data"));
    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExplicitHashKey"))
  {
    m_explicitHashKey = jsonValue.GetString("ExplicitHashKey");

    m_explicitHashKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionKey"))
  {
    m_partitionKey = jsonValue.GetString("PartitionKey");

    m_partitionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue PutRecordsRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", HashingUtils::Base64Encode(m_data));
  }

  if(m_explicitHashKeyHasBeenSet)
  {
   payload.WithString("ExplicitHashKey", m_explicitHashKey);

  }

  if(m_partitionKeyHasBeenSet)
  {
   payload.WithString("PartitionKey", m_partitionKey);

  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws