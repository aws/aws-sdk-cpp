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

#include <aws/medialive/model/Scte35Descriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Scte35Descriptor::Scte35Descriptor() : 
    m_scte35DescriptorSettingsHasBeenSet(false)
{
}

Scte35Descriptor::Scte35Descriptor(JsonView jsonValue) : 
    m_scte35DescriptorSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35Descriptor& Scte35Descriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scte35DescriptorSettings"))
  {
    m_scte35DescriptorSettings = jsonValue.GetObject("scte35DescriptorSettings");

    m_scte35DescriptorSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35Descriptor::Jsonize() const
{
  JsonValue payload;

  if(m_scte35DescriptorSettingsHasBeenSet)
  {
   payload.WithObject("scte35DescriptorSettings", m_scte35DescriptorSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
