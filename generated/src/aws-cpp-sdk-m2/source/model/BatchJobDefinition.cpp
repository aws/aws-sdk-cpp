/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/BatchJobDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

BatchJobDefinition::BatchJobDefinition() : 
    m_fileBatchJobDefinitionHasBeenSet(false),
    m_scriptBatchJobDefinitionHasBeenSet(false)
{
}

BatchJobDefinition::BatchJobDefinition(JsonView jsonValue) : 
    m_fileBatchJobDefinitionHasBeenSet(false),
    m_scriptBatchJobDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

BatchJobDefinition& BatchJobDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileBatchJobDefinition"))
  {
    m_fileBatchJobDefinition = jsonValue.GetObject("fileBatchJobDefinition");

    m_fileBatchJobDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scriptBatchJobDefinition"))
  {
    m_scriptBatchJobDefinition = jsonValue.GetObject("scriptBatchJobDefinition");

    m_scriptBatchJobDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchJobDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_fileBatchJobDefinitionHasBeenSet)
  {
   payload.WithObject("fileBatchJobDefinition", m_fileBatchJobDefinition.Jsonize());

  }

  if(m_scriptBatchJobDefinitionHasBeenSet)
  {
   payload.WithObject("scriptBatchJobDefinition", m_scriptBatchJobDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
