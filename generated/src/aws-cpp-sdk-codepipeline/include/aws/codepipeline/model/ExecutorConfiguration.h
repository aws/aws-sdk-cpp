/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/LambdaExecutorConfiguration.h>
#include <aws/codepipeline/model/JobWorkerExecutorConfiguration.h>
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
   * <p>The action engine, or executor, related to the supported integration model
   * used to create and update the action type. The available executor types are
   * <code>Lambda</code> and <code>JobWorker</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ExecutorConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecutorConfiguration
  {
  public:
    AWS_CODEPIPELINE_API ExecutorConfiguration() = default;
    AWS_CODEPIPELINE_API ExecutorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ExecutorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the <code>Lambda</code> executor of the action type.</p>
     */
    inline const LambdaExecutorConfiguration& GetLambdaExecutorConfiguration() const { return m_lambdaExecutorConfiguration; }
    inline bool LambdaExecutorConfigurationHasBeenSet() const { return m_lambdaExecutorConfigurationHasBeenSet; }
    template<typename LambdaExecutorConfigurationT = LambdaExecutorConfiguration>
    void SetLambdaExecutorConfiguration(LambdaExecutorConfigurationT&& value) { m_lambdaExecutorConfigurationHasBeenSet = true; m_lambdaExecutorConfiguration = std::forward<LambdaExecutorConfigurationT>(value); }
    template<typename LambdaExecutorConfigurationT = LambdaExecutorConfiguration>
    ExecutorConfiguration& WithLambdaExecutorConfiguration(LambdaExecutorConfigurationT&& value) { SetLambdaExecutorConfiguration(std::forward<LambdaExecutorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the <code>JobWorker</code> executor of the action type.</p>
     */
    inline const JobWorkerExecutorConfiguration& GetJobWorkerExecutorConfiguration() const { return m_jobWorkerExecutorConfiguration; }
    inline bool JobWorkerExecutorConfigurationHasBeenSet() const { return m_jobWorkerExecutorConfigurationHasBeenSet; }
    template<typename JobWorkerExecutorConfigurationT = JobWorkerExecutorConfiguration>
    void SetJobWorkerExecutorConfiguration(JobWorkerExecutorConfigurationT&& value) { m_jobWorkerExecutorConfigurationHasBeenSet = true; m_jobWorkerExecutorConfiguration = std::forward<JobWorkerExecutorConfigurationT>(value); }
    template<typename JobWorkerExecutorConfigurationT = JobWorkerExecutorConfiguration>
    ExecutorConfiguration& WithJobWorkerExecutorConfiguration(JobWorkerExecutorConfigurationT&& value) { SetJobWorkerExecutorConfiguration(std::forward<JobWorkerExecutorConfigurationT>(value)); return *this;}
    ///@}
  private:

    LambdaExecutorConfiguration m_lambdaExecutorConfiguration;
    bool m_lambdaExecutorConfigurationHasBeenSet = false;

    JobWorkerExecutorConfiguration m_jobWorkerExecutorConfiguration;
    bool m_jobWorkerExecutorConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
