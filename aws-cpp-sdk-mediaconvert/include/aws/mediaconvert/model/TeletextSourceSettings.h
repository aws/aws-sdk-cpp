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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings specific to Teletext caption sources, including Page number.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TeletextSourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API TeletextSourceSettings
  {
  public:
    TeletextSourceSettings();
    TeletextSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    TeletextSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline const Aws::String& GetPageNumber() const{ return m_pageNumber; }

    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline void SetPageNumber(const Aws::String& value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline void SetPageNumber(Aws::String&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::move(value); }

    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline void SetPageNumber(const char* value) { m_pageNumberHasBeenSet = true; m_pageNumber.assign(value); }

    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline TeletextSourceSettings& WithPageNumber(const Aws::String& value) { SetPageNumber(value); return *this;}

    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline TeletextSourceSettings& WithPageNumber(Aws::String&& value) { SetPageNumber(std::move(value)); return *this;}

    /**
     * Use Page Number (PageNumber) to specify the three-digit hexadecimal page number
     * that will be used for Teletext captions. Do not use this setting if you are
     * passing through teletext from the input source to output.
     */
    inline TeletextSourceSettings& WithPageNumber(const char* value) { SetPageNumber(value); return *this;}

  private:

    Aws::String m_pageNumber;
    bool m_pageNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
