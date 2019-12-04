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

#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLJobCompletionCriteria::AutoMLJobCompletionCriteria() : 
    m_maxCandidates(0),
    m_maxCandidatesHasBeenSet(false),
    m_maxRuntimePerTrainingJobInSeconds(0),
    m_maxRuntimePerTrainingJobInSecondsHasBeenSet(false),
    m_maxAutoMLJobRuntimeInSeconds(0),
    m_maxAutoMLJobRuntimeInSecondsHasBeenSet(false)
{
}

AutoMLJobCompletionCriteria::AutoMLJobCompletionCriteria(JsonView jsonValue) : 
    m_maxCandidates(0),
    m_maxCandidatesHasBeenSet(false),
    m_maxRuntimePerTrainingJobInSeconds(0),
    m_maxRuntimePerTrainingJobInSecondsHasBeenSet(false),
    m_maxAutoMLJobRuntimeInSeconds(0),
    m_maxAutoMLJobRuntimeInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLJobCompletionCriteria& AutoMLJobCompletionCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxCandidates"))
  {
    m_maxCandidates = jsonValue.GetInteger("MaxCandidates");

    m_maxCandidatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRuntimePerTrainingJobInSeconds"))
  {
    m_maxRuntimePerTrainingJobInSeconds = jsonValue.GetInteger("MaxRuntimePerTrainingJobInSeconds");

    m_maxRuntimePerTrainingJobInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxAutoMLJobRuntimeInSeconds"))
  {
    m_maxAutoMLJobRuntimeInSeconds = jsonValue.GetInteger("MaxAutoMLJobRuntimeInSeconds");

    m_maxAutoMLJobRuntimeInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLJobCompletionCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_maxCandidatesHasBeenSet)
  {
   payload.WithInteger("MaxCandidates", m_maxCandidates);

  }

  if(m_maxRuntimePerTrainingJobInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxRuntimePerTrainingJobInSeconds", m_maxRuntimePerTrainingJobInSeconds);

  }

  if(m_maxAutoMLJobRuntimeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxAutoMLJobRuntimeInSeconds", m_maxAutoMLJobRuntimeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
