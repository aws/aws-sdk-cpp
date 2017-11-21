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

PullRequestStatusChangedEventMetadata::PullRequestStatusChangedEventMetadata(const JsonValue& jsonValue) : 
    m_pullRequestStatus(PullRequestStatusEnum::NOT_SET),
    m_pullRequestStatusHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequestStatusChangedEventMetadata& PullRequestStatusChangedEventMetadata::operator =(const JsonValue& jsonValue)
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
