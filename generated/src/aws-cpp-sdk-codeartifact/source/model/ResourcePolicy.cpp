/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ResourcePolicy.h>
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

ResourcePolicy::ResourcePolicy() : 
    m_resourceArnHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_documentHasBeenSet(false)
{
}

ResourcePolicy::ResourcePolicy(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_documentHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicy& ResourcePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetString("document");

    m_documentHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  if(m_documentHasBeenSet)
  {
   payload.WithString("document", m_document);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
