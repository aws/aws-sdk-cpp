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

#include <aws/mediaconvert/model/MsSmoothGroupSettings.h>
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

MsSmoothGroupSettings::MsSmoothGroupSettings() : 
    m_audioDeduplication(MsSmoothAudioDeduplication::NOT_SET),
    m_audioDeduplicationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_manifestEncoding(MsSmoothManifestEncoding::NOT_SET),
    m_manifestEncodingHasBeenSet(false)
{
}

MsSmoothGroupSettings::MsSmoothGroupSettings(JsonView jsonValue) : 
    m_audioDeduplication(MsSmoothAudioDeduplication::NOT_SET),
    m_audioDeduplicationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_manifestEncoding(MsSmoothManifestEncoding::NOT_SET),
    m_manifestEncodingHasBeenSet(false)
{
  *this = jsonValue;
}

MsSmoothGroupSettings& MsSmoothGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDeduplication"))
  {
    m_audioDeduplication = MsSmoothAudioDeduplicationMapper::GetMsSmoothAudioDeduplicationForName(jsonValue.GetString("audioDeduplication"));

    m_audioDeduplicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationSettings"))
  {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");

    m_destinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentLength"))
  {
    m_fragmentLength = jsonValue.GetInteger("fragmentLength");

    m_fragmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestEncoding"))
  {
    m_manifestEncoding = MsSmoothManifestEncodingMapper::GetMsSmoothManifestEncodingForName(jsonValue.GetString("manifestEncoding"));

    m_manifestEncodingHasBeenSet = true;
  }

  return *this;
}

JsonValue MsSmoothGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDeduplicationHasBeenSet)
  {
   payload.WithString("audioDeduplication", MsSmoothAudioDeduplicationMapper::GetNameForMsSmoothAudioDeduplication(m_audioDeduplication));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_fragmentLengthHasBeenSet)
  {
   payload.WithInteger("fragmentLength", m_fragmentLength);

  }

  if(m_manifestEncodingHasBeenSet)
  {
   payload.WithString("manifestEncoding", MsSmoothManifestEncodingMapper::GetNameForMsSmoothManifestEncoding(m_manifestEncoding));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
