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
#include <aws/mediaconvert/model/Mp4CslgAtom.h>
#include <aws/mediaconvert/model/Mp4FreeSpaceBox.h>
#include <aws/mediaconvert/model/Mp4MoovPlacement.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for MP4 Container<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Mp4Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Mp4Settings
  {
  public:
    Mp4Settings();
    Mp4Settings(const Aws::Utils::Json::JsonValue& jsonValue);
    Mp4Settings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Mp4CslgAtom& GetCslgAtom() const{ return m_cslgAtom; }

    
    inline void SetCslgAtom(const Mp4CslgAtom& value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = value; }

    
    inline void SetCslgAtom(Mp4CslgAtom&& value) { m_cslgAtomHasBeenSet = true; m_cslgAtom = std::move(value); }

    
    inline Mp4Settings& WithCslgAtom(const Mp4CslgAtom& value) { SetCslgAtom(value); return *this;}

    
    inline Mp4Settings& WithCslgAtom(Mp4CslgAtom&& value) { SetCslgAtom(std::move(value)); return *this;}


    
    inline const Mp4FreeSpaceBox& GetFreeSpaceBox() const{ return m_freeSpaceBox; }

    
    inline void SetFreeSpaceBox(const Mp4FreeSpaceBox& value) { m_freeSpaceBoxHasBeenSet = true; m_freeSpaceBox = value; }

    
    inline void SetFreeSpaceBox(Mp4FreeSpaceBox&& value) { m_freeSpaceBoxHasBeenSet = true; m_freeSpaceBox = std::move(value); }

    
    inline Mp4Settings& WithFreeSpaceBox(const Mp4FreeSpaceBox& value) { SetFreeSpaceBox(value); return *this;}

    
    inline Mp4Settings& WithFreeSpaceBox(Mp4FreeSpaceBox&& value) { SetFreeSpaceBox(std::move(value)); return *this;}


    
    inline const Mp4MoovPlacement& GetMoovPlacement() const{ return m_moovPlacement; }

    
    inline void SetMoovPlacement(const Mp4MoovPlacement& value) { m_moovPlacementHasBeenSet = true; m_moovPlacement = value; }

    
    inline void SetMoovPlacement(Mp4MoovPlacement&& value) { m_moovPlacementHasBeenSet = true; m_moovPlacement = std::move(value); }

    
    inline Mp4Settings& WithMoovPlacement(const Mp4MoovPlacement& value) { SetMoovPlacement(value); return *this;}

    
    inline Mp4Settings& WithMoovPlacement(Mp4MoovPlacement&& value) { SetMoovPlacement(std::move(value)); return *this;}


    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline const Aws::String& GetMp4MajorBrand() const{ return m_mp4MajorBrand; }

    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline void SetMp4MajorBrand(const Aws::String& value) { m_mp4MajorBrandHasBeenSet = true; m_mp4MajorBrand = value; }

    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline void SetMp4MajorBrand(Aws::String&& value) { m_mp4MajorBrandHasBeenSet = true; m_mp4MajorBrand = std::move(value); }

    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline void SetMp4MajorBrand(const char* value) { m_mp4MajorBrandHasBeenSet = true; m_mp4MajorBrand.assign(value); }

    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline Mp4Settings& WithMp4MajorBrand(const Aws::String& value) { SetMp4MajorBrand(value); return *this;}

    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline Mp4Settings& WithMp4MajorBrand(Aws::String&& value) { SetMp4MajorBrand(std::move(value)); return *this;}

    /**
     * Overrides the "Major Brand" field in the output file. Usually not necessary to
     * specify.
     */
    inline Mp4Settings& WithMp4MajorBrand(const char* value) { SetMp4MajorBrand(value); return *this;}

  private:

    Mp4CslgAtom m_cslgAtom;
    bool m_cslgAtomHasBeenSet;

    Mp4FreeSpaceBox m_freeSpaceBox;
    bool m_freeSpaceBoxHasBeenSet;

    Mp4MoovPlacement m_moovPlacement;
    bool m_moovPlacementHasBeenSet;

    Aws::String m_mp4MajorBrand;
    bool m_mp4MajorBrandHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
