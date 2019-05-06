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
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API SearchFacesRequest : public RekognitionRequest
  {
  public:
    SearchFacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchFaces"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline SearchFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline SearchFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline SearchFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }

    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }

    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }

    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }

    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }

    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline SearchFacesRequest& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}

    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline SearchFacesRequest& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}

    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline SearchFacesRequest& WithFaceId(const char* value) { SetFaceId(value); return *this;}


    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline int GetMaxFaces() const{ return m_maxFaces; }

    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline bool MaxFacesHasBeenSet() const { return m_maxFacesHasBeenSet; }

    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline void SetMaxFaces(int value) { m_maxFacesHasBeenSet = true; m_maxFaces = value; }

    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline SearchFacesRequest& WithMaxFaces(int value) { SetMaxFaces(value); return *this;}


    /**
     * <p>Optional value specifying the minimum confidence in the face match to return.
     * For example, don't return any matches where confidence in matches is less than
     * 70%.</p>
     */
    inline double GetFaceMatchThreshold() const{ return m_faceMatchThreshold; }

    /**
     * <p>Optional value specifying the minimum confidence in the face match to return.
     * For example, don't return any matches where confidence in matches is less than
     * 70%.</p>
     */
    inline bool FaceMatchThresholdHasBeenSet() const { return m_faceMatchThresholdHasBeenSet; }

    /**
     * <p>Optional value specifying the minimum confidence in the face match to return.
     * For example, don't return any matches where confidence in matches is less than
     * 70%.</p>
     */
    inline void SetFaceMatchThreshold(double value) { m_faceMatchThresholdHasBeenSet = true; m_faceMatchThreshold = value; }

    /**
     * <p>Optional value specifying the minimum confidence in the face match to return.
     * For example, don't return any matches where confidence in matches is less than
     * 70%.</p>
     */
    inline SearchFacesRequest& WithFaceMatchThreshold(double value) { SetFaceMatchThreshold(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet;

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet;

    int m_maxFaces;
    bool m_maxFacesHasBeenSet;

    double m_faceMatchThreshold;
    bool m_faceMatchThresholdHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
