﻿/*
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
    m_buildspecHasBeenSet(false),
    m_authHasBeenSet(false),
    m_reportBuildStatus(false),
    m_reportBuildStatusHasBeenSet(false),
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
    m_buildspecHasBeenSet(false),
    m_authHasBeenSet(false),
    m_reportBuildStatus(false),
    m_reportBuildStatusHasBeenSet(false),
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
