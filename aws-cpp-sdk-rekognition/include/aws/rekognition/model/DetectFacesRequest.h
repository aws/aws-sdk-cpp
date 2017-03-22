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
  class AWS_REKOGNITION_API DetectFacesRequest : public RekognitionRequest
  {
  public:
    DetectFacesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The image in which you want to detect faces. You can specify a blob or an S3
     * object. </p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>The image in which you want to detect faces. You can specify a blob or an S3
     * object. </p>
     */
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image in which you want to detect faces. You can specify a blob or an S3
     * object. </p>
     */
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image in which you want to detect faces. You can specify a blob or an S3
     * object. </p>
     */
    inline DetectFacesRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>The image in which you want to detect faces. You can specify a blob or an S3
     * object. </p>
     */
    inline DetectFacesRequest& WithImage(Image&& value) { SetImage(value); return *this;}

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
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

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
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

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
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

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
    inline DetectFacesRequest& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

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
    inline DetectFacesRequest& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(value); return *this;}

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
    inline DetectFacesRequest& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

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
    inline DetectFacesRequest& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

  private:
    Image m_image;
    bool m_imageHasBeenSet;
    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
