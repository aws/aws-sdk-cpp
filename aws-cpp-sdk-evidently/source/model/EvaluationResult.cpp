/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/EvaluationResult.h>
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

EvaluationResult::EvaluationResult() : 
    m_detailsHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_variationHasBeenSet(false)
{
}

EvaluationResult::EvaluationResult(JsonView jsonValue) : 
    m_detailsHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_variationHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResult& EvaluationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("details"))
  {
    m_details = jsonValue.GetString("details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("feature"))
  {
    m_feature = jsonValue.GetString("feature");

    m_featureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("project"))
  {
    m_project = jsonValue.GetString("project");

    m_projectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variation"))
  {
    m_variation = jsonValue.GetString("variation");

    m_variationHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationResult::Jsonize() const
{
  JsonValue payload;

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("feature", m_feature);

  }

  if(m_projectHasBeenSet)
  {
   payload.WithString("project", m_project);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_variationHasBeenSet)
  {
   payload.WithString("variation", m_variation);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
