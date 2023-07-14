/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DevEndpointCustomLibraries.h>
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

DevEndpointCustomLibraries::DevEndpointCustomLibraries() : 
    m_extraPythonLibsS3PathHasBeenSet(false),
    m_extraJarsS3PathHasBeenSet(false)
{
}

DevEndpointCustomLibraries::DevEndpointCustomLibraries(JsonView jsonValue) : 
    m_extraPythonLibsS3PathHasBeenSet(false),
    m_extraJarsS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

DevEndpointCustomLibraries& DevEndpointCustomLibraries::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExtraPythonLibsS3Path"))
  {
    m_extraPythonLibsS3Path = jsonValue.GetString("ExtraPythonLibsS3Path");

    m_extraPythonLibsS3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraJarsS3Path"))
  {
    m_extraJarsS3Path = jsonValue.GetString("ExtraJarsS3Path");

    m_extraJarsS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue DevEndpointCustomLibraries::Jsonize() const
{
  JsonValue payload;

  if(m_extraPythonLibsS3PathHasBeenSet)
  {
   payload.WithString("ExtraPythonLibsS3Path", m_extraPythonLibsS3Path);

  }

  if(m_extraJarsS3PathHasBeenSet)
  {
   payload.WithString("ExtraJarsS3Path", m_extraJarsS3Path);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
