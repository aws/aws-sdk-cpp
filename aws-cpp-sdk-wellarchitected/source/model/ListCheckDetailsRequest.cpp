/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListCheckDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCheckDetailsRequest::ListCheckDetailsRequest() : 
    m_workloadIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_choiceIdHasBeenSet(false)
{
}

Aws::String ListCheckDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_choiceIdHasBeenSet)
  {
   payload.WithString("ChoiceId", m_choiceId);

  }

  return payload.View().WriteReadable();
}




