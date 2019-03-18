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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/Face.h>
#include <aws/rekognition/model/FaceDetail.h>
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
   * <p>Object containing both the face metadata (stored in the backend database),
   * and facial attributes that are detected but aren't stored in the
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceRecord">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API FaceRecord
  {
  public:
    FaceRecord();
    FaceRecord(Aws::Utils::Json::JsonView jsonValue);
    FaceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the input image, and external image ID that you assigned. </p>
     */
    inline const Face& GetFace() const{ return m_face; }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the input image, and external image ID that you assigned. </p>
     */
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the input image, and external image ID that you assigned. </p>
     */
    inline void SetFace(const Face& value) { m_faceHasBeenSet = true; m_face = value; }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the input image, and external image ID that you assigned. </p>
     */
    inline void SetFace(Face&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the input image, and external image ID that you assigned. </p>
     */
    inline FaceRecord& WithFace(const Face& value) { SetFace(value); return *this;}

    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the input image, and external image ID that you assigned. </p>
     */
    inline FaceRecord& WithFace(Face&& value) { SetFace(std::move(value)); return *this;}


    /**
     * <p>Structure containing attributes of the face that the algorithm detected.</p>
     */
    inline const FaceDetail& GetFaceDetail() const{ return m_faceDetail; }

    /**
     * <p>Structure containing attributes of the face that the algorithm detected.</p>
     */
    inline bool FaceDetailHasBeenSet() const { return m_faceDetailHasBeenSet; }

    /**
     * <p>Structure containing attributes of the face that the algorithm detected.</p>
     */
    inline void SetFaceDetail(const FaceDetail& value) { m_faceDetailHasBeenSet = true; m_faceDetail = value; }

    /**
     * <p>Structure containing attributes of the face that the algorithm detected.</p>
     */
    inline void SetFaceDetail(FaceDetail&& value) { m_faceDetailHasBeenSet = true; m_faceDetail = std::move(value); }

    /**
     * <p>Structure containing attributes of the face that the algorithm detected.</p>
     */
    inline FaceRecord& WithFaceDetail(const FaceDetail& value) { SetFaceDetail(value); return *this;}

    /**
     * <p>Structure containing attributes of the face that the algorithm detected.</p>
     */
    inline FaceRecord& WithFaceDetail(FaceDetail&& value) { SetFaceDetail(std::move(value)); return *this;}

  private:

    Face m_face;
    bool m_faceHasBeenSet;

    FaceDetail m_faceDetail;
    bool m_faceDetailHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
