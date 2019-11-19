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

#include <aws/iot/model/SigV4Authorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SigV4Authorization::SigV4Authorization() : 
    m_signingRegionHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

SigV4Authorization::SigV4Authorization(JsonView jsonValue) : 
    m_signingRegionHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

SigV4Authorization& SigV4Authorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signingRegion"))
  {
    m_signingRegion = jsonValue.GetString("signingRegion");

    m_signingRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SigV4Authorization::Jsonize() const
{
  JsonValue payload;

  if(m_signingRegionHasBeenSet)
  {
   payload.WithString("signingRegion", m_signingRegion);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
