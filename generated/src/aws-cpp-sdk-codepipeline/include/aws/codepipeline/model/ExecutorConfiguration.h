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
    AWS_CODEPIPELINE_API ExecutorConfiguration();
    AWS_CODEPIPELINE_API ExecutorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ExecutorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the <code>Lambda</code> executor of the action type.</p>
     */
    inline const LambdaExecutorConfiguration& GetLambdaExecutorConfiguration() const{ return m_lambdaExecutorConfiguration; }

    /**
     * <p>Details about the <code>Lambda</code> executor of the action type.</p>
     */
    inline bool LambdaExecutorConfigurationHasBeenSet() const { return m_lambdaExecutorConfigurationHasBeenSet; }

    /**
     * <p>Details about the <code>Lambda</code> executor of the action type.</p>
     */
    inline void SetLambdaExecutorConfiguration(const LambdaExecutorConfiguration& value) { m_lambdaExecutorConfigurationHasBeenSet = true; m_lambdaExecutorConfiguration = value; }

    /**
     * <p>Details about the <code>Lambda</code> executor of the action type.</p>
     */
    inline void SetLambdaExecutorConfiguration(LambdaExecutorConfiguration&& value) { m_lambdaExecutorConfigurationHasBeenSet = true; m_lambdaExecutorConfiguration = std::move(value); }

    /**
     * <p>Details about the <code>Lambda</code> executor of the action type.</p>
     */
    inline ExecutorConfiguration& WithLambdaExecutorConfiguration(const LambdaExecutorConfiguration& value) { SetLambdaExecutorConfiguration(value); return *this;}

    /**
     * <p>Details about the <code>Lambda</code> executor of the action type.</p>
     */
    inline ExecutorConfiguration& WithLambdaExecutorConfiguration(LambdaExecutorConfiguration&& value) { SetLambdaExecutorConfiguration(std::move(value)); return *this;}


    /**
     * <p>Details about the <code>JobWorker</code> executor of the action type.</p>
     */
    inline const JobWorkerExecutorConfiguration& GetJobWorkerExecutorConfiguration() const{ return m_jobWorkerExecutorConfiguration; }

    /**
     * <p>Details about the <code>JobWorker</code> executor of the action type.</p>
     */
    inline bool JobWorkerExecutorConfigurationHasBeenSet() const { return m_jobWorkerExecutorConfigurationHasBeenSet; }

    /**
     * <p>Details about the <code>JobWorker</code> executor of the action type.</p>
     */
    inline void SetJobWorkerExecutorConfiguration(const JobWorkerExecutorConfiguration& value) { m_jobWorkerExecutorConfigurationHasBeenSet = true; m_jobWorkerExecutorConfiguration = value; }

    /**
     * <p>Details about the <code>JobWorker</code> executor of the action type.</p>
     */
    inline void SetJobWorkerExecutorConfiguration(JobWorkerExecutorConfiguration&& value) { m_jobWorkerExecutorConfigurationHasBeenSet = true; m_jobWorkerExecutorConfiguration = std::move(value); }

    /**
     * <p>Details about the <code>JobWorker</code> executor of the action type.</p>
     */
    inline ExecutorConfiguration& WithJobWorkerExecutorConfiguration(const JobWorkerExecutorConfiguration& value) { SetJobWorkerExecutorConfiguration(value); return *this;}

    /**
     * <p>Details about the <code>JobWorker</code> executor of the action type.</p>
     */
    inline ExecutorConfiguration& WithJobWorkerExecutorConfiguration(JobWorkerExecutorConfiguration&& value) { SetJobWorkerExecutorConfiguration(std::move(value)); return *this;}

  private:

    LambdaExecutorConfiguration m_lambdaExecutorConfiguration;
    bool m_lambdaExecutorConfigurationHasBeenSet = false;

    JobWorkerExecutorConfiguration m_jobWorkerExecutorConfiguration;
    bool m_jobWorkerExecutorConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
