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
#include <aws/cognito-sync/model/CognitoStreams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

CognitoStreams::CognitoStreams() : 
    m_streamNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_streamingStatus(StreamingStatus::NOT_SET),
    m_streamingStatusHasBeenSet(false)
{
}

CognitoStreams::CognitoStreams(const JsonValue& jsonValue) : 
    m_streamNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_streamingStatus(StreamingStatus::NOT_SET),
    m_streamingStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoStreams& CognitoStreams::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamingStatus"))
  {
    m_streamingStatus = StreamingStatusMapper::GetStreamingStatusForName(jsonValue.GetString("StreamingStatus"));

    m_streamingStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoStreams::Jsonize() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_streamingStatusHasBeenSet)
  {
   payload.WithString("StreamingStatus", StreamingStatusMapper::GetNameForStreamingStatus(m_streamingStatus));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws