/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Input face recognition parameters for an Amazon Rekognition stream processor.
   * Includes the collection to use for face recognition and the face attributes to
   * detect. Defining the settings is required in the request parameter for
   * <a>CreateStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceSearchSettings">AWS
   * API Reference</a></p>
   */
  class FaceSearchSettings
  {
  public:
    AWS_REKOGNITION_API FaceSearchSettings();
    AWS_REKOGNITION_API FaceSearchSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceSearchSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline FaceSearchSettings& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline FaceSearchSettings& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a collection that contains faces that you want to search for.</p>
     */
    inline FaceSearchSettings& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>Minimum face match confidence score that must be met to return a result for a
     * recognized face. The default is 80. 0 is the lowest confidence. 100 is the
     * highest confidence. Values between 0 and 100 are accepted, and values lower than
     * 80 are set to 80.</p>
     */
    inline double GetFaceMatchThreshold() const{ return m_faceMatchThreshold; }

    /**
     * <p>Minimum face match confidence score that must be met to return a result for a
     * recognized face. The default is 80. 0 is the lowest confidence. 100 is the
     * highest confidence. Values between 0 and 100 are accepted, and values lower than
     * 80 are set to 80.</p>
     */
    inline bool FaceMatchThresholdHasBeenSet() const { return m_faceMatchThresholdHasBeenSet; }

    /**
     * <p>Minimum face match confidence score that must be met to return a result for a
     * recognized face. The default is 80. 0 is the lowest confidence. 100 is the
     * highest confidence. Values between 0 and 100 are accepted, and values lower than
     * 80 are set to 80.</p>
     */
    inline void SetFaceMatchThreshold(double value) { m_faceMatchThresholdHasBeenSet = true; m_faceMatchThreshold = value; }

    /**
     * <p>Minimum face match confidence score that must be met to return a result for a
     * recognized face. The default is 80. 0 is the lowest confidence. 100 is the
     * highest confidence. Values between 0 and 100 are accepted, and values lower than
     * 80 are set to 80.</p>
     */
    inline FaceSearchSettings& WithFaceMatchThreshold(double value) { SetFaceMatchThreshold(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    double m_faceMatchThreshold;
    bool m_faceMatchThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
