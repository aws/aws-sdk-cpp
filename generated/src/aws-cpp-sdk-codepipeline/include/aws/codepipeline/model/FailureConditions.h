/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/Result.h>
#include <aws/codepipeline/model/RetryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/Condition.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The configuration that specifies the result, such as rollback, to occur upon
   * stage failure. For more information about conditions, see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/stage-conditions.html">Stage
   * conditions</a> and <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/concepts-how-it-works-conditions.html">How
   * do stage conditions work?</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/FailureConditions">AWS
   * API Reference</a></p>
   */
  class FailureConditions
  {
  public:
    AWS_CODEPIPELINE_API FailureConditions() = default;
    AWS_CODEPIPELINE_API FailureConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API FailureConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline Result GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(Result value) { m_resultHasBeenSet = true; m_result = value; }
    inline FailureConditions& WithResult(Result value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry configuration specifies automatic retry for a failed stage, along
     * with the configured retry mode.</p>
     */
    inline const RetryConfiguration& GetRetryConfiguration() const { return m_retryConfiguration; }
    inline bool RetryConfigurationHasBeenSet() const { return m_retryConfigurationHasBeenSet; }
    template<typename RetryConfigurationT = RetryConfiguration>
    void SetRetryConfiguration(RetryConfigurationT&& value) { m_retryConfigurationHasBeenSet = true; m_retryConfiguration = std::forward<RetryConfigurationT>(value); }
    template<typename RetryConfigurationT = RetryConfiguration>
    FailureConditions& WithRetryConfiguration(RetryConfigurationT&& value) { SetRetryConfiguration(std::forward<RetryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions that are configured as failure conditions. For more
     * information about conditions, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/stage-conditions.html">Stage
     * conditions</a> and <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/concepts-how-it-works-conditions.html">How
     * do stage conditions work?</a>.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<Condition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<Condition>>
    FailureConditions& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = Condition>
    FailureConditions& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}
  private:

    Result m_result{Result::NOT_SET};
    bool m_resultHasBeenSet = false;

    RetryConfiguration m_retryConfiguration;
    bool m_retryConfigurationHasBeenSet = false;

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
