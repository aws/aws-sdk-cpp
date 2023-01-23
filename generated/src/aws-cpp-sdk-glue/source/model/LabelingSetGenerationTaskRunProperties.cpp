/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/LabelingSetGenerationTaskRunProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

LabelingSetGenerationTaskRunProperties::LabelingSetGenerationTaskRunProperties() : 
    m_outputS3PathHasBeenSet(false)
{
}

LabelingSetGenerationTaskRunProperties::LabelingSetGenerationTaskRunProperties(JsonView jsonValue) : 
    m_outputS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingSetGenerationTaskRunProperties& LabelingSetGenerationTaskRunProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputS3Path"))
  {
    m_outputS3Path = jsonValue.GetString("OutputS3Path");

    m_outputS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingSetGenerationTaskRunProperties::Jsonize() const
{
  JsonValue payload;

  if(m_outputS3PathHasBeenSet)
  {
   payload.WithString("OutputS3Path", m_outputS3Path);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
