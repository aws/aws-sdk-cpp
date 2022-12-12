/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/rekognition/model/AgeRange.h>
#include <aws/rekognition/model/Smile.h>
#include <aws/rekognition/model/Eyeglasses.h>
#include <aws/rekognition/model/Sunglasses.h>
#include <aws/rekognition/model/Gender.h>
#include <aws/rekognition/model/Beard.h>
#include <aws/rekognition/model/Mustache.h>
#include <aws/rekognition/model/EyeOpen.h>
#include <aws/rekognition/model/MouthOpen.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Pose.h>
#include <aws/rekognition/model/ImageQuality.h>
#include <aws/rekognition/model/Emotion.h>
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
   * <p>Structure containing attributes of the face that the algorithm detected.</p>
   * <p>A <code>FaceDetail</code> object contains either the default facial
   * attributes or all facial attributes. The default attributes are
   * <code>BoundingBox</code>, <code>Confidence</code>, <code>Landmarks</code>,
   * <code>Pose</code>, and <code>Quality</code>.</p> <p> <a>GetFaceDetection</a> is
   * the only Amazon Rekognition Video stored video operation that can return a
   * <code>FaceDetail</code> object with all attributes. To specify which attributes
   * to return, use the <code>FaceAttributes</code> input parameter for
   * <a>StartFaceDetection</a>. The following Amazon Rekognition Video operations
   * return only the default attributes. The corresponding Start operations don't
   * have a <code>FaceAttributes</code> input parameter:</p> <ul> <li>
   * <p>GetCelebrityRecognition</p> </li> <li> <p>GetPersonTracking</p> </li> <li>
   * <p>GetFaceSearch</p> </li> </ul> <p>The Amazon Rekognition Image
   * <a>DetectFaces</a> and <a>IndexFaces</a> operations can return all facial
   * attributes. To specify which attributes to return, use the
   * <code>Attributes</code> input parameter for <code>DetectFaces</code>. For
   * <code>IndexFaces</code>, use the <code>DetectAttributes</code> input
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceDetail">AWS
   * API Reference</a></p>
   */
  class FaceDetail
  {
  public:
    AWS_REKOGNITION_API FaceDetail();
    AWS_REKOGNITION_API FaceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Bounding box of the face. Default attribute.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>Bounding box of the face. Default attribute.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>Bounding box of the face. Default attribute.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>Bounding box of the face. Default attribute.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>Bounding box of the face. Default attribute.</p>
     */
    inline FaceDetail& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>Bounding box of the face. Default attribute.</p>
     */
    inline FaceDetail& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>The estimated age range, in years, for the face. Low represents the lowest
     * estimated age and High represents the highest estimated age.</p>
     */
    inline const AgeRange& GetAgeRange() const{ return m_ageRange; }

    /**
     * <p>The estimated age range, in years, for the face. Low represents the lowest
     * estimated age and High represents the highest estimated age.</p>
     */
    inline bool AgeRangeHasBeenSet() const { return m_ageRangeHasBeenSet; }

    /**
     * <p>The estimated age range, in years, for the face. Low represents the lowest
     * estimated age and High represents the highest estimated age.</p>
     */
    inline void SetAgeRange(const AgeRange& value) { m_ageRangeHasBeenSet = true; m_ageRange = value; }

    /**
     * <p>The estimated age range, in years, for the face. Low represents the lowest
     * estimated age and High represents the highest estimated age.</p>
     */
    inline void SetAgeRange(AgeRange&& value) { m_ageRangeHasBeenSet = true; m_ageRange = std::move(value); }

    /**
     * <p>The estimated age range, in years, for the face. Low represents the lowest
     * estimated age and High represents the highest estimated age.</p>
     */
    inline FaceDetail& WithAgeRange(const AgeRange& value) { SetAgeRange(value); return *this;}

    /**
     * <p>The estimated age range, in years, for the face. Low represents the lowest
     * estimated age and High represents the highest estimated age.</p>
     */
    inline FaceDetail& WithAgeRange(AgeRange&& value) { SetAgeRange(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not the face is smiling, and the confidence level in the
     * determination.</p>
     */
    inline const Smile& GetSmile() const{ return m_smile; }

    /**
     * <p>Indicates whether or not the face is smiling, and the confidence level in the
     * determination.</p>
     */
    inline bool SmileHasBeenSet() const { return m_smileHasBeenSet; }

    /**
     * <p>Indicates whether or not the face is smiling, and the confidence level in the
     * determination.</p>
     */
    inline void SetSmile(const Smile& value) { m_smileHasBeenSet = true; m_smile = value; }

    /**
     * <p>Indicates whether or not the face is smiling, and the confidence level in the
     * determination.</p>
     */
    inline void SetSmile(Smile&& value) { m_smileHasBeenSet = true; m_smile = std::move(value); }

    /**
     * <p>Indicates whether or not the face is smiling, and the confidence level in the
     * determination.</p>
     */
    inline FaceDetail& WithSmile(const Smile& value) { SetSmile(value); return *this;}

    /**
     * <p>Indicates whether or not the face is smiling, and the confidence level in the
     * determination.</p>
     */
    inline FaceDetail& WithSmile(Smile&& value) { SetSmile(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not the face is wearing eye glasses, and the confidence
     * level in the determination.</p>
     */
    inline const Eyeglasses& GetEyeglasses() const{ return m_eyeglasses; }

    /**
     * <p>Indicates whether or not the face is wearing eye glasses, and the confidence
     * level in the determination.</p>
     */
    inline bool EyeglassesHasBeenSet() const { return m_eyeglassesHasBeenSet; }

    /**
     * <p>Indicates whether or not the face is wearing eye glasses, and the confidence
     * level in the determination.</p>
     */
    inline void SetEyeglasses(const Eyeglasses& value) { m_eyeglassesHasBeenSet = true; m_eyeglasses = value; }

    /**
     * <p>Indicates whether or not the face is wearing eye glasses, and the confidence
     * level in the determination.</p>
     */
    inline void SetEyeglasses(Eyeglasses&& value) { m_eyeglassesHasBeenSet = true; m_eyeglasses = std::move(value); }

    /**
     * <p>Indicates whether or not the face is wearing eye glasses, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithEyeglasses(const Eyeglasses& value) { SetEyeglasses(value); return *this;}

    /**
     * <p>Indicates whether or not the face is wearing eye glasses, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithEyeglasses(Eyeglasses&& value) { SetEyeglasses(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not the face is wearing sunglasses, and the confidence
     * level in the determination.</p>
     */
    inline const Sunglasses& GetSunglasses() const{ return m_sunglasses; }

    /**
     * <p>Indicates whether or not the face is wearing sunglasses, and the confidence
     * level in the determination.</p>
     */
    inline bool SunglassesHasBeenSet() const { return m_sunglassesHasBeenSet; }

    /**
     * <p>Indicates whether or not the face is wearing sunglasses, and the confidence
     * level in the determination.</p>
     */
    inline void SetSunglasses(const Sunglasses& value) { m_sunglassesHasBeenSet = true; m_sunglasses = value; }

    /**
     * <p>Indicates whether or not the face is wearing sunglasses, and the confidence
     * level in the determination.</p>
     */
    inline void SetSunglasses(Sunglasses&& value) { m_sunglassesHasBeenSet = true; m_sunglasses = std::move(value); }

    /**
     * <p>Indicates whether or not the face is wearing sunglasses, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithSunglasses(const Sunglasses& value) { SetSunglasses(value); return *this;}

    /**
     * <p>Indicates whether or not the face is wearing sunglasses, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithSunglasses(Sunglasses&& value) { SetSunglasses(std::move(value)); return *this;}


    /**
     * <p>The predicted gender of a detected face. </p>
     */
    inline const Gender& GetGender() const{ return m_gender; }

    /**
     * <p>The predicted gender of a detected face. </p>
     */
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }

    /**
     * <p>The predicted gender of a detected face. </p>
     */
    inline void SetGender(const Gender& value) { m_genderHasBeenSet = true; m_gender = value; }

    /**
     * <p>The predicted gender of a detected face. </p>
     */
    inline void SetGender(Gender&& value) { m_genderHasBeenSet = true; m_gender = std::move(value); }

    /**
     * <p>The predicted gender of a detected face. </p>
     */
    inline FaceDetail& WithGender(const Gender& value) { SetGender(value); return *this;}

    /**
     * <p>The predicted gender of a detected face. </p>
     */
    inline FaceDetail& WithGender(Gender&& value) { SetGender(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not the face has a beard, and the confidence level in
     * the determination.</p>
     */
    inline const Beard& GetBeard() const{ return m_beard; }

    /**
     * <p>Indicates whether or not the face has a beard, and the confidence level in
     * the determination.</p>
     */
    inline bool BeardHasBeenSet() const { return m_beardHasBeenSet; }

    /**
     * <p>Indicates whether or not the face has a beard, and the confidence level in
     * the determination.</p>
     */
    inline void SetBeard(const Beard& value) { m_beardHasBeenSet = true; m_beard = value; }

    /**
     * <p>Indicates whether or not the face has a beard, and the confidence level in
     * the determination.</p>
     */
    inline void SetBeard(Beard&& value) { m_beardHasBeenSet = true; m_beard = std::move(value); }

    /**
     * <p>Indicates whether or not the face has a beard, and the confidence level in
     * the determination.</p>
     */
    inline FaceDetail& WithBeard(const Beard& value) { SetBeard(value); return *this;}

    /**
     * <p>Indicates whether or not the face has a beard, and the confidence level in
     * the determination.</p>
     */
    inline FaceDetail& WithBeard(Beard&& value) { SetBeard(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not the face has a mustache, and the confidence level in
     * the determination.</p>
     */
    inline const Mustache& GetMustache() const{ return m_mustache; }

    /**
     * <p>Indicates whether or not the face has a mustache, and the confidence level in
     * the determination.</p>
     */
    inline bool MustacheHasBeenSet() const { return m_mustacheHasBeenSet; }

    /**
     * <p>Indicates whether or not the face has a mustache, and the confidence level in
     * the determination.</p>
     */
    inline void SetMustache(const Mustache& value) { m_mustacheHasBeenSet = true; m_mustache = value; }

    /**
     * <p>Indicates whether or not the face has a mustache, and the confidence level in
     * the determination.</p>
     */
    inline void SetMustache(Mustache&& value) { m_mustacheHasBeenSet = true; m_mustache = std::move(value); }

    /**
     * <p>Indicates whether or not the face has a mustache, and the confidence level in
     * the determination.</p>
     */
    inline FaceDetail& WithMustache(const Mustache& value) { SetMustache(value); return *this;}

    /**
     * <p>Indicates whether or not the face has a mustache, and the confidence level in
     * the determination.</p>
     */
    inline FaceDetail& WithMustache(Mustache&& value) { SetMustache(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not the eyes on the face are open, and the confidence
     * level in the determination.</p>
     */
    inline const EyeOpen& GetEyesOpen() const{ return m_eyesOpen; }

    /**
     * <p>Indicates whether or not the eyes on the face are open, and the confidence
     * level in the determination.</p>
     */
    inline bool EyesOpenHasBeenSet() const { return m_eyesOpenHasBeenSet; }

    /**
     * <p>Indicates whether or not the eyes on the face are open, and the confidence
     * level in the determination.</p>
     */
    inline void SetEyesOpen(const EyeOpen& value) { m_eyesOpenHasBeenSet = true; m_eyesOpen = value; }

    /**
     * <p>Indicates whether or not the eyes on the face are open, and the confidence
     * level in the determination.</p>
     */
    inline void SetEyesOpen(EyeOpen&& value) { m_eyesOpenHasBeenSet = true; m_eyesOpen = std::move(value); }

    /**
     * <p>Indicates whether or not the eyes on the face are open, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithEyesOpen(const EyeOpen& value) { SetEyesOpen(value); return *this;}

    /**
     * <p>Indicates whether or not the eyes on the face are open, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithEyesOpen(EyeOpen&& value) { SetEyesOpen(std::move(value)); return *this;}


    /**
     * <p>Indicates whether or not the mouth on the face is open, and the confidence
     * level in the determination.</p>
     */
    inline const MouthOpen& GetMouthOpen() const{ return m_mouthOpen; }

    /**
     * <p>Indicates whether or not the mouth on the face is open, and the confidence
     * level in the determination.</p>
     */
    inline bool MouthOpenHasBeenSet() const { return m_mouthOpenHasBeenSet; }

    /**
     * <p>Indicates whether or not the mouth on the face is open, and the confidence
     * level in the determination.</p>
     */
    inline void SetMouthOpen(const MouthOpen& value) { m_mouthOpenHasBeenSet = true; m_mouthOpen = value; }

    /**
     * <p>Indicates whether or not the mouth on the face is open, and the confidence
     * level in the determination.</p>
     */
    inline void SetMouthOpen(MouthOpen&& value) { m_mouthOpenHasBeenSet = true; m_mouthOpen = std::move(value); }

    /**
     * <p>Indicates whether or not the mouth on the face is open, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithMouthOpen(const MouthOpen& value) { SetMouthOpen(value); return *this;}

    /**
     * <p>Indicates whether or not the mouth on the face is open, and the confidence
     * level in the determination.</p>
     */
    inline FaceDetail& WithMouthOpen(MouthOpen&& value) { SetMouthOpen(std::move(value)); return *this;}


    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline const Aws::Vector<Emotion>& GetEmotions() const{ return m_emotions; }

    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline bool EmotionsHasBeenSet() const { return m_emotionsHasBeenSet; }

    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline void SetEmotions(const Aws::Vector<Emotion>& value) { m_emotionsHasBeenSet = true; m_emotions = value; }

    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline void SetEmotions(Aws::Vector<Emotion>&& value) { m_emotionsHasBeenSet = true; m_emotions = std::move(value); }

    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline FaceDetail& WithEmotions(const Aws::Vector<Emotion>& value) { SetEmotions(value); return *this;}

    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline FaceDetail& WithEmotions(Aws::Vector<Emotion>&& value) { SetEmotions(std::move(value)); return *this;}

    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline FaceDetail& AddEmotions(const Emotion& value) { m_emotionsHasBeenSet = true; m_emotions.push_back(value); return *this; }

    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline FaceDetail& AddEmotions(Emotion&& value) { m_emotionsHasBeenSet = true; m_emotions.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline const Aws::Vector<Landmark>& GetLandmarks() const{ return m_landmarks; }

    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline bool LandmarksHasBeenSet() const { return m_landmarksHasBeenSet; }

    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline void SetLandmarks(const Aws::Vector<Landmark>& value) { m_landmarksHasBeenSet = true; m_landmarks = value; }

    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline void SetLandmarks(Aws::Vector<Landmark>&& value) { m_landmarksHasBeenSet = true; m_landmarks = std::move(value); }

    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline FaceDetail& WithLandmarks(const Aws::Vector<Landmark>& value) { SetLandmarks(value); return *this;}

    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline FaceDetail& WithLandmarks(Aws::Vector<Landmark>&& value) { SetLandmarks(std::move(value)); return *this;}

    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline FaceDetail& AddLandmarks(const Landmark& value) { m_landmarksHasBeenSet = true; m_landmarks.push_back(value); return *this; }

    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline FaceDetail& AddLandmarks(Landmark&& value) { m_landmarksHasBeenSet = true; m_landmarks.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.
     * Default attribute.</p>
     */
    inline const Pose& GetPose() const{ return m_pose; }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.
     * Default attribute.</p>
     */
    inline bool PoseHasBeenSet() const { return m_poseHasBeenSet; }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.
     * Default attribute.</p>
     */
    inline void SetPose(const Pose& value) { m_poseHasBeenSet = true; m_pose = value; }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.
     * Default attribute.</p>
     */
    inline void SetPose(Pose&& value) { m_poseHasBeenSet = true; m_pose = std::move(value); }

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.
     * Default attribute.</p>
     */
    inline FaceDetail& WithPose(const Pose& value) { SetPose(value); return *this;}

    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.
     * Default attribute.</p>
     */
    inline FaceDetail& WithPose(Pose&& value) { SetPose(std::move(value)); return *this;}


    /**
     * <p>Identifies image brightness and sharpness. Default attribute.</p>
     */
    inline const ImageQuality& GetQuality() const{ return m_quality; }

    /**
     * <p>Identifies image brightness and sharpness. Default attribute.</p>
     */
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }

    /**
     * <p>Identifies image brightness and sharpness. Default attribute.</p>
     */
    inline void SetQuality(const ImageQuality& value) { m_qualityHasBeenSet = true; m_quality = value; }

    /**
     * <p>Identifies image brightness and sharpness. Default attribute.</p>
     */
    inline void SetQuality(ImageQuality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }

    /**
     * <p>Identifies image brightness and sharpness. Default attribute.</p>
     */
    inline FaceDetail& WithQuality(const ImageQuality& value) { SetQuality(value); return *this;}

    /**
     * <p>Identifies image brightness and sharpness. Default attribute.</p>
     */
    inline FaceDetail& WithQuality(ImageQuality&& value) { SetQuality(std::move(value)); return *this;}


    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree). Default attribute.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree). Default attribute.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree). Default attribute.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree). Default attribute.</p>
     */
    inline FaceDetail& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    AgeRange m_ageRange;
    bool m_ageRangeHasBeenSet = false;

    Smile m_smile;
    bool m_smileHasBeenSet = false;

    Eyeglasses m_eyeglasses;
    bool m_eyeglassesHasBeenSet = false;

    Sunglasses m_sunglasses;
    bool m_sunglassesHasBeenSet = false;

    Gender m_gender;
    bool m_genderHasBeenSet = false;

    Beard m_beard;
    bool m_beardHasBeenSet = false;

    Mustache m_mustache;
    bool m_mustacheHasBeenSet = false;

    EyeOpen m_eyesOpen;
    bool m_eyesOpenHasBeenSet = false;

    MouthOpen m_mouthOpen;
    bool m_mouthOpenHasBeenSet = false;

    Aws::Vector<Emotion> m_emotions;
    bool m_emotionsHasBeenSet = false;

    Aws::Vector<Landmark> m_landmarks;
    bool m_landmarksHasBeenSet = false;

    Pose m_pose;
    bool m_poseHasBeenSet = false;

    ImageQuality m_quality;
    bool m_qualityHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
