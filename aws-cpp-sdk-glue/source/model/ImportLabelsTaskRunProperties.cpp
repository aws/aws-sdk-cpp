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

#include <aws/glue/model/ImportLabelsTaskRunProperties.h>
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

ImportLabelsTaskRunProperties::ImportLabelsTaskRunProperties() : 
    m_inputS3PathHasBeenSet(false),
    m_replace(false),
    m_replaceHasBeenSet(false)
{
}

ImportLabelsTaskRunProperties::ImportLabelsTaskRunProperties(JsonView jsonValue) : 
    m_inputS3PathHasBeenSet(false),
    m_replace(false),
    m_replaceHasBeenSet(false)
{
  *this = jsonValue;
}

ImportLabelsTaskRunProperties& ImportLabelsTaskRunProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputS3Path"))
  {
    m_inputS3Path = jsonValue.GetString("InputS3Path");

    m_inputS3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Replace"))
  {
    m_replace = jsonValue.GetBool("Replace");

    m_replaceHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportLabelsTaskRunProperties::Jsonize() const
{
  JsonValue payload;

  if(m_inputS3PathHasBeenSet)
  {
   payload.WithString("InputS3Path", m_inputS3Path);

  }

  if(m_replaceHasBeenSet)
  {
   payload.WithBool("Replace", m_replace);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
