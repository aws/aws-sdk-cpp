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

#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

DestinationSettings::DestinationSettings() : 
    m_s3SettingsHasBeenSet(false)
{
}

DestinationSettings::DestinationSettings(JsonView jsonValue) : 
    m_s3SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationSettings& DestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Settings"))
  {
    m_s3Settings = jsonValue.GetObject("s3Settings");

    m_s3SettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_s3SettingsHasBeenSet)
  {
   payload.WithObject("s3Settings", m_s3Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
