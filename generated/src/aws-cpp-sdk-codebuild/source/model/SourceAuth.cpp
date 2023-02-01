/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

SourceAuth::SourceAuth(JsonView jsonValue) : 
    m_type(SourceAuthType::NOT_SET),
    m_typeHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
  *this = jsonValue;
}

SourceAuth& SourceAuth::operator =(JsonView jsonValue)
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
