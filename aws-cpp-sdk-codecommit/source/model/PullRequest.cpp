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

#include <aws/codecommit/model/PullRequest.h>
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

PullRequest::PullRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastActivityDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_pullRequestStatus(PullRequestStatusEnum::NOT_SET),
    m_pullRequestStatusHasBeenSet(false),
    m_authorArnHasBeenSet(false),
    m_pullRequestTargetsHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

PullRequest::PullRequest(JsonView jsonValue) : 
    m_pullRequestIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastActivityDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_pullRequestStatus(PullRequestStatusEnum::NOT_SET),
    m_pullRequestStatusHasBeenSet(false),
    m_authorArnHasBeenSet(false),
    m_pullRequestTargetsHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequest& PullRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pullRequestId"))
  {
    m_pullRequestId = jsonValue.GetString("pullRequestId");

    m_pullRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastActivityDate"))
  {
    m_lastActivityDate = jsonValue.GetDouble("lastActivityDate");

    m_lastActivityDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestStatus"))
  {
    m_pullRequestStatus = PullRequestStatusEnumMapper::GetPullRequestStatusEnumForName(jsonValue.GetString("pullRequestStatus"));

    m_pullRequestStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorArn"))
  {
    m_authorArn = jsonValue.GetString("authorArn");

    m_authorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestTargets"))
  {
    Array<JsonView> pullRequestTargetsJsonList = jsonValue.GetArray("pullRequestTargets");
    for(unsigned pullRequestTargetsIndex = 0; pullRequestTargetsIndex < pullRequestTargetsJsonList.GetLength(); ++pullRequestTargetsIndex)
    {
      m_pullRequestTargets.push_back(pullRequestTargetsJsonList[pullRequestTargetsIndex].AsObject());
    }
    m_pullRequestTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

    m_clientRequestTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue PullRequest::Jsonize() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastActivityDateHasBeenSet)
  {
   payload.WithDouble("lastActivityDate", m_lastActivityDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_pullRequestStatusHasBeenSet)
  {
   payload.WithString("pullRequestStatus", PullRequestStatusEnumMapper::GetNameForPullRequestStatusEnum(m_pullRequestStatus));
  }

  if(m_authorArnHasBeenSet)
  {
   payload.WithString("authorArn", m_authorArn);

  }

  if(m_pullRequestTargetsHasBeenSet)
  {
   Array<JsonValue> pullRequestTargetsJsonList(m_pullRequestTargets.size());
   for(unsigned pullRequestTargetsIndex = 0; pullRequestTargetsIndex < pullRequestTargetsJsonList.GetLength(); ++pullRequestTargetsIndex)
   {
     pullRequestTargetsJsonList[pullRequestTargetsIndex].AsObject(m_pullRequestTargets[pullRequestTargetsIndex].Jsonize());
   }
   payload.WithArray("pullRequestTargets", std::move(pullRequestTargetsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
