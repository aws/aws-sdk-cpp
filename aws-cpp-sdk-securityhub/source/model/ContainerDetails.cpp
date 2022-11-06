/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ContainerDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ContainerDetails::ContainerDetails() : 
    m_containerRuntimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false)
{
}

ContainerDetails::ContainerDetails(JsonView jsonValue) : 
    m_containerRuntimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDetails& ContainerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerRuntime"))
  {
    m_containerRuntime = jsonValue.GetString("ContainerRuntime");

    m_containerRuntimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageName"))
  {
    m_imageName = jsonValue.GetString("ImageName");

    m_imageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchedAt"))
  {
    m_launchedAt = jsonValue.GetString("LaunchedAt");

    m_launchedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeMounts"))
  {
    Aws::Utils::Array<JsonView> volumeMountsJsonList = jsonValue.GetArray("VolumeMounts");
    for(unsigned volumeMountsIndex = 0; volumeMountsIndex < volumeMountsJsonList.GetLength(); ++volumeMountsIndex)
    {
      m_volumeMounts.push_back(volumeMountsJsonList[volumeMountsIndex].AsObject());
    }
    m_volumeMountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Privileged"))
  {
    m_privileged = jsonValue.GetBool("Privileged");

    m_privilegedHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerRuntimeHasBeenSet)
  {
   payload.WithString("ContainerRuntime", m_containerRuntime);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_launchedAtHasBeenSet)
  {
   payload.WithString("LaunchedAt", m_launchedAt);

  }

  if(m_volumeMountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeMountsJsonList(m_volumeMounts.size());
   for(unsigned volumeMountsIndex = 0; volumeMountsIndex < volumeMountsJsonList.GetLength(); ++volumeMountsIndex)
   {
     volumeMountsJsonList[volumeMountsIndex].AsObject(m_volumeMounts[volumeMountsIndex].Jsonize());
   }
   payload.WithArray("VolumeMounts", std::move(volumeMountsJsonList));

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("Privileged", m_privileged);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
