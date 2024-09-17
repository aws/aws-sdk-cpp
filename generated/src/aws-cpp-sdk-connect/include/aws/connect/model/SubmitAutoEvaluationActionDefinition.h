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
    AWS_CONNECT_API SubmitAutoEvaluationActionDefinition();
    AWS_CONNECT_API SubmitAutoEvaluationActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SubmitAutoEvaluationActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the auto-evaluation enabled form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const{ return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    inline void SetEvaluationFormId(const Aws::String& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = value; }
    inline void SetEvaluationFormId(Aws::String&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::move(value); }
    inline void SetEvaluationFormId(const char* value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId.assign(value); }
    inline SubmitAutoEvaluationActionDefinition& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}
    inline SubmitAutoEvaluationActionDefinition& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}
    inline SubmitAutoEvaluationActionDefinition& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}
    ///@}
  private:

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
