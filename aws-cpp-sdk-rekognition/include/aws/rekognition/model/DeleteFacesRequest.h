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
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API DeleteFacesRequest : public RekognitionRequest
  {
  public:
    DeleteFacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline DeleteFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline DeleteFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(value); return *this;}

    /**
     * <p>Collection from which to remove the specific faces.</p>
     */
    inline DeleteFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceIds() const{ return m_faceIds; }

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline void SetFaceIds(const Aws::Vector<Aws::String>& value) { m_faceIdsHasBeenSet = true; m_faceIds = value; }

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline void SetFaceIds(Aws::Vector<Aws::String>&& value) { m_faceIdsHasBeenSet = true; m_faceIds = value; }

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline DeleteFacesRequest& WithFaceIds(const Aws::Vector<Aws::String>& value) { SetFaceIds(value); return *this;}

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline DeleteFacesRequest& WithFaceIds(Aws::Vector<Aws::String>&& value) { SetFaceIds(value); return *this;}

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline DeleteFacesRequest& AddFaceIds(const Aws::String& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline DeleteFacesRequest& AddFaceIds(Aws::String&& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }

    /**
     * <p>An array of face IDs to delete.</p>
     */
    inline DeleteFacesRequest& AddFaceIds(const char* value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }

  private:
    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet;
    Aws::Vector<Aws::String> m_faceIds;
    bool m_faceIdsHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
