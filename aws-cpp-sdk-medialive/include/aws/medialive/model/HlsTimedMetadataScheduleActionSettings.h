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

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for the action to emit HLS metadata<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsTimedMetadataScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API HlsTimedMetadataScheduleActionSettings
  {
  public:
    HlsTimedMetadataScheduleActionSettings();
    HlsTimedMetadataScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsTimedMetadataScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline const Aws::String& GetId3() const{ return m_id3; }

    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline bool Id3HasBeenSet() const { return m_id3HasBeenSet; }

    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline void SetId3(const Aws::String& value) { m_id3HasBeenSet = true; m_id3 = value; }

    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline void SetId3(Aws::String&& value) { m_id3HasBeenSet = true; m_id3 = std::move(value); }

    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline void SetId3(const char* value) { m_id3HasBeenSet = true; m_id3.assign(value); }

    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline HlsTimedMetadataScheduleActionSettings& WithId3(const Aws::String& value) { SetId3(value); return *this;}

    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline HlsTimedMetadataScheduleActionSettings& WithId3(Aws::String&& value) { SetId3(std::move(value)); return *this;}

    /**
     * Base64 string formatted according to the ID3 specification:
     * http://id3.org/id3v2.4.0-structure
     */
    inline HlsTimedMetadataScheduleActionSettings& WithId3(const char* value) { SetId3(value); return *this;}

  private:

    Aws::String m_id3;
    bool m_id3HasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
