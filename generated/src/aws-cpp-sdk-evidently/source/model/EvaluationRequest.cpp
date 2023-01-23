/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/EvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

EvaluationRequest::EvaluationRequest() : 
    m_entityIdHasBeenSet(false),
    m_evaluationContextHasBeenSet(false),
    m_featureHasBeenSet(false)
{
}

EvaluationRequest::EvaluationRequest(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false),
    m_evaluationContextHasBeenSet(false),
    m_featureHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationRequest& EvaluationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationContext"))
  {
    m_evaluationContext = jsonValue.GetString("evaluationContext");

    m_evaluationContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("feature"))
  {
    m_feature = jsonValue.GetString("feature");

    m_featureHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_evaluationContextHasBeenSet)
  {
   payload.WithString("evaluationContext", m_evaluationContext);

  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("feature", m_feature);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
