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
   * Settings for Avail Blanking<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AvailBlanking">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AvailBlanking
  {
  public:
    AvailBlanking();
    AvailBlanking(Aws::Utils::Json::JsonView jsonValue);
    AvailBlanking& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline const Aws::String& GetAvailBlankingImage() const{ return m_availBlankingImage; }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline bool AvailBlankingImageHasBeenSet() const { return m_availBlankingImageHasBeenSet; }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline void SetAvailBlankingImage(const Aws::String& value) { m_availBlankingImageHasBeenSet = true; m_availBlankingImage = value; }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline void SetAvailBlankingImage(Aws::String&& value) { m_availBlankingImageHasBeenSet = true; m_availBlankingImage = std::move(value); }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline void SetAvailBlankingImage(const char* value) { m_availBlankingImageHasBeenSet = true; m_availBlankingImage.assign(value); }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline AvailBlanking& WithAvailBlankingImage(const Aws::String& value) { SetAvailBlankingImage(value); return *this;}

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline AvailBlanking& WithAvailBlankingImage(Aws::String&& value) { SetAvailBlankingImage(std::move(value)); return *this;}

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline AvailBlanking& WithAvailBlankingImage(const char* value) { SetAvailBlankingImage(value); return *this;}

  private:

    Aws::String m_availBlankingImage;
    bool m_availBlankingImageHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
