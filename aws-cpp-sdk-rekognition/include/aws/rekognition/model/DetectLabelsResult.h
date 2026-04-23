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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Label.h>
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
  class AWS_REKOGNITION_API DetectLabelsResult
  {
  public:
    DetectLabelsResult();
    DetectLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline const Aws::Vector<Label>& GetLabels() const{ return m_labels; }

    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline void SetLabels(const Aws::Vector<Label>& value) { m_labels = value; }

    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline void SetLabels(Aws::Vector<Label>&& value) { m_labels = std::move(value); }

    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline DetectLabelsResult& WithLabels(const Aws::Vector<Label>& value) { SetLabels(value); return *this;}

    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline DetectLabelsResult& WithLabels(Aws::Vector<Label>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline DetectLabelsResult& AddLabels(const Label& value) { m_labels.push_back(value); return *this; }

    /**
     * <p>An array of labels for the real-world objects detected. </p>
     */
    inline DetectLabelsResult& AddLabels(Label&& value) { m_labels.push_back(std::move(value)); return *this; }


    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = std::move(value); }

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline DetectLabelsResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline DetectLabelsResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(std::move(value)); return *this;}


    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline const Aws::String& GetLabelModelVersion() const{ return m_labelModelVersion; }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline void SetLabelModelVersion(const Aws::String& value) { m_labelModelVersion = value; }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline void SetLabelModelVersion(Aws::String&& value) { m_labelModelVersion = std::move(value); }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline void SetLabelModelVersion(const char* value) { m_labelModelVersion.assign(value); }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline DetectLabelsResult& WithLabelModelVersion(const Aws::String& value) { SetLabelModelVersion(value); return *this;}

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline DetectLabelsResult& WithLabelModelVersion(Aws::String&& value) { SetLabelModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline DetectLabelsResult& WithLabelModelVersion(const char* value) { SetLabelModelVersion(value); return *this;}

  private:

    Aws::Vector<Label> m_labels;

    OrientationCorrection m_orientationCorrection;

    Aws::String m_labelModelVersion;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
