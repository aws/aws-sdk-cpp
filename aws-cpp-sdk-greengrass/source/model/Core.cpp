/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Core::Core(const JsonValue& jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_syncShadow(false),
    m_syncShadowHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
  *this = jsonValue;
}

Core& Core::operator =(const JsonValue& jsonValue)
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
