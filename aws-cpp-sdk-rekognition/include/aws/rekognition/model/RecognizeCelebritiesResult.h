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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/rekognition/model/Celebrity.h>
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
  class AWS_REKOGNITION_API RecognizeCelebritiesResult
  {
  public:
    RecognizeCelebritiesResult();
    RecognizeCelebritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RecognizeCelebritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 15 celebrities in an image.</p>
     */
    inline const Aws::Vector<Celebrity>& GetCelebrityFaces() const{ return m_celebrityFaces; }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 15 celebrities in an image.</p>
     */
    inline void SetCelebrityFaces(const Aws::Vector<Celebrity>& value) { m_celebrityFaces = value; }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 15 celebrities in an image.</p>
     */
    inline void SetCelebrityFaces(Aws::Vector<Celebrity>&& value) { m_celebrityFaces = std::move(value); }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 15 celebrities in an image.</p>
     */
    inline RecognizeCelebritiesResult& WithCelebrityFaces(const Aws::Vector<Celebrity>& value) { SetCelebrityFaces(value); return *this;}

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 15 celebrities in an image.</p>
     */
    inline RecognizeCelebritiesResult& WithCelebrityFaces(Aws::Vector<Celebrity>&& value) { SetCelebrityFaces(std::move(value)); return *this;}

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 15 celebrities in an image.</p>
     */
    inline RecognizeCelebritiesResult& AddCelebrityFaces(const Celebrity& value) { m_celebrityFaces.push_back(value); return *this; }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 15 celebrities in an image.</p>
     */
    inline RecognizeCelebritiesResult& AddCelebrityFaces(Celebrity&& value) { m_celebrityFaces.push_back(std::move(value)); return *this; }


    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline const Aws::Vector<ComparedFace>& GetUnrecognizedFaces() const{ return m_unrecognizedFaces; }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline void SetUnrecognizedFaces(const Aws::Vector<ComparedFace>& value) { m_unrecognizedFaces = value; }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline void SetUnrecognizedFaces(Aws::Vector<ComparedFace>&& value) { m_unrecognizedFaces = std::move(value); }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& WithUnrecognizedFaces(const Aws::Vector<ComparedFace>& value) { SetUnrecognizedFaces(value); return *this;}

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& WithUnrecognizedFaces(Aws::Vector<ComparedFace>&& value) { SetUnrecognizedFaces(std::move(value)); return *this;}

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& AddUnrecognizedFaces(const ComparedFace& value) { m_unrecognizedFaces.push_back(value); return *this; }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& AddUnrecognizedFaces(ComparedFace&& value) { m_unrecognizedFaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> </note>
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> </note>
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> </note>
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = std::move(value); }

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> </note>
     */
    inline RecognizeCelebritiesResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p> <note> <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> </note>
     */
    inline RecognizeCelebritiesResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(std::move(value)); return *this;}

  private:

    Aws::Vector<Celebrity> m_celebrityFaces;

    Aws::Vector<ComparedFace> m_unrecognizedFaces;

    OrientationCorrection m_orientationCorrection;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
