﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    DetectFacesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectFacesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetFaceDetails(Aws::Vector<FaceDetail>&& value) { m_faceDetails = value; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& WithFaceDetails(const Aws::Vector<FaceDetail>& value) { SetFaceDetails(value); return *this;}

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& WithFaceDetails(Aws::Vector<FaceDetail>&& value) { SetFaceDetails(value); return *this;}

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& AddFaceDetails(const FaceDetail& value) { m_faceDetails.push_back(value); return *this; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& AddFaceDetails(FaceDetail&& value) { m_faceDetails.push_back(value); return *this; }

    /**
     * <p>The algorithm detects the image orientation. If it detects that the image was
     * rotated, it returns the degrees of rotation. If your application is displaying
     * the image, you can use this value to adjust the orientation. </p> <p>For
     * example, if the service detects that the input image was rotated by 90 degrees,
     * it corrects orientation, performs face detection, and then returns the faces.
     * That is, the bounding box coordinates in the response are based on the corrected
     * orientation. </p>
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     * <p>The algorithm detects the image orientation. If it detects that the image was
     * rotated, it returns the degrees of rotation. If your application is displaying
     * the image, you can use this value to adjust the orientation. </p> <p>For
     * example, if the service detects that the input image was rotated by 90 degrees,
     * it corrects orientation, performs face detection, and then returns the faces.
     * That is, the bounding box coordinates in the response are based on the corrected
     * orientation. </p>
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     * <p>The algorithm detects the image orientation. If it detects that the image was
     * rotated, it returns the degrees of rotation. If your application is displaying
     * the image, you can use this value to adjust the orientation. </p> <p>For
     * example, if the service detects that the input image was rotated by 90 degrees,
     * it corrects orientation, performs face detection, and then returns the faces.
     * That is, the bounding box coordinates in the response are based on the corrected
     * orientation. </p>
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = value; }

    /**
     * <p>The algorithm detects the image orientation. If it detects that the image was
     * rotated, it returns the degrees of rotation. If your application is displaying
     * the image, you can use this value to adjust the orientation. </p> <p>For
     * example, if the service detects that the input image was rotated by 90 degrees,
     * it corrects orientation, performs face detection, and then returns the faces.
     * That is, the bounding box coordinates in the response are based on the corrected
     * orientation. </p>
     */
    inline DetectFacesResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     * <p>The algorithm detects the image orientation. If it detects that the image was
     * rotated, it returns the degrees of rotation. If your application is displaying
     * the image, you can use this value to adjust the orientation. </p> <p>For
     * example, if the service detects that the input image was rotated by 90 degrees,
     * it corrects orientation, performs face detection, and then returns the faces.
     * That is, the bounding box coordinates in the response are based on the corrected
     * orientation. </p>
     */
    inline DetectFacesResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(value); return *this;}

  private:
    Aws::Vector<FaceDetail> m_faceDetails;
    OrientationCorrection m_orientationCorrection;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
