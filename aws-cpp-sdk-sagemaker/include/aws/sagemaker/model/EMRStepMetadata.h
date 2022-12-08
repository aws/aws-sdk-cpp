/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configurations and outcomes of an Amazon EMR step
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EMRStepMetadata">AWS
   * API Reference</a></p>
   */
  class EMRStepMetadata
  {
  public:
    AWS_SAGEMAKER_API EMRStepMetadata();
    AWS_SAGEMAKER_API EMRStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EMRStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline EMRStepMetadata& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline EMRStepMetadata& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the EMR cluster.</p>
     */
    inline EMRStepMetadata& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline const Aws::String& GetStepId() const{ return m_stepId; }

    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline bool StepIdHasBeenSet() const { return m_stepIdHasBeenSet; }

    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline void SetStepId(const Aws::String& value) { m_stepIdHasBeenSet = true; m_stepId = value; }

    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline void SetStepId(Aws::String&& value) { m_stepIdHasBeenSet = true; m_stepId = std::move(value); }

    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline void SetStepId(const char* value) { m_stepIdHasBeenSet = true; m_stepId.assign(value); }

    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline EMRStepMetadata& WithStepId(const Aws::String& value) { SetStepId(value); return *this;}

    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline EMRStepMetadata& WithStepId(Aws::String&& value) { SetStepId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the EMR cluster step.</p>
     */
    inline EMRStepMetadata& WithStepId(const char* value) { SetStepId(value); return *this;}


    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }

    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }

    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }

    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }

    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }

    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline EMRStepMetadata& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}

    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline EMRStepMetadata& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}

    /**
     * <p>The name of the EMR cluster step.</p>
     */
    inline EMRStepMetadata& WithStepName(const char* value) { SetStepName(value); return *this;}


    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline const Aws::String& GetLogFilePath() const{ return m_logFilePath; }

    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline bool LogFilePathHasBeenSet() const { return m_logFilePathHasBeenSet; }

    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline void SetLogFilePath(const Aws::String& value) { m_logFilePathHasBeenSet = true; m_logFilePath = value; }

    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline void SetLogFilePath(Aws::String&& value) { m_logFilePathHasBeenSet = true; m_logFilePath = std::move(value); }

    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline void SetLogFilePath(const char* value) { m_logFilePathHasBeenSet = true; m_logFilePath.assign(value); }

    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline EMRStepMetadata& WithLogFilePath(const Aws::String& value) { SetLogFilePath(value); return *this;}

    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline EMRStepMetadata& WithLogFilePath(Aws::String&& value) { SetLogFilePath(std::move(value)); return *this;}

    /**
     * <p>The path to the log file where the cluster step's failure root cause is
     * recorded.</p>
     */
    inline EMRStepMetadata& WithLogFilePath(const char* value) { SetLogFilePath(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_stepId;
    bool m_stepIdHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_logFilePath;
    bool m_logFilePathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
