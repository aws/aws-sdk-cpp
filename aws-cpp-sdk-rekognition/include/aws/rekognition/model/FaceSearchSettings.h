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
   * <code>FaceRecognitionSettings</code> is a request parameter for
   * <a>CreateStreamProcessor</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceSearchSettings">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API FaceSearchSettings
  {
  public:
    FaceSearchSettings();
    FaceSearchSettings(Aws::Utils::Json::JsonView jsonValue);
    FaceSearchSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * recognized face. Default is 70. 0 is the lowest confidence. 100 is the highest
     * confidence.</p>
     */
    inline double GetFaceMatchThreshold() const{ return m_faceMatchThreshold; }

    /**
     * <p>Minimum face match confidence score that must be met to return a result for a
     * recognized face. Default is 70. 0 is the lowest confidence. 100 is the highest
     * confidence.</p>
     */
    inline bool FaceMatchThresholdHasBeenSet() const { return m_faceMatchThresholdHasBeenSet; }

    /**
     * <p>Minimum face match confidence score that must be met to return a result for a
     * recognized face. Default is 70. 0 is the lowest confidence. 100 is the highest
     * confidence.</p>
     */
    inline void SetFaceMatchThreshold(double value) { m_faceMatchThresholdHasBeenSet = true; m_faceMatchThreshold = value; }

    /**
     * <p>Minimum face match confidence score that must be met to return a result for a
     * recognized face. Default is 70. 0 is the lowest confidence. 100 is the highest
     * confidence.</p>
     */
    inline FaceSearchSettings& WithFaceMatchThreshold(double value) { SetFaceMatchThreshold(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet;

    double m_faceMatchThreshold;
    bool m_faceMatchThresholdHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
