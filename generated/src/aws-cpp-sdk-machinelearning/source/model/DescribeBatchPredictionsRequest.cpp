/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/DescribeBatchPredictionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBatchPredictionsRequest::DescribeBatchPredictionsRequest() : 
    m_filterVariable(BatchPredictionFilterVariable::NOT_SET),
    m_filterVariableHasBeenSet(false),
    m_eQHasBeenSet(false),
    m_gTHasBeenSet(false),
    m_lTHasBeenSet(false),
    m_gEHasBeenSet(false),
    m_lEHasBeenSet(false),
    m_nEHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeBatchPredictionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterVariableHasBeenSet)
  {
   payload.WithString("FilterVariable", BatchPredictionFilterVariableMapper::GetNameForBatchPredictionFilterVariable(m_filterVariable));
  }

  if(m_eQHasBeenSet)
  {
   payload.WithString("EQ", m_eQ);

  }

  if(m_gTHasBeenSet)
  {
   payload.WithString("GT", m_gT);

  }

  if(m_lTHasBeenSet)
  {
   payload.WithString("LT", m_lT);

  }

  if(m_gEHasBeenSet)
  {
   payload.WithString("GE", m_gE);

  }

  if(m_lEHasBeenSet)
  {
   payload.WithString("LE", m_lE);

  }

  if(m_nEHasBeenSet)
  {
   payload.WithString("NE", m_nE);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBatchPredictionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.DescribeBatchPredictions"));
  return headers;

}




