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

#include <aws/mediatailor/model/HlsConfiguration.h>
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

HlsConfiguration::HlsConfiguration() : 
    m_manifestEndpointPrefixHasBeenSet(false)
{
}

HlsConfiguration::HlsConfiguration(JsonView jsonValue) : 
    m_manifestEndpointPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

HlsConfiguration& HlsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestEndpointPrefix"))
  {
    m_manifestEndpointPrefix = jsonValue.GetString("ManifestEndpointPrefix");

    m_manifestEndpointPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestEndpointPrefixHasBeenSet)
  {
   payload.WithString("ManifestEndpointPrefix", m_manifestEndpointPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
