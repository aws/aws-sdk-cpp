/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/dynamodbstreams/model/Record.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

Record::Record() : 
    m_eventIDHasBeenSet(false),
    m_eventName(OperationType::NOT_SET),
    m_eventNameHasBeenSet(false),
    m_eventVersionHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_dynamodbHasBeenSet(false)
{
}

Record::Record(const JsonValue& jsonValue) : 
    m_eventIDHasBeenSet(false),
    m_eventName(OperationType::NOT_SET),
    m_eventNameHasBeenSet(false),
    m_eventVersionHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_dynamodbHasBeenSet(false)
{
  *this = jsonValue;
}

Record& Record::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("eventID"))
  {
    m_eventID = jsonValue.GetString("eventID");

    m_eventIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventName"))
  {
    m_eventName = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("eventName"));

    m_eventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventVersion"))
  {
    m_eventVersion = jsonValue.GetString("eventVersion");

    m_eventVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventSource"))
  {
    m_eventSource = jsonValue.GetString("eventSource");

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dynamodb"))
  {
    m_dynamodb = jsonValue.GetObject("dynamodb");

    m_dynamodbHasBeenSet = true;
  }

  return *this;
}

JsonValue Record::Jsonize() const
{
  JsonValue payload;

  if(m_eventIDHasBeenSet)
  {
   payload.WithString("eventID", m_eventID);

  }

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("eventName", OperationTypeMapper::GetNameForOperationType(m_eventName));
  }

  if(m_eventVersionHasBeenSet)
  {
   payload.WithString("eventVersion", m_eventVersion);

  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("eventSource", m_eventSource);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_dynamodbHasBeenSet)
  {
   payload.WithObject("dynamodb", m_dynamodb.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
