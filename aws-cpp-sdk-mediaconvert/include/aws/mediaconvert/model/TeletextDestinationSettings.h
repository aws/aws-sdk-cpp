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
   * Settings for Teletext caption output<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TeletextDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API TeletextDestinationSettings
  {
  public:
    TeletextDestinationSettings();
    TeletextDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    TeletextDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline const Aws::String& GetPageNumber() const{ return m_pageNumber; }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline void SetPageNumber(const Aws::String& value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline void SetPageNumber(Aws::String&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::move(value); }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline void SetPageNumber(const char* value) { m_pageNumberHasBeenSet = true; m_pageNumber.assign(value); }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline TeletextDestinationSettings& WithPageNumber(const Aws::String& value) { SetPageNumber(value); return *this;}

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline TeletextDestinationSettings& WithPageNumber(Aws::String&& value) { SetPageNumber(std::move(value)); return *this;}

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline TeletextDestinationSettings& WithPageNumber(const char* value) { SetPageNumber(value); return *this;}

  private:

    Aws::String m_pageNumber;
    bool m_pageNumberHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
