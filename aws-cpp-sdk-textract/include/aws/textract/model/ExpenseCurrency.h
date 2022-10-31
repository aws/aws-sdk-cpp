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
   * <p>Returns the kind of currency detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseCurrency">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API ExpenseCurrency
  {
  public:
    ExpenseCurrency();
    ExpenseCurrency(Aws::Utils::Json::JsonView jsonValue);
    ExpenseCurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Currency code for detected currency.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Currency code for detected currency.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Currency code for detected currency.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Currency code for detected currency.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Currency code for detected currency.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Currency code for detected currency.</p>
     */
    inline ExpenseCurrency& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Currency code for detected currency.</p>
     */
    inline ExpenseCurrency& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Currency code for detected currency.</p>
     */
    inline ExpenseCurrency& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Percentage confideence in the detected currency.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Percentage confideence in the detected currency.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Percentage confideence in the detected currency.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Percentage confideence in the detected currency.</p>
     */
    inline ExpenseCurrency& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
