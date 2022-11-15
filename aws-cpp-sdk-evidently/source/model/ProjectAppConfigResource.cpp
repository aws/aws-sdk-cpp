/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ProjectAppConfigResource.h>
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

ProjectAppConfigResource::ProjectAppConfigResource() : 
    m_applicationIdHasBeenSet(false),
    m_configurationProfileIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

ProjectAppConfigResource::ProjectAppConfigResource(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_configurationProfileIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectAppConfigResource& ProjectAppConfigResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationProfileId"))
  {
    m_configurationProfileId = jsonValue.GetString("configurationProfileId");

    m_configurationProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectAppConfigResource::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_configurationProfileIdHasBeenSet)
  {
   payload.WithString("configurationProfileId", m_configurationProfileId);

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
