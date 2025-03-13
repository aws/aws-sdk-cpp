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
   * <p>Information about the submit automated evaluation action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SubmitAutoEvaluationActionDefinition">AWS
   * API Reference</a></p>
   */
  class SubmitAutoEvaluationActionDefinition
  {
  public:
    AWS_CONNECT_API SubmitAutoEvaluationActionDefinition() = default;
    AWS_CONNECT_API SubmitAutoEvaluationActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SubmitAutoEvaluationActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the auto-evaluation enabled form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const { return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    template<typename EvaluationFormIdT = Aws::String>
    void SetEvaluationFormId(EvaluationFormIdT&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::forward<EvaluationFormIdT>(value); }
    template<typename EvaluationFormIdT = Aws::String>
    SubmitAutoEvaluationActionDefinition& WithEvaluationFormId(EvaluationFormIdT&& value) { SetEvaluationFormId(std::forward<EvaluationFormIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
