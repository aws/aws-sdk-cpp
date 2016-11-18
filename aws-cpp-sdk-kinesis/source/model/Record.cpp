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
#include <aws/kinesis/model/Record.h>
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

Record::Record() : 
    m_sequenceNumberHasBeenSet(false),
    m_approximateArrivalTimestampHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_partitionKeyHasBeenSet(false)
{
}

Record::Record(const JsonValue& jsonValue) : 
    m_sequenceNumberHasBeenSet(false),
    m_approximateArrivalTimestampHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_partitionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

Record& Record::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SequenceNumber"))
  {
    m_sequenceNumber = jsonValue.GetString("SequenceNumber");

    m_sequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproximateArrivalTimestamp"))
  {
    m_approximateArrivalTimestamp = jsonValue.GetDouble("ApproximateArrivalTimestamp");

    m_approximateArrivalTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("Data"));
    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionKey"))
  {
    m_partitionKey = jsonValue.GetString("PartitionKey");

    m_partitionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue Record::Jsonize() const
{
  JsonValue payload;

  if(m_sequenceNumberHasBeenSet)
  {
   payload.WithString("SequenceNumber", m_sequenceNumber);

  }

  if(m_approximateArrivalTimestampHasBeenSet)
  {
   payload.WithDouble("ApproximateArrivalTimestamp", m_approximateArrivalTimestamp.SecondsWithMSPrecision());
  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", HashingUtils::Base64Encode(m_data));
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