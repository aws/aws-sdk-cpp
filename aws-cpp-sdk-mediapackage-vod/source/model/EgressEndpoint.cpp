/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/EgressEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

EgressEndpoint::EgressEndpoint() : 
    m_packagingConfigurationIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

EgressEndpoint::EgressEndpoint(JsonView jsonValue) : 
    m_packagingConfigurationIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

EgressEndpoint& EgressEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("packagingConfigurationId"))
  {
    m_packagingConfigurationId = jsonValue.GetString("packagingConfigurationId");

    m_packagingConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue EgressEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_packagingConfigurationIdHasBeenSet)
  {
   payload.WithString("packagingConfigurationId", m_packagingConfigurationId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
