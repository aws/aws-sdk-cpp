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
   * Teletext Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TeletextSourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API TeletextSourceSettings
  {
  public:
    TeletextSourceSettings();
    TeletextSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    TeletextSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline const Aws::String& GetPageNumber() const{ return m_pageNumber; }

    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline void SetPageNumber(const Aws::String& value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline void SetPageNumber(Aws::String&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::move(value); }

    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline void SetPageNumber(const char* value) { m_pageNumberHasBeenSet = true; m_pageNumber.assign(value); }

    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline TeletextSourceSettings& WithPageNumber(const Aws::String& value) { SetPageNumber(value); return *this;}

    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline TeletextSourceSettings& WithPageNumber(Aws::String&& value) { SetPageNumber(std::move(value)); return *this;}

    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline TeletextSourceSettings& WithPageNumber(const char* value) { SetPageNumber(value); return *this;}

  private:

    Aws::String m_pageNumber;
    bool m_pageNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
