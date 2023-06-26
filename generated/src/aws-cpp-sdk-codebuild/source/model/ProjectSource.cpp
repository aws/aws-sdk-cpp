/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectSource.h>
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

ProjectSource::ProjectSource() : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_gitCloneDepth(0),
    m_gitCloneDepthHasBeenSet(false),
    m_gitSubmodulesConfigHasBeenSet(false),
    m_buildspecHasBeenSet(false),
    m_authHasBeenSet(false),
    m_reportBuildStatus(false),
    m_reportBuildStatusHasBeenSet(false),
    m_buildStatusConfigHasBeenSet(false),
    m_insecureSsl(false),
    m_insecureSslHasBeenSet(false),
    m_sourceIdentifierHasBeenSet(false)
{
}

ProjectSource::ProjectSource(JsonView jsonValue) : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_gitCloneDepth(0),
    m_gitCloneDepthHasBeenSet(false),
    m_gitSubmodulesConfigHasBeenSet(false),
    m_buildspecHasBeenSet(false),
    m_authHasBeenSet(false),
    m_reportBuildStatus(false),
    m_reportBuildStatusHasBeenSet(false),
    m_buildStatusConfigHasBeenSet(false),
    m_insecureSsl(false),
    m_insecureSslHasBeenSet(false),
    m_sourceIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectSource& ProjectSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gitCloneDepth"))
  {
    m_gitCloneDepth = jsonValue.GetInteger("gitCloneDepth");

    m_gitCloneDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gitSubmodulesConfig"))
  {
    m_gitSubmodulesConfig = jsonValue.GetObject("gitSubmodulesConfig");

    m_gitSubmodulesConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildspec"))
  {
    m_buildspec = jsonValue.GetString("buildspec");

    m_buildspecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("auth"))
  {
    m_auth = jsonValue.GetObject("auth");

    m_authHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reportBuildStatus"))
  {
    m_reportBuildStatus = jsonValue.GetBool("reportBuildStatus");

    m_reportBuildStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildStatusConfig"))
  {
    m_buildStatusConfig = jsonValue.GetObject("buildStatusConfig");

    m_buildStatusConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("insecureSsl"))
  {
    m_insecureSsl = jsonValue.GetBool("insecureSsl");

    m_insecureSslHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceIdentifier"))
  {
    m_sourceIdentifier = jsonValue.GetString("sourceIdentifier");

    m_sourceIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectSource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SourceTypeMapper::GetNameForSourceType(m_type));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_gitCloneDepthHasBeenSet)
  {
   payload.WithInteger("gitCloneDepth", m_gitCloneDepth);

  }

  if(m_gitSubmodulesConfigHasBeenSet)
  {
   payload.WithObject("gitSubmodulesConfig", m_gitSubmodulesConfig.Jsonize());

  }

  if(m_buildspecHasBeenSet)
  {
   payload.WithString("buildspec", m_buildspec);

  }

  if(m_authHasBeenSet)
  {
   payload.WithObject("auth", m_auth.Jsonize());

  }

  if(m_reportBuildStatusHasBeenSet)
  {
   payload.WithBool("reportBuildStatus", m_reportBuildStatus);

  }

  if(m_buildStatusConfigHasBeenSet)
  {
   payload.WithObject("buildStatusConfig", m_buildStatusConfig.Jsonize());

  }

  if(m_insecureSslHasBeenSet)
  {
   payload.WithBool("insecureSsl", m_insecureSsl);

  }

  if(m_sourceIdentifierHasBeenSet)
  {
   payload.WithString("sourceIdentifier", m_sourceIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
