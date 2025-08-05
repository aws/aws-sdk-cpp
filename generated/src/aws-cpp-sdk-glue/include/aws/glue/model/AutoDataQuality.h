/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies configuration options for automatic data quality evaluation in Glue
   * jobs. This structure enables automated data quality checks and monitoring during
   * ETL operations, helping to ensure data integrity and reliability without manual
   * intervention.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AutoDataQuality">AWS
   * API Reference</a></p>
   */
  class AutoDataQuality
  {
  public:
    AWS_GLUE_API AutoDataQuality() = default;
    AWS_GLUE_API AutoDataQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AutoDataQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether automatic data quality evaluation is enabled. When set to
     * <code>true</code>, data quality checks are performed automatically.</p>
     */
    inline bool GetIsEnabled() const { return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline AutoDataQuality& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation context for the automatic data quality checks. This defines
     * the scope and parameters for the data quality evaluation.</p>
     */
    inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    template<typename EvaluationContextT = Aws::String>
    void SetEvaluationContext(EvaluationContextT&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::forward<EvaluationContextT>(value); }
    template<typename EvaluationContextT = Aws::String>
    AutoDataQuality& WithEvaluationContext(EvaluationContextT&& value) { SetEvaluationContext(std::forward<EvaluationContextT>(value)); return *this;}
    ///@}
  private:

    bool m_isEnabled{false};
    bool m_isEnabledHasBeenSet = false;

    Aws::String m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
