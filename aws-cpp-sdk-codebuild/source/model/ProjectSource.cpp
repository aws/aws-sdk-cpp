﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_buildspecHasBeenSet(false),
    m_authHasBeenSet(false)
{
}

ProjectSource::ProjectSource(const JsonValue& jsonValue) : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_buildspecHasBeenSet(false),
    m_authHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectSource& ProjectSource::operator =(const JsonValue& jsonValue)
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

  if(m_buildspecHasBeenSet)
  {
   payload.WithString("buildspec", m_buildspec);

  }

  if(m_authHasBeenSet)
  {
   payload.WithObject("auth", m_auth.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws