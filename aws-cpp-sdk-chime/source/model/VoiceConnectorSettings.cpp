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

#include <aws/chime/model/VoiceConnectorSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

VoiceConnectorSettings::VoiceConnectorSettings() : 
    m_cdrBucketHasBeenSet(false)
{
}

VoiceConnectorSettings::VoiceConnectorSettings(JsonView jsonValue) : 
    m_cdrBucketHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnectorSettings& VoiceConnectorSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CdrBucket"))
  {
    m_cdrBucket = jsonValue.GetString("CdrBucket");

    m_cdrBucketHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnectorSettings::Jsonize() const
{
  JsonValue payload;

  if(m_cdrBucketHasBeenSet)
  {
   payload.WithString("CdrBucket", m_cdrBucket);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
