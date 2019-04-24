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

#include <aws/mediatailor/model/DashConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

DashConfiguration::DashConfiguration() : 
    m_manifestEndpointPrefixHasBeenSet(false),
    m_mpdLocationHasBeenSet(false),
    m_originManifestType(OriginManifestType::NOT_SET),
    m_originManifestTypeHasBeenSet(false)
{
}

DashConfiguration::DashConfiguration(JsonView jsonValue) : 
    m_manifestEndpointPrefixHasBeenSet(false),
    m_mpdLocationHasBeenSet(false),
    m_originManifestType(OriginManifestType::NOT_SET),
    m_originManifestTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DashConfiguration& DashConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestEndpointPrefix"))
  {
    m_manifestEndpointPrefix = jsonValue.GetString("ManifestEndpointPrefix");

    m_manifestEndpointPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MpdLocation"))
  {
    m_mpdLocation = jsonValue.GetString("MpdLocation");

    m_mpdLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginManifestType"))
  {
    m_originManifestType = OriginManifestTypeMapper::GetOriginManifestTypeForName(jsonValue.GetString("OriginManifestType"));

    m_originManifestTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DashConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestEndpointPrefixHasBeenSet)
  {
   payload.WithString("ManifestEndpointPrefix", m_manifestEndpointPrefix);

  }

  if(m_mpdLocationHasBeenSet)
  {
   payload.WithString("MpdLocation", m_mpdLocation);

  }

  if(m_originManifestTypeHasBeenSet)
  {
   payload.WithString("OriginManifestType", OriginManifestTypeMapper::GetNameForOriginManifestType(m_originManifestType));
  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
