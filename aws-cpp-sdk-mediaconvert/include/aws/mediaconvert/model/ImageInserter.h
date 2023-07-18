﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Use the image inserter feature to include a graphic overlay on your video.
   * Enable or disable this feature for each input or output individually. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/graphic-overlay.html. This
   * setting is disabled by default.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ImageInserter">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ImageInserter
  {
  public:
    ImageInserter();
    ImageInserter(Aws::Utils::Json::JsonView jsonValue);
    ImageInserter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline const Aws::Vector<InsertableImage>& GetInsertableImages() const{ return m_insertableImages; }

    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline bool InsertableImagesHasBeenSet() const { return m_insertableImagesHasBeenSet; }

    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline void SetInsertableImages(const Aws::Vector<InsertableImage>& value) { m_insertableImagesHasBeenSet = true; m_insertableImages = value; }

    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline void SetInsertableImages(Aws::Vector<InsertableImage>&& value) { m_insertableImagesHasBeenSet = true; m_insertableImages = std::move(value); }

    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline ImageInserter& WithInsertableImages(const Aws::Vector<InsertableImage>& value) { SetInsertableImages(value); return *this;}

    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline ImageInserter& WithInsertableImages(Aws::Vector<InsertableImage>&& value) { SetInsertableImages(std::move(value)); return *this;}

    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline ImageInserter& AddInsertableImages(const InsertableImage& value) { m_insertableImagesHasBeenSet = true; m_insertableImages.push_back(value); return *this; }

    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline ImageInserter& AddInsertableImages(InsertableImage&& value) { m_insertableImagesHasBeenSet = true; m_insertableImages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InsertableImage> m_insertableImages;
    bool m_insertableImagesHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
