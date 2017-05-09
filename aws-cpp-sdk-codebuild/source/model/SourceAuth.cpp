/*
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

#include <aws/codebuild/model/SourceAuth.h>
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

SourceAuth::SourceAuth() : 
    m_type(SourceAuthType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

SourceAuth::SourceAuth(const JsonValue& jsonValue) : 
    m_type(SourceAuthType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
  *this = jsonValue;
}

SourceAuth& SourceAuth::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = SourceAuthTypeMapper::GetSourceAuthTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceAuth::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SourceAuthTypeMapper::GetNameForSourceAuthType(m_type));
  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws