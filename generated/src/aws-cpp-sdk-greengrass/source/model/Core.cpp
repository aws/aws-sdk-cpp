/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/Core.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

Core::Core() : 
    m_certificateArnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_syncShadow(false),
    m_syncShadowHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
}

Core::Core(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_syncShadow(false),
    m_syncShadowHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
  *this = jsonValue;
}

Core& Core::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncShadow"))
  {
    m_syncShadow = jsonValue.GetBool("SyncShadow");

    m_syncShadowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThingArn"))
  {
    m_thingArn = jsonValue.GetString("ThingArn");

    m_thingArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Core::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_syncShadowHasBeenSet)
  {
   payload.WithBool("SyncShadow", m_syncShadow);

  }

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("ThingArn", m_thingArn);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
