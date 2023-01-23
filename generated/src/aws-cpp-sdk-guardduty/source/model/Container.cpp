/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Container.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Container::Container() : 
    m_containerRuntimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePrefixHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_securityContextHasBeenSet(false)
{
}

Container::Container(JsonView jsonValue) : 
    m_containerRuntimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePrefixHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_securityContextHasBeenSet(false)
{
  *this = jsonValue;
}

Container& Container::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerRuntime"))
  {
    m_containerRuntime = jsonValue.GetString("containerRuntime");

    m_containerRuntimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePrefix"))
  {
    m_imagePrefix = jsonValue.GetString("imagePrefix");

    m_imagePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeMounts"))
  {
    Aws::Utils::Array<JsonView> volumeMountsJsonList = jsonValue.GetArray("volumeMounts");
    for(unsigned volumeMountsIndex = 0; volumeMountsIndex < volumeMountsJsonList.GetLength(); ++volumeMountsIndex)
    {
      m_volumeMounts.push_back(volumeMountsJsonList[volumeMountsIndex].AsObject());
    }
    m_volumeMountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityContext"))
  {
    m_securityContext = jsonValue.GetObject("securityContext");

    m_securityContextHasBeenSet = true;
  }

  return *this;
}

JsonValue Container::Jsonize() const
{
  JsonValue payload;

  if(m_containerRuntimeHasBeenSet)
  {
   payload.WithString("containerRuntime", m_containerRuntime);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_imagePrefixHasBeenSet)
  {
   payload.WithString("imagePrefix", m_imagePrefix);

  }

  if(m_volumeMountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeMountsJsonList(m_volumeMounts.size());
   for(unsigned volumeMountsIndex = 0; volumeMountsIndex < volumeMountsJsonList.GetLength(); ++volumeMountsIndex)
   {
     volumeMountsJsonList[volumeMountsIndex].AsObject(m_volumeMounts[volumeMountsIndex].Jsonize());
   }
   payload.WithArray("volumeMounts", std::move(volumeMountsJsonList));

  }

  if(m_securityContextHasBeenSet)
  {
   payload.WithObject("securityContext", m_securityContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
