/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
