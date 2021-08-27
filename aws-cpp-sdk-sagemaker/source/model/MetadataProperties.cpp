/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MetadataProperties.h>
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

MetadataProperties::MetadataProperties() : 
    m_commitIdHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_generatedByHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

MetadataProperties::MetadataProperties(JsonView jsonValue) : 
    m_commitIdHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_generatedByHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataProperties& MetadataProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommitId"))
  {
    m_commitId = jsonValue.GetString("CommitId");

    m_commitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Repository"))
  {
    m_repository = jsonValue.GetString("Repository");

    m_repositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneratedBy"))
  {
    m_generatedBy = jsonValue.GetString("GeneratedBy");

    m_generatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectId"))
  {
    m_projectId = jsonValue.GetString("ProjectId");

    m_projectIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataProperties::Jsonize() const
{
  JsonValue payload;

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("CommitId", m_commitId);

  }

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("Repository", m_repository);

  }

  if(m_generatedByHasBeenSet)
  {
   payload.WithString("GeneratedBy", m_generatedBy);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("ProjectId", m_projectId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
