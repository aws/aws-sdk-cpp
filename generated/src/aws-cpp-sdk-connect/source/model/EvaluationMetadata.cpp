/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EvaluationMetadata::EvaluationMetadata() : 
    m_contactIdHasBeenSet(false),
    m_evaluatorArnHasBeenSet(false),
    m_contactAgentIdHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

EvaluationMetadata::EvaluationMetadata(JsonView jsonValue) : 
    m_contactIdHasBeenSet(false),
    m_evaluatorArnHasBeenSet(false),
    m_contactAgentIdHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationMetadata& EvaluationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactId"))
  {
    m_contactId = jsonValue.GetString("ContactId");

    m_contactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluatorArn"))
  {
    m_evaluatorArn = jsonValue.GetString("EvaluatorArn");

    m_evaluatorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactAgentId"))
  {
    m_contactAgentId = jsonValue.GetString("ContactAgentId");

    m_contactAgentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetObject("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  if(m_evaluatorArnHasBeenSet)
  {
   payload.WithString("EvaluatorArn", m_evaluatorArn);

  }

  if(m_contactAgentIdHasBeenSet)
  {
   payload.WithString("ContactAgentId", m_contactAgentId);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithObject("Score", m_score.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
