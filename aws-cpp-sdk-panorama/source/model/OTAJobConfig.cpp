/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/OTAJobConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

OTAJobConfig::OTAJobConfig() : 
    m_allowMajorVersionUpdate(false),
    m_allowMajorVersionUpdateHasBeenSet(false),
    m_imageVersionHasBeenSet(false)
{
}

OTAJobConfig::OTAJobConfig(JsonView jsonValue) : 
    m_allowMajorVersionUpdate(false),
    m_allowMajorVersionUpdateHasBeenSet(false),
    m_imageVersionHasBeenSet(false)
{
  *this = jsonValue;
}

OTAJobConfig& OTAJobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowMajorVersionUpdate"))
  {
    m_allowMajorVersionUpdate = jsonValue.GetBool("AllowMajorVersionUpdate");

    m_allowMajorVersionUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageVersion"))
  {
    m_imageVersion = jsonValue.GetString("ImageVersion");

    m_imageVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue OTAJobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_allowMajorVersionUpdateHasBeenSet)
  {
   payload.WithBool("AllowMajorVersionUpdate", m_allowMajorVersionUpdate);

  }

  if(m_imageVersionHasBeenSet)
  {
   payload.WithString("ImageVersion", m_imageVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
