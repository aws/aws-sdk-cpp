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
   * stage failure. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/FailureConditions">AWS
   * API Reference</a></p>
   */
  class FailureConditions
  {
  public:
    AWS_CODEPIPELINE_API FailureConditions();
    AWS_CODEPIPELINE_API FailureConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API FailureConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline const Result& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const Result& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(Result&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline FailureConditions& WithResult(const Result& value) { SetResult(value); return *this;}
    inline FailureConditions& WithResult(Result&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry configuration specifies automatic retry for a failed stage, along
     * with the configured retry mode.</p>
     */
    inline const RetryConfiguration& GetRetryConfiguration() const{ return m_retryConfiguration; }
    inline bool RetryConfigurationHasBeenSet() const { return m_retryConfigurationHasBeenSet; }
    inline void SetRetryConfiguration(const RetryConfiguration& value) { m_retryConfigurationHasBeenSet = true; m_retryConfiguration = value; }
    inline void SetRetryConfiguration(RetryConfiguration&& value) { m_retryConfigurationHasBeenSet = true; m_retryConfiguration = std::move(value); }
    inline FailureConditions& WithRetryConfiguration(const RetryConfiguration& value) { SetRetryConfiguration(value); return *this;}
    inline FailureConditions& WithRetryConfiguration(RetryConfiguration&& value) { SetRetryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditions that are configured as failure conditions.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const{ return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    inline void SetConditions(const Aws::Vector<Condition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }
    inline void SetConditions(Aws::Vector<Condition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }
    inline FailureConditions& WithConditions(const Aws::Vector<Condition>& value) { SetConditions(value); return *this;}
    inline FailureConditions& WithConditions(Aws::Vector<Condition>&& value) { SetConditions(std::move(value)); return *this;}
    inline FailureConditions& AddConditions(const Condition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }
    inline FailureConditions& AddConditions(Condition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Result m_result;
    bool m_resultHasBeenSet = false;

    RetryConfiguration m_retryConfiguration;
    bool m_retryConfigurationHasBeenSet = false;

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
