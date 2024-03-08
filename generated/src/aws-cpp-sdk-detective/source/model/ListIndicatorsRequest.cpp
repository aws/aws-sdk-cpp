/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/ListIndicatorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListIndicatorsRequest::ListIndicatorsRequest() : 
    m_graphArnHasBeenSet(false),
    m_investigationIdHasBeenSet(false),
    m_indicatorType(IndicatorType::NOT_SET),
    m_indicatorTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListIndicatorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_investigationIdHasBeenSet)
  {
   payload.WithString("InvestigationId", m_investigationId);

  }

  if(m_indicatorTypeHasBeenSet)
  {
   payload.WithString("IndicatorType", IndicatorTypeMapper::GetNameForIndicatorType(m_indicatorType));
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




