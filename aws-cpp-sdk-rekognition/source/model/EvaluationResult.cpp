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

#include <aws/rekognition/model/EvaluationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

EvaluationResult::EvaluationResult() : 
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false),
    m_summaryHasBeenSet(false)
{
}

EvaluationResult::EvaluationResult(JsonView jsonValue) : 
    m_f1Score(0.0),
    m_f1ScoreHasBeenSet(false),
    m_summaryHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResult& EvaluationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("F1Score"))
  {
    m_f1Score = jsonValue.GetDouble("F1Score");

    m_f1ScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetObject("Summary");

    m_summaryHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationResult::Jsonize() const
{
  JsonValue payload;

  if(m_f1ScoreHasBeenSet)
  {
   payload.WithDouble("F1Score", m_f1Score);

  }

  if(m_summaryHasBeenSet)
  {
   payload.WithObject("Summary", m_summary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
