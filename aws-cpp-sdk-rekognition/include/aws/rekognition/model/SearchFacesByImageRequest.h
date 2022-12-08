/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Image.h>
#include <aws/rekognition/model/QualityFilter.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class SearchFacesByImageRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API SearchFacesByImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchFacesByImage"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the collection to search.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>ID of the collection to search.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>ID of the collection to search.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID of the collection to search.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>ID of the collection to search.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>ID of the collection to search.</p>
     */
    inline SearchFacesByImageRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID of the collection to search.</p>
     */
    inline SearchFacesByImageRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>ID of the collection to search.</p>
     */
    inline SearchFacesByImageRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline SearchFacesByImageRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline SearchFacesByImageRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}


    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline int GetMaxFaces() const{ return m_maxFaces; }

    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline bool MaxFacesHasBeenSet() const { return m_maxFacesHasBeenSet; }

    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline void SetMaxFaces(int value) { m_maxFacesHasBeenSet = true; m_maxFaces = value; }

    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline SearchFacesByImageRequest& WithMaxFaces(int value) { SetMaxFaces(value); return *this;}


    /**
     * <p>(Optional) Specifies the minimum confidence in the face match to return. For
     * example, don't return any matches where confidence in matches is less than 70%.
     * The default value is 80%.</p>
     */
    inline double GetFaceMatchThreshold() const{ return m_faceMatchThreshold; }

    /**
     * <p>(Optional) Specifies the minimum confidence in the face match to return. For
     * example, don't return any matches where confidence in matches is less than 70%.
     * The default value is 80%.</p>
     */
    inline bool FaceMatchThresholdHasBeenSet() const { return m_faceMatchThresholdHasBeenSet; }

    /**
     * <p>(Optional) Specifies the minimum confidence in the face match to return. For
     * example, don't return any matches where confidence in matches is less than 70%.
     * The default value is 80%.</p>
     */
    inline void SetFaceMatchThreshold(double value) { m_faceMatchThresholdHasBeenSet = true; m_faceMatchThreshold = value; }

    /**
     * <p>(Optional) Specifies the minimum confidence in the face match to return. For
     * example, don't return any matches where confidence in matches is less than 70%.
     * The default value is 80%.</p>
     */
    inline SearchFacesByImageRequest& WithFaceMatchThreshold(double value) { SetFaceMatchThreshold(value); return *this;}


    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't searched for in the collection. If you
     * specify <code>AUTO</code>, Amazon Rekognition chooses the quality bar. If you
     * specify <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>, filtering
     * removes all faces that don’t meet the chosen quality bar. The quality bar is
     * based on a variety of common use cases. Low-quality detections can occur for a
     * number of reasons. Some examples are an object that's misidentified as a face, a
     * face that's too blurry, or a face with a pose that's too extreme to use. If you
     * specify <code>NONE</code>, no filtering is performed. The default value is
     * <code>NONE</code>. </p> <p>To use quality filtering, the collection you are
     * using must be associated with version 3 of the face model or higher.</p>
     */
    inline const QualityFilter& GetQualityFilter() const{ return m_qualityFilter; }

    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't searched for in the collection. If you
     * specify <code>AUTO</code>, Amazon Rekognition chooses the quality bar. If you
     * specify <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>, filtering
     * removes all faces that don’t meet the chosen quality bar. The quality bar is
     * based on a variety of common use cases. Low-quality detections can occur for a
     * number of reasons. Some examples are an object that's misidentified as a face, a
     * face that's too blurry, or a face with a pose that's too extreme to use. If you
     * specify <code>NONE</code>, no filtering is performed. The default value is
     * <code>NONE</code>. </p> <p>To use quality filtering, the collection you are
     * using must be associated with version 3 of the face model or higher.</p>
     */
    inline bool QualityFilterHasBeenSet() const { return m_qualityFilterHasBeenSet; }

    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't searched for in the collection. If you
     * specify <code>AUTO</code>, Amazon Rekognition chooses the quality bar. If you
     * specify <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>, filtering
     * removes all faces that don’t meet the chosen quality bar. The quality bar is
     * based on a variety of common use cases. Low-quality detections can occur for a
     * number of reasons. Some examples are an object that's misidentified as a face, a
     * face that's too blurry, or a face with a pose that's too extreme to use. If you
     * specify <code>NONE</code>, no filtering is performed. The default value is
     * <code>NONE</code>. </p> <p>To use quality filtering, the collection you are
     * using must be associated with version 3 of the face model or higher.</p>
     */
    inline void SetQualityFilter(const QualityFilter& value) { m_qualityFilterHasBeenSet = true; m_qualityFilter = value; }

    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't searched for in the collection. If you
     * specify <code>AUTO</code>, Amazon Rekognition chooses the quality bar. If you
     * specify <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>, filtering
     * removes all faces that don’t meet the chosen quality bar. The quality bar is
     * based on a variety of common use cases. Low-quality detections can occur for a
     * number of reasons. Some examples are an object that's misidentified as a face, a
     * face that's too blurry, or a face with a pose that's too extreme to use. If you
     * specify <code>NONE</code>, no filtering is performed. The default value is
     * <code>NONE</code>. </p> <p>To use quality filtering, the collection you are
     * using must be associated with version 3 of the face model or higher.</p>
     */
    inline void SetQualityFilter(QualityFilter&& value) { m_qualityFilterHasBeenSet = true; m_qualityFilter = std::move(value); }

    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't searched for in the collection. If you
     * specify <code>AUTO</code>, Amazon Rekognition chooses the quality bar. If you
     * specify <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>, filtering
     * removes all faces that don’t meet the chosen quality bar. The quality bar is
     * based on a variety of common use cases. Low-quality detections can occur for a
     * number of reasons. Some examples are an object that's misidentified as a face, a
     * face that's too blurry, or a face with a pose that's too extreme to use. If you
     * specify <code>NONE</code>, no filtering is performed. The default value is
     * <code>NONE</code>. </p> <p>To use quality filtering, the collection you are
     * using must be associated with version 3 of the face model or higher.</p>
     */
    inline SearchFacesByImageRequest& WithQualityFilter(const QualityFilter& value) { SetQualityFilter(value); return *this;}

    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't searched for in the collection. If you
     * specify <code>AUTO</code>, Amazon Rekognition chooses the quality bar. If you
     * specify <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>, filtering
     * removes all faces that don’t meet the chosen quality bar. The quality bar is
     * based on a variety of common use cases. Low-quality detections can occur for a
     * number of reasons. Some examples are an object that's misidentified as a face, a
     * face that's too blurry, or a face with a pose that's too extreme to use. If you
     * specify <code>NONE</code>, no filtering is performed. The default value is
     * <code>NONE</code>. </p> <p>To use quality filtering, the collection you are
     * using must be associated with version 3 of the face model or higher.</p>
     */
    inline SearchFacesByImageRequest& WithQualityFilter(QualityFilter&& value) { SetQualityFilter(std::move(value)); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Image m_image;
    bool m_imageHasBeenSet = false;

    int m_maxFaces;
    bool m_maxFacesHasBeenSet = false;

    double m_faceMatchThreshold;
    bool m_faceMatchThresholdHasBeenSet = false;

    QualityFilter m_qualityFilter;
    bool m_qualityFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
