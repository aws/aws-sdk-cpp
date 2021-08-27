/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
