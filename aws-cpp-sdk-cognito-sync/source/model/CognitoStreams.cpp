/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

CognitoStreams::CognitoStreams(JsonView jsonValue) : 
    m_streamNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_streamingStatus(StreamingStatus::NOT_SET),
    m_streamingStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoStreams& CognitoStreams::operator =(JsonView jsonValue)
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
