/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectSourceVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ProjectSourceVersion::ProjectSourceVersion() : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

ProjectSourceVersion::ProjectSourceVersion(JsonView jsonValue) : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectSourceVersion& ProjectSourceVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceIdentifier"))
  {
    m_sourceIdentifier = jsonValue.GetString("sourceIdentifier");

    m_sourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectSourceVersion::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIdentifierHasBeenSet)
  {
   payload.WithString("sourceIdentifier", m_sourceIdentifier);

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
