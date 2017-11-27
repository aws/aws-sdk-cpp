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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InsertableImage.h>
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
   * Enable the Image inserter (ImageInserter) feature to include a graphic overlay
   * on your video. Enable or disable this feature for each output individually. This
   * setting is disabled by default.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ImageInserter">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ImageInserter
  {
  public:
    ImageInserter();
    ImageInserter(const Aws::Utils::Json::JsonValue& jsonValue);
    ImageInserter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Image to insert. Must be 32 bit windows BMP, PNG, or TGA file. Must not be 
     * larger than the output frames.
     */
    inline const Aws::Vector<InsertableImage>& GetInsertableImages() const{ return m_insertableImages; }

    /**
     * Image to insert. Must be 32 bit windows BMP, PNG, or TGA file. Must not be 
     * larger than the output frames.
     */
    inline void SetInsertableImages(const Aws::Vector<InsertableImage>& value) { m_insertableImagesHasBeenSet = true; m_insertableImages = value; }

    /**
     * Image to insert. Must be 32 bit windows BMP, PNG, or TGA file. Must not be 
     * larger than the output frames.
     */
    inline void SetInsertableImages(Aws::Vector<InsertableImage>&& value) { m_insertableImagesHasBeenSet = true; m_insertableImages = std::move(value); }

    /**
     * Image to insert. Must be 32 bit windows BMP, PNG, or TGA file. Must not be 
     * larger than the output frames.
     */
    inline ImageInserter& WithInsertableImages(const Aws::Vector<InsertableImage>& value) { SetInsertableImages(value); return *this;}

    /**
     * Image to insert. Must be 32 bit windows BMP, PNG, or TGA file. Must not be 
     * larger than the output frames.
     */
    inline ImageInserter& WithInsertableImages(Aws::Vector<InsertableImage>&& value) { SetInsertableImages(std::move(value)); return *this;}

    /**
     * Image to insert. Must be 32 bit windows BMP, PNG, or TGA file. Must not be 
     * larger than the output frames.
     */
    inline ImageInserter& AddInsertableImages(const InsertableImage& value) { m_insertableImagesHasBeenSet = true; m_insertableImages.push_back(value); return *this; }

    /**
     * Image to insert. Must be 32 bit windows BMP, PNG, or TGA file. Must not be 
     * larger than the output frames.
     */
    inline ImageInserter& AddInsertableImages(InsertableImage&& value) { m_insertableImagesHasBeenSet = true; m_insertableImages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InsertableImage> m_insertableImages;
    bool m_insertableImagesHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
