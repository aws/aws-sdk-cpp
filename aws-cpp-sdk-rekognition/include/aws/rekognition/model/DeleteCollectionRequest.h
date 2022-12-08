/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteCollectionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DeleteCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCollection"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the collection to delete.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>ID of the collection to delete.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>ID of the collection to delete.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID of the collection to delete.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>ID of the collection to delete.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>ID of the collection to delete.</p>
     */
    inline DeleteCollectionRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID of the collection to delete.</p>
     */
    inline DeleteCollectionRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>ID of the collection to delete.</p>
     */
    inline DeleteCollectionRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
