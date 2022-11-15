/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/DomainEntryPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

DomainEntryPoint::DomainEntryPoint() : 
    m_repositoryNameHasBeenSet(false),
    m_externalConnectionNameHasBeenSet(false)
{
}

DomainEntryPoint::DomainEntryPoint(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_externalConnectionNameHasBeenSet(false)
{
  *this = jsonValue;
}

DomainEntryPoint& DomainEntryPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalConnectionName"))
  {
    m_externalConnectionName = jsonValue.GetString("externalConnectionName");

    m_externalConnectionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainEntryPoint::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_externalConnectionNameHasBeenSet)
  {
   payload.WithString("externalConnectionName", m_externalConnectionName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
