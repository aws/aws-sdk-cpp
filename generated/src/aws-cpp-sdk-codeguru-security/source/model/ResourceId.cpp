/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/ResourceId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

ResourceId::ResourceId() : 
    m_codeArtifactIdHasBeenSet(false)
{
}

ResourceId::ResourceId(JsonView jsonValue) : 
    m_codeArtifactIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceId& ResourceId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codeArtifactId"))
  {
    m_codeArtifactId = jsonValue.GetString("codeArtifactId");

    m_codeArtifactIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceId::Jsonize() const
{
  JsonValue payload;

  if(m_codeArtifactIdHasBeenSet)
  {
   payload.WithString("codeArtifactId", m_codeArtifactId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
