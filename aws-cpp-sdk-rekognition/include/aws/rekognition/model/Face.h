/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the face properties such as the bounding box, face ID, image ID of
   * the input image, and external image ID that you assigned. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Face">AWS
   * API Reference</a></p>
   */
  class Face
  {
  public:
    AWS_REKOGNITION_API Face();
    AWS_REKOGNITION_API Face(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Face& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline Face& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline Face& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline Face& WithFaceId(const char* value) { SetFaceId(value); return *this;}


    /**
     * <p>Bounding box of the face.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline Face& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>Bounding box of the face.</p>
     */
    inline Face& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline Face& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline Face& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline Face& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline const Aws::String& GetExternalImageId() const{ return m_externalImageId; }

    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline bool ExternalImageIdHasBeenSet() const { return m_externalImageIdHasBeenSet; }

    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline void SetExternalImageId(const Aws::String& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = value; }

    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline void SetExternalImageId(Aws::String&& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = std::move(value); }

    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline void SetExternalImageId(const char* value) { m_externalImageIdHasBeenSet = true; m_externalImageId.assign(value); }

    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline Face& WithExternalImageId(const Aws::String& value) { SetExternalImageId(value); return *this;}

    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline Face& WithExternalImageId(Aws::String&& value) { SetExternalImageId(std::move(value)); return *this;}

    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline Face& WithExternalImageId(const char* value) { SetExternalImageId(value); return *this;}


    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree).</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree).</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree).</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree).</p>
     */
    inline Face& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline const Aws::String& GetIndexFacesModelVersion() const{ return m_indexFacesModelVersion; }

    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline bool IndexFacesModelVersionHasBeenSet() const { return m_indexFacesModelVersionHasBeenSet; }

    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline void SetIndexFacesModelVersion(const Aws::String& value) { m_indexFacesModelVersionHasBeenSet = true; m_indexFacesModelVersion = value; }

    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline void SetIndexFacesModelVersion(Aws::String&& value) { m_indexFacesModelVersionHasBeenSet = true; m_indexFacesModelVersion = std::move(value); }

    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline void SetIndexFacesModelVersion(const char* value) { m_indexFacesModelVersionHasBeenSet = true; m_indexFacesModelVersion.assign(value); }

    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline Face& WithIndexFacesModelVersion(const Aws::String& value) { SetIndexFacesModelVersion(value); return *this;}

    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline Face& WithIndexFacesModelVersion(Aws::String&& value) { SetIndexFacesModelVersion(std::move(value)); return *this;}

    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline Face& WithIndexFacesModelVersion(const char* value) { SetIndexFacesModelVersion(value); return *this;}

  private:

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_externalImageId;
    bool m_externalImageIdHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_indexFacesModelVersion;
    bool m_indexFacesModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
