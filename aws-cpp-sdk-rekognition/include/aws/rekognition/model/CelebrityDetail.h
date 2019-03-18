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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/rekognition/model/FaceDetail.h>
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
   * <p>Information about a recognized celebrity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CelebrityDetail">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API CelebrityDetail
  {
  public:
    CelebrityDetail();
    CelebrityDetail(Aws::Utils::Json::JsonView jsonValue);
    CelebrityDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const{ return m_urls; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline void SetUrls(const Aws::Vector<Aws::String>& value) { m_urlsHasBeenSet = true; m_urls = value; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline void SetUrls(Aws::Vector<Aws::String>&& value) { m_urlsHasBeenSet = true; m_urls = std::move(value); }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline CelebrityDetail& WithUrls(const Aws::Vector<Aws::String>& value) { SetUrls(value); return *this;}

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline CelebrityDetail& WithUrls(Aws::Vector<Aws::String>&& value) { SetUrls(std::move(value)); return *this;}

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline CelebrityDetail& AddUrls(const Aws::String& value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline CelebrityDetail& AddUrls(Aws::String&& value) { m_urlsHasBeenSet = true; m_urls.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline CelebrityDetail& AddUrls(const char* value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }


    /**
     * <p>The name of the celebrity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline CelebrityDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the celebrity.</p>
     */
    inline CelebrityDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the celebrity.</p>
     */
    inline CelebrityDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline CelebrityDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline CelebrityDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the celebrity. </p>
     */
    inline CelebrityDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity. </p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity. </p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity. </p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence, in percentage, that Amazon Rekognition has that the
     * recognized face is the celebrity. </p>
     */
    inline CelebrityDetail& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline CelebrityDetail& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>Bounding box around the body of a celebrity.</p>
     */
    inline CelebrityDetail& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline const FaceDetail& GetFace() const{ return m_face; }

    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }

    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline void SetFace(const FaceDetail& value) { m_faceHasBeenSet = true; m_face = value; }

    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline void SetFace(FaceDetail&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline CelebrityDetail& WithFace(const FaceDetail& value) { SetFace(value); return *this;}

    /**
     * <p>Face details for the recognized celebrity.</p>
     */
    inline CelebrityDetail& WithFace(FaceDetail&& value) { SetFace(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet;

    FaceDetail m_face;
    bool m_faceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
