/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentRequires.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentRequires::DocumentRequires() : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_requireTypeHasBeenSet(false),
    m_versionNameHasBeenSet(false)
{
}

DocumentRequires::DocumentRequires(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_requireTypeHasBeenSet(false),
    m_versionNameHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentRequires& DocumentRequires::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequireType"))
  {
    m_requireType = jsonValue.GetString("RequireType");

    m_requireTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

    m_versionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentRequires::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_requireTypeHasBeenSet)
  {
   payload.WithString("RequireType", m_requireType);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
