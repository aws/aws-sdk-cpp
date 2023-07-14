/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/PullRequestStatusChangedEventMetadata.h>
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

PullRequestStatusChangedEventMetadata::PullRequestStatusChangedEventMetadata() : 
    m_pullRequestStatus(PullRequestStatusEnum::NOT_SET),
    m_pullRequestStatusHasBeenSet(false)
{
}

PullRequestStatusChangedEventMetadata::PullRequestStatusChangedEventMetadata(JsonView jsonValue) : 
    m_pullRequestStatus(PullRequestStatusEnum::NOT_SET),
    m_pullRequestStatusHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequestStatusChangedEventMetadata& PullRequestStatusChangedEventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pullRequestStatus"))
  {
    m_pullRequestStatus = PullRequestStatusEnumMapper::GetPullRequestStatusEnumForName(jsonValue.GetString("pullRequestStatus"));

    m_pullRequestStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue PullRequestStatusChangedEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_pullRequestStatusHasBeenSet)
  {
   payload.WithString("pullRequestStatus", PullRequestStatusEnumMapper::GetNameForPullRequestStatusEnum(m_pullRequestStatus));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
