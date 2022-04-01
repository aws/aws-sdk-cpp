/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/CodeArtifacts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

CodeArtifacts::CodeArtifacts() : 
    m_sourceCodeArtifactsObjectKeyHasBeenSet(false),
    m_buildArtifactsObjectKeyHasBeenSet(false)
{
}

CodeArtifacts::CodeArtifacts(JsonView jsonValue) : 
    m_sourceCodeArtifactsObjectKeyHasBeenSet(false),
    m_buildArtifactsObjectKeyHasBeenSet(false)
{
  *this = jsonValue;
}

CodeArtifacts& CodeArtifacts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceCodeArtifactsObjectKey"))
  {
    m_sourceCodeArtifactsObjectKey = jsonValue.GetString("SourceCodeArtifactsObjectKey");

    m_sourceCodeArtifactsObjectKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BuildArtifactsObjectKey"))
  {
    m_buildArtifactsObjectKey = jsonValue.GetString("BuildArtifactsObjectKey");

    m_buildArtifactsObjectKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_sourceCodeArtifactsObjectKeyHasBeenSet)
  {
   payload.WithString("SourceCodeArtifactsObjectKey", m_sourceCodeArtifactsObjectKey);

  }

  if(m_buildArtifactsObjectKeyHasBeenSet)
  {
   payload.WithString("BuildArtifactsObjectKey", m_buildArtifactsObjectKey);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
