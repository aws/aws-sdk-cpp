﻿/*
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

#include <aws/codecommit/model/PullRequestEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

PullRequestEvent::PullRequestEvent() : 
    m_pullRequestIdHasBeenSet(false),
    m_eventDateHasBeenSet(false),
    m_pullRequestEventType(PullRequestEventType::NOT_SET),
    m_pullRequestEventTypeHasBeenSet(false),
    m_actorArnHasBeenSet(false),
    m_pullRequestCreatedEventMetadataHasBeenSet(false),
    m_pullRequestStatusChangedEventMetadataHasBeenSet(false),
    m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet(false),
    m_pullRequestMergedStateChangedEventMetadataHasBeenSet(false)
{
}

PullRequestEvent::PullRequestEvent(JsonView jsonValue) : 
    m_pullRequestIdHasBeenSet(false),
    m_eventDateHasBeenSet(false),
    m_pullRequestEventType(PullRequestEventType::NOT_SET),
    m_pullRequestEventTypeHasBeenSet(false),
    m_actorArnHasBeenSet(false),
    m_pullRequestCreatedEventMetadataHasBeenSet(false),
    m_pullRequestStatusChangedEventMetadataHasBeenSet(false),
    m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet(false),
    m_pullRequestMergedStateChangedEventMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequestEvent& PullRequestEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pullRequestId"))
  {
    m_pullRequestId = jsonValue.GetString("pullRequestId");

    m_pullRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventDate"))
  {
    m_eventDate = jsonValue.GetDouble("eventDate");

    m_eventDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestEventType"))
  {
    m_pullRequestEventType = PullRequestEventTypeMapper::GetPullRequestEventTypeForName(jsonValue.GetString("pullRequestEventType"));

    m_pullRequestEventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actorArn"))
  {
    m_actorArn = jsonValue.GetString("actorArn");

    m_actorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestCreatedEventMetadata"))
  {
    m_pullRequestCreatedEventMetadata = jsonValue.GetObject("pullRequestCreatedEventMetadata");

    m_pullRequestCreatedEventMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestStatusChangedEventMetadata"))
  {
    m_pullRequestStatusChangedEventMetadata = jsonValue.GetObject("pullRequestStatusChangedEventMetadata");

    m_pullRequestStatusChangedEventMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestSourceReferenceUpdatedEventMetadata"))
  {
    m_pullRequestSourceReferenceUpdatedEventMetadata = jsonValue.GetObject("pullRequestSourceReferenceUpdatedEventMetadata");

    m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestMergedStateChangedEventMetadata"))
  {
    m_pullRequestMergedStateChangedEventMetadata = jsonValue.GetObject("pullRequestMergedStateChangedEventMetadata");

    m_pullRequestMergedStateChangedEventMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue PullRequestEvent::Jsonize() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_eventDateHasBeenSet)
  {
   payload.WithDouble("eventDate", m_eventDate.SecondsWithMSPrecision());
  }

  if(m_pullRequestEventTypeHasBeenSet)
  {
   payload.WithString("pullRequestEventType", PullRequestEventTypeMapper::GetNameForPullRequestEventType(m_pullRequestEventType));
  }

  if(m_actorArnHasBeenSet)
  {
   payload.WithString("actorArn", m_actorArn);

  }

  if(m_pullRequestCreatedEventMetadataHasBeenSet)
  {
   payload.WithObject("pullRequestCreatedEventMetadata", m_pullRequestCreatedEventMetadata.Jsonize());

  }

  if(m_pullRequestStatusChangedEventMetadataHasBeenSet)
  {
   payload.WithObject("pullRequestStatusChangedEventMetadata", m_pullRequestStatusChangedEventMetadata.Jsonize());

  }

  if(m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet)
  {
   payload.WithObject("pullRequestSourceReferenceUpdatedEventMetadata", m_pullRequestSourceReferenceUpdatedEventMetadata.Jsonize());

  }

  if(m_pullRequestMergedStateChangedEventMetadataHasBeenSet)
  {
   payload.WithObject("pullRequestMergedStateChangedEventMetadata", m_pullRequestMergedStateChangedEventMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
