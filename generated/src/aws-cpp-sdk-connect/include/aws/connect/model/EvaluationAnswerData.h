/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about answer data for a contact evaluation. Answer data must be
   * either string, numeric, or not applicable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationAnswerData">AWS
   * API Reference</a></p>
   */
  class EvaluationAnswerData
  {
  public:
    AWS_CONNECT_API EvaluationAnswerData();
    AWS_CONNECT_API EvaluationAnswerData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationAnswerData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerData& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerData& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>The string value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerData& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>The numeric value for an answer in a contact evaluation.</p>
     */
    inline double GetNumericValue() const{ return m_numericValue; }

    /**
     * <p>The numeric value for an answer in a contact evaluation.</p>
     */
    inline bool NumericValueHasBeenSet() const { return m_numericValueHasBeenSet; }

    /**
     * <p>The numeric value for an answer in a contact evaluation.</p>
     */
    inline void SetNumericValue(double value) { m_numericValueHasBeenSet = true; m_numericValue = value; }

    /**
     * <p>The numeric value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerData& WithNumericValue(double value) { SetNumericValue(value); return *this;}


    /**
     * <p>The flag to mark the question as not applicable.</p>
     */
    inline bool GetNotApplicable() const{ return m_notApplicable; }

    /**
     * <p>The flag to mark the question as not applicable.</p>
     */
    inline bool NotApplicableHasBeenSet() const { return m_notApplicableHasBeenSet; }

    /**
     * <p>The flag to mark the question as not applicable.</p>
     */
    inline void SetNotApplicable(bool value) { m_notApplicableHasBeenSet = true; m_notApplicable = value; }

    /**
     * <p>The flag to mark the question as not applicable.</p>
     */
    inline EvaluationAnswerData& WithNotApplicable(bool value) { SetNotApplicable(value); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    double m_numericValue;
    bool m_numericValueHasBeenSet = false;

    bool m_notApplicable;
    bool m_notApplicableHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
