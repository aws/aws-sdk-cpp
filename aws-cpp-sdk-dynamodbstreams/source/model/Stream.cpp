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

#include <aws/dynamodbstreams/model/Stream.h>
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

Stream::Stream() : 
    m_streamArnHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_streamLabelHasBeenSet(false)
{
}

Stream::Stream(const JsonValue& jsonValue) : 
    m_streamArnHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_streamLabelHasBeenSet(false)
{
  *this = jsonValue;
}

Stream& Stream::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

    m_streamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamLabel"))
  {
    m_streamLabel = jsonValue.GetString("StreamLabel");

    m_streamLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue Stream::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_streamLabelHasBeenSet)
  {
   payload.WithString("StreamLabel", m_streamLabel);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
