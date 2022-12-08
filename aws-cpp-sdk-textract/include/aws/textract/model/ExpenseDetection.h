/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/Geometry.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>An object used to store information about the Value or Label detected by
   * Amazon Textract.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseDetection">AWS
   * API Reference</a></p>
   */
  class ExpenseDetection
  {
  public:
    AWS_TEXTRACT_API ExpenseDetection();
    AWS_TEXTRACT_API ExpenseDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API ExpenseDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline ExpenseDetection& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline ExpenseDetection& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The word or line of text recognized by Amazon Textract</p>
     */
    inline ExpenseDetection& WithText(const char* value) { SetText(value); return *this;}


    
    inline const Geometry& GetGeometry() const{ return m_geometry; }

    
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    
    inline void SetGeometry(const Geometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    
    inline void SetGeometry(Geometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    
    inline ExpenseDetection& WithGeometry(const Geometry& value) { SetGeometry(value); return *this;}

    
    inline ExpenseDetection& WithGeometry(Geometry&& value) { SetGeometry(std::move(value)); return *this;}


    /**
     * <p>The confidence in detection, as a percentage</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence in detection, as a percentage</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence in detection, as a percentage</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence in detection, as a percentage</p>
     */
    inline ExpenseDetection& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Geometry m_geometry;
    bool m_geometryHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
