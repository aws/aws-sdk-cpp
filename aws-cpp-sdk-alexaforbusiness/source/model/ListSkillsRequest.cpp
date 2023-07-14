/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListSkillsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListSkillsRequest::ListSkillsRequest() : 
    m_skillGroupArnHasBeenSet(false),
    m_enablementType(EnablementTypeFilter::NOT_SET),
    m_enablementTypeHasBeenSet(false),
    m_skillType(SkillTypeFilter::NOT_SET),
    m_skillTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListSkillsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_skillGroupArnHasBeenSet)
  {
   payload.WithString("SkillGroupArn", m_skillGroupArn);

  }

  if(m_enablementTypeHasBeenSet)
  {
   payload.WithString("EnablementType", EnablementTypeFilterMapper::GetNameForEnablementTypeFilter(m_enablementType));
  }

  if(m_skillTypeHasBeenSet)
  {
   payload.WithString("SkillType", SkillTypeFilterMapper::GetNameForSkillTypeFilter(m_skillType));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSkillsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.ListSkills"));
  return headers;

}




