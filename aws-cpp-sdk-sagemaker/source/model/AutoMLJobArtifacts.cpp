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

#include <aws/sagemaker/model/AutoMLJobArtifacts.h>
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

AutoMLJobArtifacts::AutoMLJobArtifacts() : 
    m_candidateDefinitionNotebookLocationHasBeenSet(false),
    m_dataExplorationNotebookLocationHasBeenSet(false)
{
}

AutoMLJobArtifacts::AutoMLJobArtifacts(JsonView jsonValue) : 
    m_candidateDefinitionNotebookLocationHasBeenSet(false),
    m_dataExplorationNotebookLocationHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLJobArtifacts& AutoMLJobArtifacts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CandidateDefinitionNotebookLocation"))
  {
    m_candidateDefinitionNotebookLocation = jsonValue.GetString("CandidateDefinitionNotebookLocation");

    m_candidateDefinitionNotebookLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataExplorationNotebookLocation"))
  {
    m_dataExplorationNotebookLocation = jsonValue.GetString("DataExplorationNotebookLocation");

    m_dataExplorationNotebookLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLJobArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_candidateDefinitionNotebookLocationHasBeenSet)
  {
   payload.WithString("CandidateDefinitionNotebookLocation", m_candidateDefinitionNotebookLocation);

  }

  if(m_dataExplorationNotebookLocationHasBeenSet)
  {
   payload.WithString("DataExplorationNotebookLocation", m_dataExplorationNotebookLocation);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
