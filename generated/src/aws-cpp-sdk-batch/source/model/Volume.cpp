﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/Volume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

Volume::Volume() : 
    m_hostHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_efsVolumeConfigurationHasBeenSet(false)
{
}

Volume::Volume(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_efsVolumeConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Volume& Volume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("host"))
  {
    m_host = jsonValue.GetObject("host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("efsVolumeConfiguration"))
  {
    m_efsVolumeConfiguration = jsonValue.GetObject("efsVolumeConfiguration");

    m_efsVolumeConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Volume::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithObject("host", m_host.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_efsVolumeConfigurationHasBeenSet)
  {
   payload.WithObject("efsVolumeConfiguration", m_efsVolumeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
