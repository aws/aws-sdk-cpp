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
   * <p>Information about input answers for a contact evaluation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationAnswerInput">AWS
   * API Reference</a></p>
   */
  class EvaluationAnswerInput
  {
  public:
    AWS_CONNECT_API EvaluationAnswerInput();
    AWS_CONNECT_API EvaluationAnswerInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationAnswerInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EvaluationAnswerInput& WithValue(const EvaluationAnswerData& value) { SetValue(value); return *this;}

    /**
     * <p>The value for an answer in a contact evaluation.</p>
     */
    inline EvaluationAnswerInput& WithValue(EvaluationAnswerData&& value) { SetValue(std::move(value)); return *this;}

  private:

    EvaluationAnswerData m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
