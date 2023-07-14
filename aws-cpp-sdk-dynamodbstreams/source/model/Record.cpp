/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_dynamodbHasBeenSet(false),
    m_userIdentityHasBeenSet(false)
{
}

Record::Record(JsonView jsonValue) : 
    m_eventIDHasBeenSet(false),
    m_eventName(OperationType::NOT_SET),
    m_eventNameHasBeenSet(false),
    m_eventVersionHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_dynamodbHasBeenSet(false),
    m_userIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

Record& Record::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("userIdentity"))
  {
    m_userIdentity = jsonValue.GetObject("userIdentity");

    m_userIdentityHasBeenSet = true;
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

  if(m_userIdentityHasBeenSet)
  {
   payload.WithObject("userIdentity", m_userIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
