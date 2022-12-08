/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FaceRecord
  {
  public:
    AWS_REKOGNITION_API FaceRecord();
    AWS_REKOGNITION_API FaceRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_faceHasBeenSet = false;

    FaceDetail m_faceDetail;
    bool m_faceDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
