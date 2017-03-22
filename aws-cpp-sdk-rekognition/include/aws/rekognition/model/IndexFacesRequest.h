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
#include <aws/rekognition/model/Image.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Attribute.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API IndexFacesRequest : public RekognitionRequest
  {
  public:
    IndexFacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline IndexFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline IndexFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID of an existing collection to which you want to add the faces that are
     * detected in the input images.</p>
     */
    inline IndexFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}

    
    inline const Image& GetImage() const{ return m_image; }

    
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = value; }

    
    inline IndexFacesRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    
    inline IndexFacesRequest& WithImage(Image&& value) { SetImage(value); return *this;}

    /**
     * <p>ID you want to assign to all the faces detected in the image.</p>
     */
    inline const Aws::String& GetExternalImageId() const{ return m_externalImageId; }

    /**
     * <p>ID you want to assign to all the faces detected in the image.</p>
     */
    inline void SetExternalImageId(const Aws::String& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = value; }

    /**
     * <p>ID you want to assign to all the faces detected in the image.</p>
     */
    inline void SetExternalImageId(Aws::String&& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = value; }

    /**
     * <p>ID you want to assign to all the faces detected in the image.</p>
     */
    inline void SetExternalImageId(const char* value) { m_externalImageIdHasBeenSet = true; m_externalImageId.assign(value); }

    /**
     * <p>ID you want to assign to all the faces detected in the image.</p>
     */
    inline IndexFacesRequest& WithExternalImageId(const Aws::String& value) { SetExternalImageId(value); return *this;}

    /**
     * <p>ID you want to assign to all the faces detected in the image.</p>
     */
    inline IndexFacesRequest& WithExternalImageId(Aws::String&& value) { SetExternalImageId(value); return *this;}

    /**
     * <p>ID you want to assign to all the faces detected in the image.</p>
     */
    inline IndexFacesRequest& WithExternalImageId(const char* value) { SetExternalImageId(value); return *this;}

    /**
     * <p>A list of facial attributes you want to be returned. This can be the default
     * list of attributes or all attributes. If you don't specify a value for
     * <code>Attributes</code> or if you specify <code>["DEFAULT"]</code>, the API
     * returns the following subset of facial attributes: <code>BoundingBox</code>,
     * <code>Confidence</code>, <code>Pose</code>, <code>Quality</code> and
     * <code>Landmarks</code>. If you provide <code>["ALL"]</code>, all facial
     * attributes are returned but the operation will take longer to complete.</p>
     * <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service uses a
     * logical AND operator to determine which attributes to return (in this case, all
     * attributes). </p>
     */
    inline const Aws::Vector<Attribute>& GetDetectionAttributes() const{ return m_detectionAttributes; }

    /**
     * <p>A list of facial attributes you want to be returned. This can be the default
     * list of attributes or all attributes. If you don't specify a value for
     * <code>Attributes</code> or if you specify <code>["DEFAULT"]</code>, the API
     * returns the following subset of facial attributes: <code>BoundingBox</code>,
     * <code>Confidence</code>, <code>Pose</code>, <code>Quality</code> and
     * <code>Landmarks</code>. If you provide <code>["ALL"]</code>, all facial
     * attributes are returned but the operation will take longer to complete.</p>
     * <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service uses a
     * logical AND operator to determine which attributes to return (in this case, all
     * attributes). </p>
     */
    inline void SetDetectionAttributes(const Aws::Vector<Attribute>& value) { m_detectionAttributesHasBeenSet = true; m_detectionAttributes = value; }

    /**
     * <p>A list of facial attributes you want to be returned. This can be the default
     * list of attributes or all attributes. If you don't specify a value for
     * <code>Attributes</code> or if you specify <code>["DEFAULT"]</code>, the API
     * returns the following subset of facial attributes: <code>BoundingBox</code>,
     * <code>Confidence</code>, <code>Pose</code>, <code>Quality</code> and
     * <code>Landmarks</code>. If you provide <code>["ALL"]</code>, all facial
     * attributes are returned but the operation will take longer to complete.</p>
     * <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service uses a
     * logical AND operator to determine which attributes to return (in this case, all
     * attributes). </p>
     */
    inline void SetDetectionAttributes(Aws::Vector<Attribute>&& value) { m_detectionAttributesHasBeenSet = true; m_detectionAttributes = value; }

    /**
     * <p>A list of facial attributes you want to be returned. This can be the default
     * list of attributes or all attributes. If you don't specify a value for
     * <code>Attributes</code> or if you specify <code>["DEFAULT"]</code>, the API
     * returns the following subset of facial attributes: <code>BoundingBox</code>,
     * <code>Confidence</code>, <code>Pose</code>, <code>Quality</code> and
     * <code>Landmarks</code>. If you provide <code>["ALL"]</code>, all facial
     * attributes are returned but the operation will take longer to complete.</p>
     * <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service uses a
     * logical AND operator to determine which attributes to return (in this case, all
     * attributes). </p>
     */
    inline IndexFacesRequest& WithDetectionAttributes(const Aws::Vector<Attribute>& value) { SetDetectionAttributes(value); return *this;}

    /**
     * <p>A list of facial attributes you want to be returned. This can be the default
     * list of attributes or all attributes. If you don't specify a value for
     * <code>Attributes</code> or if you specify <code>["DEFAULT"]</code>, the API
     * returns the following subset of facial attributes: <code>BoundingBox</code>,
     * <code>Confidence</code>, <code>Pose</code>, <code>Quality</code> and
     * <code>Landmarks</code>. If you provide <code>["ALL"]</code>, all facial
     * attributes are returned but the operation will take longer to complete.</p>
     * <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service uses a
     * logical AND operator to determine which attributes to return (in this case, all
     * attributes). </p>
     */
    inline IndexFacesRequest& WithDetectionAttributes(Aws::Vector<Attribute>&& value) { SetDetectionAttributes(value); return *this;}

    /**
     * <p>A list of facial attributes you want to be returned. This can be the default
     * list of attributes or all attributes. If you don't specify a value for
     * <code>Attributes</code> or if you specify <code>["DEFAULT"]</code>, the API
     * returns the following subset of facial attributes: <code>BoundingBox</code>,
     * <code>Confidence</code>, <code>Pose</code>, <code>Quality</code> and
     * <code>Landmarks</code>. If you provide <code>["ALL"]</code>, all facial
     * attributes are returned but the operation will take longer to complete.</p>
     * <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service uses a
     * logical AND operator to determine which attributes to return (in this case, all
     * attributes). </p>
     */
    inline IndexFacesRequest& AddDetectionAttributes(const Attribute& value) { m_detectionAttributesHasBeenSet = true; m_detectionAttributes.push_back(value); return *this; }

    /**
     * <p>A list of facial attributes you want to be returned. This can be the default
     * list of attributes or all attributes. If you don't specify a value for
     * <code>Attributes</code> or if you specify <code>["DEFAULT"]</code>, the API
     * returns the following subset of facial attributes: <code>BoundingBox</code>,
     * <code>Confidence</code>, <code>Pose</code>, <code>Quality</code> and
     * <code>Landmarks</code>. If you provide <code>["ALL"]</code>, all facial
     * attributes are returned but the operation will take longer to complete.</p>
     * <p>If you provide both, <code>["ALL", "DEFAULT"]</code>, the service uses a
     * logical AND operator to determine which attributes to return (in this case, all
     * attributes). </p>
     */
    inline IndexFacesRequest& AddDetectionAttributes(Attribute&& value) { m_detectionAttributesHasBeenSet = true; m_detectionAttributes.push_back(value); return *this; }

  private:
    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet;
    Image m_image;
    bool m_imageHasBeenSet;
    Aws::String m_externalImageId;
    bool m_externalImageIdHasBeenSet;
    Aws::Vector<Attribute> m_detectionAttributes;
    bool m_detectionAttributesHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
