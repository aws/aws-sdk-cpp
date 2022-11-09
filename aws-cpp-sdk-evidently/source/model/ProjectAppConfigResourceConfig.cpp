/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ProjectAppConfigResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ProjectAppConfigResourceConfig::ProjectAppConfigResourceConfig() : 
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

ProjectAppConfigResourceConfig::ProjectAppConfigResourceConfig(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectAppConfigResourceConfig& ProjectAppConfigResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectAppConfigResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
