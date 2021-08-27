/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Specifies a location within the frame that Rekognition checks for text. Uses
   * a <code>BoundingBox</code> object to set a region of the screen.</p> <p>A word
   * is included in the region if the word is more than half in that region. If there
   * is more than one region, the word will be compared with all regions of the
   * screen. Any word more than half in a region is kept in the
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/RegionOfInterest">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API RegionOfInterest
  {
  public:
    RegionOfInterest();
    RegionOfInterest(Aws::Utils::Json::JsonView jsonValue);
    RegionOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline RegionOfInterest& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline RegionOfInterest& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
