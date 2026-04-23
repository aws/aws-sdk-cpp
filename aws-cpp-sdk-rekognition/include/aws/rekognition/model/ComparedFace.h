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
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Pose.h>
#include <aws/rekognition/model/ImageQuality.h>
#include <aws/rekognition/model/Landmark.h>
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
   * <p>Provides face metadata for target image faces that are analyzed by
   * <code>CompareFaces</code> and <code>RecognizeCelebrities</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ComparedFace">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API ComparedFace
  {
  public:
    ComparedFace();
    ComparedFace(Aws::Utils::Json::JsonView jsonValue);
    ComparedFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ComparedFace& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>Bounding box of the face.</p>
     */
    inline ComparedFace& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>Level of confidence that what the bounding box contains is a face.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Level of confidence that what the bounding box contains is a face.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Level of confidence that what the bounding box contains is a face.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Level of confidence that what the bounding box contains is a face.</p>
     */
    inline ComparedFace& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>An array of facial landmarks.</p>
     */
    inline const Aws::Vector<Landmark>& GetLandmarks() const{ return m_landmarks; }

    /**
     * <p>An array of facial landmarks.</p>
     */
    inline bool LandmarksHasBeenSet() const { return m_landmarksHasBeenSet; }

    /**
     * <p>An array of facial landmarks.</p>
     */
    inline void SetLandmarks(const Aws::Vector<Landmark>& value) { m_landmarksHasBeenSet = true; m_landmarks = value; }

    /**
     * <p>An array of facial landmarks.</p>
     */
    inline void SetLandmarks(Aws::Vector<Landmark>&& value) { m_landmarksHasBeenSet = true; m_landmarks = std::move(value); }

    /**
     * <p>An array of facial landmarks.</p>
     */
    inline ComparedFace& WithLandmarks(const Aws::Vector<Landmark>& value) { SetLandmarks(value); return *this;}

    /**
     * <p>An array of facial landmarks.</p>
     */
    inline ComparedFace& WithLandmarks(Aws::Vector<Landmark>&& value) { SetLandmarks(std::move(value)); return *this;}

    /**
     * <p>An array of facial landmarks.</p>
     */
    inline ComparedFace& AddLandmarks(const Landmark& value) { m_landmarksHasBeenSet = true; m_landmarks.push_back(value); return *this; }

    /**
     * <p>An array of facial landmarks.</p>
     */
    inline ComparedFace& AddLandmarks(Landmark&& value) { m_landmarksHasBeenSet = true; m_landmarks.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline const Pose& GetPose() const{ return m_pose; }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline bool PoseHasBeenSet() const { return m_poseHasBeenSet; }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline void SetPose(const Pose& value) { m_poseHasBeenSet = true; m_pose = value; }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline void SetPose(Pose&& value) { m_poseHasBeenSet = true; m_pose = std::move(value); }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline ComparedFace& WithPose(const Pose& value) { SetPose(value); return *this;}

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline ComparedFace& WithPose(Pose&& value) { SetPose(std::move(value)); return *this;}


    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline const ImageQuality& GetQuality() const{ return m_quality; }

    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline void SetQuality(const ImageQuality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline void SetQuality(ImageQuality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline ComparedFace& WithQuality(const ImageQuality& value) { SetQuality(value); return *this;}

    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline ComparedFace& WithQuality(ImageQuality&& value) { SetQuality(std::move(value)); return *this;}

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;

    Aws::Vector<Landmark> m_landmarks;
    bool m_landmarksHasBeenSet;

    Pose m_pose;
    bool m_poseHasBeenSet;

    ImageQuality m_quality;
    bool m_qualityHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
