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
#include <aws/rekognition/model/ComparedSourceImageFace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/rekognition/model/CompareFacesMatch.h>
#include <aws/rekognition/model/ComparedFace.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API CompareFacesResult
  {
  public:
    CompareFacesResult();
    CompareFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CompareFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The face in the source image that was used for comparison.</p>
     */
    inline const ComparedSourceImageFace& GetSourceImageFace() const{ return m_sourceImageFace; }

    /**
     * <p>The face in the source image that was used for comparison.</p>
     */
    inline void SetSourceImageFace(const ComparedSourceImageFace& value) { m_sourceImageFace = value; }

    /**
     * <p>The face in the source image that was used for comparison.</p>
     */
    inline void SetSourceImageFace(ComparedSourceImageFace&& value) { m_sourceImageFace = std::move(value); }

    /**
     * <p>The face in the source image that was used for comparison.</p>
     */
    inline CompareFacesResult& WithSourceImageFace(const ComparedSourceImageFace& value) { SetSourceImageFace(value); return *this;}

    /**
     * <p>The face in the source image that was used for comparison.</p>
     */
    inline CompareFacesResult& WithSourceImageFace(ComparedSourceImageFace&& value) { SetSourceImageFace(std::move(value)); return *this;}


    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline const Aws::Vector<CompareFacesMatch>& GetFaceMatches() const{ return m_faceMatches; }

    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline void SetFaceMatches(const Aws::Vector<CompareFacesMatch>& value) { m_faceMatches = value; }

    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline void SetFaceMatches(Aws::Vector<CompareFacesMatch>&& value) { m_faceMatches = std::move(value); }

    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline CompareFacesResult& WithFaceMatches(const Aws::Vector<CompareFacesMatch>& value) { SetFaceMatches(value); return *this;}

    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline CompareFacesResult& WithFaceMatches(Aws::Vector<CompareFacesMatch>&& value) { SetFaceMatches(std::move(value)); return *this;}

    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline CompareFacesResult& AddFaceMatches(const CompareFacesMatch& value) { m_faceMatches.push_back(value); return *this; }

    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline CompareFacesResult& AddFaceMatches(CompareFacesMatch&& value) { m_faceMatches.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline const Aws::Vector<ComparedFace>& GetUnmatchedFaces() const{ return m_unmatchedFaces; }

    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline void SetUnmatchedFaces(const Aws::Vector<ComparedFace>& value) { m_unmatchedFaces = value; }

    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline void SetUnmatchedFaces(Aws::Vector<ComparedFace>&& value) { m_unmatchedFaces = std::move(value); }

    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline CompareFacesResult& WithUnmatchedFaces(const Aws::Vector<ComparedFace>& value) { SetUnmatchedFaces(value); return *this;}

    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline CompareFacesResult& WithUnmatchedFaces(Aws::Vector<ComparedFace>&& value) { SetUnmatchedFaces(std::move(value)); return *this;}

    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline CompareFacesResult& AddUnmatchedFaces(const ComparedFace& value) { m_unmatchedFaces.push_back(value); return *this; }

    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline CompareFacesResult& AddUnmatchedFaces(ComparedFace&& value) { m_unmatchedFaces.push_back(std::move(value)); return *this; }


    /**
     * <p> The orientation of the source image (counterclockwise direction). If your
     * application displays the source image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in
     * <code>SourceImageFace</code> represent the location of the face before the image
     * orientation is corrected. </p> <note> <p>If the source image is in .jpeg format,
     * it might contain exchangeable image (Exif) metadata that includes the image's
     * orientation. If the Exif metadata for the source image populates the orientation
     * field, the value of <code>OrientationCorrection</code> is null and the
     * <code>SourceImageFace</code> bounding box coordinates represent the location of
     * the face after Exif metadata is used to correct the orientation. Images in .png
     * format don't contain Exif metadata.</p> </note>
     */
    inline const OrientationCorrection& GetSourceImageOrientationCorrection() const{ return m_sourceImageOrientationCorrection; }

    /**
     * <p> The orientation of the source image (counterclockwise direction). If your
     * application displays the source image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in
     * <code>SourceImageFace</code> represent the location of the face before the image
     * orientation is corrected. </p> <note> <p>If the source image is in .jpeg format,
     * it might contain exchangeable image (Exif) metadata that includes the image's
     * orientation. If the Exif metadata for the source image populates the orientation
     * field, the value of <code>OrientationCorrection</code> is null and the
     * <code>SourceImageFace</code> bounding box coordinates represent the location of
     * the face after Exif metadata is used to correct the orientation. Images in .png
     * format don't contain Exif metadata.</p> </note>
     */
    inline void SetSourceImageOrientationCorrection(const OrientationCorrection& value) { m_sourceImageOrientationCorrection = value; }

    /**
     * <p> The orientation of the source image (counterclockwise direction). If your
     * application displays the source image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in
     * <code>SourceImageFace</code> represent the location of the face before the image
     * orientation is corrected. </p> <note> <p>If the source image is in .jpeg format,
     * it might contain exchangeable image (Exif) metadata that includes the image's
     * orientation. If the Exif metadata for the source image populates the orientation
     * field, the value of <code>OrientationCorrection</code> is null and the
     * <code>SourceImageFace</code> bounding box coordinates represent the location of
     * the face after Exif metadata is used to correct the orientation. Images in .png
     * format don't contain Exif metadata.</p> </note>
     */
    inline void SetSourceImageOrientationCorrection(OrientationCorrection&& value) { m_sourceImageOrientationCorrection = std::move(value); }

    /**
     * <p> The orientation of the source image (counterclockwise direction). If your
     * application displays the source image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in
     * <code>SourceImageFace</code> represent the location of the face before the image
     * orientation is corrected. </p> <note> <p>If the source image is in .jpeg format,
     * it might contain exchangeable image (Exif) metadata that includes the image's
     * orientation. If the Exif metadata for the source image populates the orientation
     * field, the value of <code>OrientationCorrection</code> is null and the
     * <code>SourceImageFace</code> bounding box coordinates represent the location of
     * the face after Exif metadata is used to correct the orientation. Images in .png
     * format don't contain Exif metadata.</p> </note>
     */
    inline CompareFacesResult& WithSourceImageOrientationCorrection(const OrientationCorrection& value) { SetSourceImageOrientationCorrection(value); return *this;}

    /**
     * <p> The orientation of the source image (counterclockwise direction). If your
     * application displays the source image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in
     * <code>SourceImageFace</code> represent the location of the face before the image
     * orientation is corrected. </p> <note> <p>If the source image is in .jpeg format,
     * it might contain exchangeable image (Exif) metadata that includes the image's
     * orientation. If the Exif metadata for the source image populates the orientation
     * field, the value of <code>OrientationCorrection</code> is null and the
     * <code>SourceImageFace</code> bounding box coordinates represent the location of
     * the face after Exif metadata is used to correct the orientation. Images in .png
     * format don't contain Exif metadata.</p> </note>
     */
    inline CompareFacesResult& WithSourceImageOrientationCorrection(OrientationCorrection&& value) { SetSourceImageOrientationCorrection(std::move(value)); return *this;}


    /**
     * <p> The orientation of the target image (in counterclockwise direction). If your
     * application displays the target image, you can use this value to correct the
     * orientation of the image. The bounding box coordinates returned in
     * <code>FaceMatches</code> and <code>UnmatchedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the
     * target image is in .jpg format, it might contain Exif metadata that includes the
     * orientation of the image. If the Exif metadata for the target image populates
     * the orientation field, the value of <code>OrientationCorrection</code> is null
     * and the bounding box coordinates in <code>FaceMatches</code> and
     * <code>UnmatchedFaces</code> represent the location of the face after Exif
     * metadata is used to correct the orientation. Images in .png format don't contain
     * Exif metadata.</p> </note>
     */
    inline const OrientationCorrection& GetTargetImageOrientationCorrection() const{ return m_targetImageOrientationCorrection; }

    /**
     * <p> The orientation of the target image (in counterclockwise direction). If your
     * application displays the target image, you can use this value to correct the
     * orientation of the image. The bounding box coordinates returned in
     * <code>FaceMatches</code> and <code>UnmatchedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the
     * target image is in .jpg format, it might contain Exif metadata that includes the
     * orientation of the image. If the Exif metadata for the target image populates
     * the orientation field, the value of <code>OrientationCorrection</code> is null
     * and the bounding box coordinates in <code>FaceMatches</code> and
     * <code>UnmatchedFaces</code> represent the location of the face after Exif
     * metadata is used to correct the orientation. Images in .png format don't contain
     * Exif metadata.</p> </note>
     */
    inline void SetTargetImageOrientationCorrection(const OrientationCorrection& value) { m_targetImageOrientationCorrection = value; }

    /**
     * <p> The orientation of the target image (in counterclockwise direction). If your
     * application displays the target image, you can use this value to correct the
     * orientation of the image. The bounding box coordinates returned in
     * <code>FaceMatches</code> and <code>UnmatchedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the
     * target image is in .jpg format, it might contain Exif metadata that includes the
     * orientation of the image. If the Exif metadata for the target image populates
     * the orientation field, the value of <code>OrientationCorrection</code> is null
     * and the bounding box coordinates in <code>FaceMatches</code> and
     * <code>UnmatchedFaces</code> represent the location of the face after Exif
     * metadata is used to correct the orientation. Images in .png format don't contain
     * Exif metadata.</p> </note>
     */
    inline void SetTargetImageOrientationCorrection(OrientationCorrection&& value) { m_targetImageOrientationCorrection = std::move(value); }

    /**
     * <p> The orientation of the target image (in counterclockwise direction). If your
     * application displays the target image, you can use this value to correct the
     * orientation of the image. The bounding box coordinates returned in
     * <code>FaceMatches</code> and <code>UnmatchedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the
     * target image is in .jpg format, it might contain Exif metadata that includes the
     * orientation of the image. If the Exif metadata for the target image populates
     * the orientation field, the value of <code>OrientationCorrection</code> is null
     * and the bounding box coordinates in <code>FaceMatches</code> and
     * <code>UnmatchedFaces</code> represent the location of the face after Exif
     * metadata is used to correct the orientation. Images in .png format don't contain
     * Exif metadata.</p> </note>
     */
    inline CompareFacesResult& WithTargetImageOrientationCorrection(const OrientationCorrection& value) { SetTargetImageOrientationCorrection(value); return *this;}

    /**
     * <p> The orientation of the target image (in counterclockwise direction). If your
     * application displays the target image, you can use this value to correct the
     * orientation of the image. The bounding box coordinates returned in
     * <code>FaceMatches</code> and <code>UnmatchedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the
     * target image is in .jpg format, it might contain Exif metadata that includes the
     * orientation of the image. If the Exif metadata for the target image populates
     * the orientation field, the value of <code>OrientationCorrection</code> is null
     * and the bounding box coordinates in <code>FaceMatches</code> and
     * <code>UnmatchedFaces</code> represent the location of the face after Exif
     * metadata is used to correct the orientation. Images in .png format don't contain
     * Exif metadata.</p> </note>
     */
    inline CompareFacesResult& WithTargetImageOrientationCorrection(OrientationCorrection&& value) { SetTargetImageOrientationCorrection(std::move(value)); return *this;}

  private:

    ComparedSourceImageFace m_sourceImageFace;

    Aws::Vector<CompareFacesMatch> m_faceMatches;

    Aws::Vector<ComparedFace> m_unmatchedFaces;

    OrientationCorrection m_sourceImageOrientationCorrection;

    OrientationCorrection m_targetImageOrientationCorrection;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
