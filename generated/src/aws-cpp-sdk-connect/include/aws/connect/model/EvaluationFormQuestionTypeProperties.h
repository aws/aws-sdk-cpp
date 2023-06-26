/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormNumericQuestionProperties.h>
#include <aws/connect/model/EvaluationFormSingleSelectQuestionProperties.h>
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
   * <p>Information about properties for a question in an evaluation form. The
   * question type properties must be either for a numeric question or a single
   * select question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormQuestionTypeProperties">AWS
   * API Reference</a></p>
   */
  class EvaluationFormQuestionTypeProperties
  {
  public:
    AWS_CONNECT_API EvaluationFormQuestionTypeProperties();
    AWS_CONNECT_API EvaluationFormQuestionTypeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormQuestionTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The properties of the numeric question.</p>
     */
    inline const EvaluationFormNumericQuestionProperties& GetNumeric() const{ return m_numeric; }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline bool NumericHasBeenSet() const { return m_numericHasBeenSet; }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline void SetNumeric(const EvaluationFormNumericQuestionProperties& value) { m_numericHasBeenSet = true; m_numeric = value; }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline void SetNumeric(EvaluationFormNumericQuestionProperties&& value) { m_numericHasBeenSet = true; m_numeric = std::move(value); }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline EvaluationFormQuestionTypeProperties& WithNumeric(const EvaluationFormNumericQuestionProperties& value) { SetNumeric(value); return *this;}

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline EvaluationFormQuestionTypeProperties& WithNumeric(EvaluationFormNumericQuestionProperties&& value) { SetNumeric(std::move(value)); return *this;}


    /**
     * <p>The properties of the numeric question.</p>
     */
    inline const EvaluationFormSingleSelectQuestionProperties& GetSingleSelect() const{ return m_singleSelect; }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline bool SingleSelectHasBeenSet() const { return m_singleSelectHasBeenSet; }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline void SetSingleSelect(const EvaluationFormSingleSelectQuestionProperties& value) { m_singleSelectHasBeenSet = true; m_singleSelect = value; }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline void SetSingleSelect(EvaluationFormSingleSelectQuestionProperties&& value) { m_singleSelectHasBeenSet = true; m_singleSelect = std::move(value); }

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline EvaluationFormQuestionTypeProperties& WithSingleSelect(const EvaluationFormSingleSelectQuestionProperties& value) { SetSingleSelect(value); return *this;}

    /**
     * <p>The properties of the numeric question.</p>
     */
    inline EvaluationFormQuestionTypeProperties& WithSingleSelect(EvaluationFormSingleSelectQuestionProperties&& value) { SetSingleSelect(std::move(value)); return *this;}

  private:

    EvaluationFormNumericQuestionProperties m_numeric;
    bool m_numericHasBeenSet = false;

    EvaluationFormSingleSelectQuestionProperties m_singleSelect;
    bool m_singleSelectHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
