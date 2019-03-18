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
#include <aws/rekognition/model/TextTypes.h>
#include <aws/rekognition/model/Geometry.h>
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
   * <p>Information about a word or line of text detected by <a>DetectText</a>.</p>
   * <p>The <code>DetectedText</code> field contains the text that Amazon Rekognition
   * detected in the image. </p> <p>Every word and line has an identifier
   * (<code>Id</code>). Each word belongs to a line and has a parent identifier
   * (<code>ParentId</code>) that identifies the line of text in which the word
   * appears. The word <code>Id</code> is also an index for the word within a line of
   * words. </p> <p>For more information, see Detecting Text in the Amazon
   * Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TextDetection">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API TextDetection
  {
  public:
    TextDetection();
    TextDetection(Aws::Utils::Json::JsonView jsonValue);
    TextDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline const Aws::String& GetDetectedText() const{ return m_detectedText; }

    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline bool DetectedTextHasBeenSet() const { return m_detectedTextHasBeenSet; }

    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline void SetDetectedText(const Aws::String& value) { m_detectedTextHasBeenSet = true; m_detectedText = value; }

    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline void SetDetectedText(Aws::String&& value) { m_detectedTextHasBeenSet = true; m_detectedText = std::move(value); }

    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline void SetDetectedText(const char* value) { m_detectedTextHasBeenSet = true; m_detectedText.assign(value); }

    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline TextDetection& WithDetectedText(const Aws::String& value) { SetDetectedText(value); return *this;}

    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline TextDetection& WithDetectedText(Aws::String&& value) { SetDetectedText(std::move(value)); return *this;}

    /**
     * <p>The word or line of text recognized by Amazon Rekognition. </p>
     */
    inline TextDetection& WithDetectedText(const char* value) { SetDetectedText(value); return *this;}


    /**
     * <p>The type of text that was detected.</p>
     */
    inline const TextTypes& GetType() const{ return m_type; }

    /**
     * <p>The type of text that was detected.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of text that was detected.</p>
     */
    inline void SetType(const TextTypes& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of text that was detected.</p>
     */
    inline void SetType(TextTypes&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of text that was detected.</p>
     */
    inline TextDetection& WithType(const TextTypes& value) { SetType(value); return *this;}

    /**
     * <p>The type of text that was detected.</p>
     */
    inline TextDetection& WithType(TextTypes&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The identifier for the detected text. The identifier is only unique for a
     * single call to <code>DetectText</code>. </p>
     */
    inline int GetId() const{ return m_id; }

    /**
     * <p>The identifier for the detected text. The identifier is only unique for a
     * single call to <code>DetectText</code>. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the detected text. The identifier is only unique for a
     * single call to <code>DetectText</code>. </p>
     */
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the detected text. The identifier is only unique for a
     * single call to <code>DetectText</code>. </p>
     */
    inline TextDetection& WithId(int value) { SetId(value); return *this;}


    /**
     * <p>The Parent identifier for the detected text identified by the value of
     * <code>ID</code>. If the type of detected text is <code>LINE</code>, the value of
     * <code>ParentId</code> is <code>Null</code>. </p>
     */
    inline int GetParentId() const{ return m_parentId; }

    /**
     * <p>The Parent identifier for the detected text identified by the value of
     * <code>ID</code>. If the type of detected text is <code>LINE</code>, the value of
     * <code>ParentId</code> is <code>Null</code>. </p>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>The Parent identifier for the detected text identified by the value of
     * <code>ID</code>. If the type of detected text is <code>LINE</code>, the value of
     * <code>ParentId</code> is <code>Null</code>. </p>
     */
    inline void SetParentId(int value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The Parent identifier for the detected text identified by the value of
     * <code>ID</code>. If the type of detected text is <code>LINE</code>, the value of
     * <code>ParentId</code> is <code>Null</code>. </p>
     */
    inline TextDetection& WithParentId(int value) { SetParentId(value); return *this;}


    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the detected
     * text and the accuracy of the geometry points around the detected text.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the detected
     * text and the accuracy of the geometry points around the detected text.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the detected
     * text and the accuracy of the geometry points around the detected text.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the detected
     * text and the accuracy of the geometry points around the detected text.</p>
     */
    inline TextDetection& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>The location of the detected text on the image. Includes an axis aligned
     * coarse bounding box surrounding the text and a finer grain polygon for more
     * accurate spatial information.</p>
     */
    inline const Geometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>The location of the detected text on the image. Includes an axis aligned
     * coarse bounding box surrounding the text and a finer grain polygon for more
     * accurate spatial information.</p>
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p>The location of the detected text on the image. Includes an axis aligned
     * coarse bounding box surrounding the text and a finer grain polygon for more
     * accurate spatial information.</p>
     */
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p>The location of the detected text on the image. Includes an axis aligned
     * coarse bounding box surrounding the text and a finer grain polygon for more
     * accurate spatial information.</p>
     */
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p>The location of the detected text on the image. Includes an axis aligned
     * coarse bounding box surrounding the text and a finer grain polygon for more
     * accurate spatial information.</p>
     */
    inline TextDetection& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>The location of the detected text on the image. Includes an axis aligned
     * coarse bounding box surrounding the text and a finer grain polygon for more
     * accurate spatial information.</p>
     */
    inline TextDetection& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}

  private:

    Aws::String m_detectedText;
    bool m_detectedTextHasBeenSet;

    TextTypes m_type;
    bool m_typeHasBeenSet;

    int m_id;
    bool m_idHasBeenSet;

    int m_parentId;
    bool m_parentIdHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;

    Geometry m_geometry;
    bool m_geometryHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
