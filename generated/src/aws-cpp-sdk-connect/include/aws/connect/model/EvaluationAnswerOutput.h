/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationAnswerData.h>
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
   * <p>Information about output answers for a contact evaluation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationAnswerOutput">AWS
   * API Reference</a></p>
   */
  class EvaluationAnswerOutput
  {
  public:
    AWS_CONNECT_API EvaluationAnswerOutput();
    AWS_CONNECT_API EvaluationAnswerOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationAnswerOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value for an answer in a contact evaluation.</p>
     */
    inline const EvaluationAnswerData& GetValue() const{ return m_value; }

    /**
     * <p>The value for an answer in a contact evaluation.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for an answer in a contact evaluation.</p>
     */
    inline void SetValue(const EvaluationAnswerData& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for an answer in a contact evaluation.</p>
     */
    inline void SetValue(EvaluationAnswerData&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerOutput& WithValue(const EvaluationAnswerData& value) { SetValue(value); return *this;}

    /**
     * <p>The value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerOutput& WithValue(EvaluationAnswerData&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The system suggested value for an answer in a contact evaluation.</p>
     */
    inline const EvaluationAnswerData& GetSystemSuggestedValue() const{ return m_systemSuggestedValue; }

    /**
     * <p>The system suggested value for an answer in a contact evaluation.</p>
     */
    inline bool SystemSuggestedValueHasBeenSet() const { return m_systemSuggestedValueHasBeenSet; }

    /**
     * <p>The system suggested value for an answer in a contact evaluation.</p>
     */
    inline void SetSystemSuggestedValue(const EvaluationAnswerData& value) { m_systemSuggestedValueHasBeenSet = true; m_systemSuggestedValue = value; }

    /**
     * <p>The system suggested value for an answer in a contact evaluation.</p>
     */
    inline void SetSystemSuggestedValue(EvaluationAnswerData&& value) { m_systemSuggestedValueHasBeenSet = true; m_systemSuggestedValue = std::move(value); }

    /**
     * <p>The system suggested value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerOutput& WithSystemSuggestedValue(const EvaluationAnswerData& value) { SetSystemSuggestedValue(value); return *this;}

    /**
     * <p>The system suggested value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerOutput& WithSystemSuggestedValue(EvaluationAnswerData&& value) { SetSystemSuggestedValue(std::move(value)); return *this;}

  private:

    EvaluationAnswerData m_value;
    bool m_valueHasBeenSet = false;

    EvaluationAnswerData m_systemSuggestedValue;
    bool m_systemSuggestedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
