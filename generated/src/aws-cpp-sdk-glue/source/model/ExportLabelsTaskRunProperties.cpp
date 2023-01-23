/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ExportLabelsTaskRunProperties.h>
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

ExportLabelsTaskRunProperties::ExportLabelsTaskRunProperties() : 
    m_outputS3PathHasBeenSet(false)
{
}

ExportLabelsTaskRunProperties::ExportLabelsTaskRunProperties(JsonView jsonValue) : 
    m_outputS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

ExportLabelsTaskRunProperties& ExportLabelsTaskRunProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputS3Path"))
  {
    m_outputS3Path = jsonValue.GetString("OutputS3Path");

    m_outputS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportLabelsTaskRunProperties::Jsonize() const
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
