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
