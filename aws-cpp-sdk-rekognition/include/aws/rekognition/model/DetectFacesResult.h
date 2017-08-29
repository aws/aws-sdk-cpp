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
#include <aws/rekognition/model/FaceDetail.h>
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
  class AWS_REKOGNITION_API DetectFacesResult
  {
  public:
    DetectFacesResult();
    DetectFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of each face found in the image. </p>
     */
    inline const Aws::Vector<FaceDetail>& GetFaceDetails() const{ return m_faceDetails; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline void SetFaceDetails(const Aws::Vector<FaceDetail>& value) { m_faceDetails = value; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline void SetFaceDetails(Aws::Vector<FaceDetail>&& value) { m_faceDetails = std::move(value); }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& WithFaceDetails(const Aws::Vector<FaceDetail>& value) { SetFaceDetails(value); return *this;}

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& WithFaceDetails(Aws::Vector<FaceDetail>&& value) { SetFaceDetails(std::move(value)); return *this;}

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& AddFaceDetails(const FaceDetail& value) { m_faceDetails.push_back(value); return *this; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& AddFaceDetails(FaceDetail&& value) { m_faceDetails.push_back(std::move(value)); return *this; }


    /**
     * <p> The orientation of the input image (counter-clockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceDetails</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in .jpeg format, it might contain exchangeable image
     * (Exif) metadata that includes the image's orientation. If so, and the Exif
     * metadata for the input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null and the <code>FaceDetails</code>
     * bounding box coordinates represent face locations after Exif metadata is used to
     * correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> </note>
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     * <p> The orientation of the input image (counter-clockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceDetails</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in .jpeg format, it might contain exchangeable image
     * (Exif) metadata that includes the image's orientation. If so, and the Exif
     * metadata for the input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null and the <code>FaceDetails</code>
     * bounding box coordinates represent face locations after Exif metadata is used to
     * correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> </note>
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     * <p> The orientation of the input image (counter-clockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceDetails</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in .jpeg format, it might contain exchangeable image
     * (Exif) metadata that includes the image's orientation. If so, and the Exif
     * metadata for the input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null and the <code>FaceDetails</code>
     * bounding box coordinates represent face locations after Exif metadata is used to
     * correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> </note>
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = std::move(value); }

    /**
     * <p> The orientation of the input image (counter-clockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceDetails</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in .jpeg format, it might contain exchangeable image
     * (Exif) metadata that includes the image's orientation. If so, and the Exif
     * metadata for the input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null and the <code>FaceDetails</code>
     * bounding box coordinates represent face locations after Exif metadata is used to
     * correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> </note>
     */
    inline DetectFacesResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     * <p> The orientation of the input image (counter-clockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceDetails</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in .jpeg format, it might contain exchangeable image
     * (Exif) metadata that includes the image's orientation. If so, and the Exif
     * metadata for the input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null and the <code>FaceDetails</code>
     * bounding box coordinates represent face locations after Exif metadata is used to
     * correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> </note>
     */
    inline DetectFacesResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(std::move(value)); return *this;}

  private:

    Aws::Vector<FaceDetail> m_faceDetails;

    OrientationCorrection m_orientationCorrection;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
