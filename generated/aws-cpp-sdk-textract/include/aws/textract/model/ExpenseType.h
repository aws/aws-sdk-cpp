/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>An object used to store information about the Type detected by Amazon
   * Textract.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseType">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API ExpenseType
  {
  public:
    ExpenseType();
    ExpenseType(Aws::Utils::Json::JsonView jsonValue);
    ExpenseType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline ExpenseType& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline ExpenseType& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The word or line of text detected by Amazon Textract.</p>
     */
    inline ExpenseType& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The confidence of accuracy, as a percentage.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence of accuracy, as a percentage.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence of accuracy, as a percentage.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence of accuracy, as a percentage.</p>
     */
    inline ExpenseType& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
