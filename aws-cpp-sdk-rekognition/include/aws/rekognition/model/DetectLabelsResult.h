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
    DetectLabelsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectLabelsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
     * <p> Amazon Rekognition returns the orientation of the input image that was
     * detected (clockwise direction). If your application displays the image, you can
     * use this value to correct the orientation. If Amazon Rekognition detects that
     * the input image was rotated (for example, by 90 degrees), it first corrects the
     * orientation before detecting the labels. </p> <note> <p>If the source image Exif
     * metadata populates the orientation field, Amazon Rekognition does not perform
     * orientation correction and the value of OrientationCorrection will be nil.</p>
     * </note>
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     * <p> Amazon Rekognition returns the orientation of the input image that was
     * detected (clockwise direction). If your application displays the image, you can
     * use this value to correct the orientation. If Amazon Rekognition detects that
     * the input image was rotated (for example, by 90 degrees), it first corrects the
     * orientation before detecting the labels. </p> <note> <p>If the source image Exif
     * metadata populates the orientation field, Amazon Rekognition does not perform
     * orientation correction and the value of OrientationCorrection will be nil.</p>
     * </note>
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     * <p> Amazon Rekognition returns the orientation of the input image that was
     * detected (clockwise direction). If your application displays the image, you can
     * use this value to correct the orientation. If Amazon Rekognition detects that
     * the input image was rotated (for example, by 90 degrees), it first corrects the
     * orientation before detecting the labels. </p> <note> <p>If the source image Exif
     * metadata populates the orientation field, Amazon Rekognition does not perform
     * orientation correction and the value of OrientationCorrection will be nil.</p>
     * </note>
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = std::move(value); }

    /**
     * <p> Amazon Rekognition returns the orientation of the input image that was
     * detected (clockwise direction). If your application displays the image, you can
     * use this value to correct the orientation. If Amazon Rekognition detects that
     * the input image was rotated (for example, by 90 degrees), it first corrects the
     * orientation before detecting the labels. </p> <note> <p>If the source image Exif
     * metadata populates the orientation field, Amazon Rekognition does not perform
     * orientation correction and the value of OrientationCorrection will be nil.</p>
     * </note>
     */
    inline DetectLabelsResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     * <p> Amazon Rekognition returns the orientation of the input image that was
     * detected (clockwise direction). If your application displays the image, you can
     * use this value to correct the orientation. If Amazon Rekognition detects that
     * the input image was rotated (for example, by 90 degrees), it first corrects the
     * orientation before detecting the labels. </p> <note> <p>If the source image Exif
     * metadata populates the orientation field, Amazon Rekognition does not perform
     * orientation correction and the value of OrientationCorrection will be nil.</p>
     * </note>
     */
    inline DetectLabelsResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(std::move(value)); return *this;}

  private:
    Aws::Vector<Label> m_labels;
    OrientationCorrection m_orientationCorrection;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
