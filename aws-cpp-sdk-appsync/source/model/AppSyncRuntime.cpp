/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AppSyncRuntime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

AppSyncRuntime::AppSyncRuntime() : 
    m_name(RuntimeName::NOT_SET),
    m_nameHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false)
{
}

AppSyncRuntime::AppSyncRuntime(JsonView jsonValue) : 
    m_name(RuntimeName::NOT_SET),
    m_nameHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AppSyncRuntime& AppSyncRuntime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = RuntimeNameMapper::GetRuntimeNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimeVersion"))
  {
    m_runtimeVersion = jsonValue.GetString("runtimeVersion");

    m_runtimeVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AppSyncRuntime::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", RuntimeNameMapper::GetNameForRuntimeName(m_name));
  }

  if(m_runtimeVersionHasBeenSet)
  {
   payload.WithString("runtimeVersion", m_runtimeVersion);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
