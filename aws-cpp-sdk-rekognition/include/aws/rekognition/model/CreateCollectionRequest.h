/*
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

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API CreateCollectionRequest : public RekognitionRequest
  {
  public:
    CreateCollectionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID for the collection that you are creating.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>ID for the collection that you are creating.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID for the collection that you are creating.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID for the collection that you are creating.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>ID for the collection that you are creating.</p>
     */
    inline CreateCollectionRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID for the collection that you are creating.</p>
     */
    inline CreateCollectionRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID for the collection that you are creating.</p>
     */
    inline CreateCollectionRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}

  private:
    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
