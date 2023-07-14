/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_pullRequestMergedStateChangedEventMetadataHasBeenSet(false),
    m_approvalRuleEventMetadataHasBeenSet(false),
    m_approvalStateChangedEventMetadataHasBeenSet(false),
    m_approvalRuleOverriddenEventMetadataHasBeenSet(false)
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
    m_pullRequestMergedStateChangedEventMetadataHasBeenSet(false),
    m_approvalRuleEventMetadataHasBeenSet(false),
    m_approvalStateChangedEventMetadataHasBeenSet(false),
    m_approvalRuleOverriddenEventMetadataHasBeenSet(false)
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

  if(jsonValue.ValueExists("approvalRuleEventMetadata"))
  {
    m_approvalRuleEventMetadata = jsonValue.GetObject("approvalRuleEventMetadata");

    m_approvalRuleEventMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalStateChangedEventMetadata"))
  {
    m_approvalStateChangedEventMetadata = jsonValue.GetObject("approvalStateChangedEventMetadata");

    m_approvalStateChangedEventMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleOverriddenEventMetadata"))
  {
    m_approvalRuleOverriddenEventMetadata = jsonValue.GetObject("approvalRuleOverriddenEventMetadata");

    m_approvalRuleOverriddenEventMetadataHasBeenSet = true;
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

  if(m_approvalRuleEventMetadataHasBeenSet)
  {
   payload.WithObject("approvalRuleEventMetadata", m_approvalRuleEventMetadata.Jsonize());

  }

  if(m_approvalStateChangedEventMetadataHasBeenSet)
  {
   payload.WithObject("approvalStateChangedEventMetadata", m_approvalStateChangedEventMetadata.Jsonize());

  }

  if(m_approvalRuleOverriddenEventMetadataHasBeenSet)
  {
   payload.WithObject("approvalRuleOverriddenEventMetadata", m_approvalRuleOverriddenEventMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
