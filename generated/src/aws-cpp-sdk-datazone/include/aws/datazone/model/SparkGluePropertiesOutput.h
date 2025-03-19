/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SparkGlueArgs.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Spark Amazon Web Services Glue properties. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SparkGluePropertiesOutput">AWS
   * API Reference</a></p>
   */
  class SparkGluePropertiesOutput
  {
  public:
    AWS_DATAZONE_API SparkGluePropertiesOutput() = default;
    AWS_DATAZONE_API SparkGluePropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SparkGluePropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional args in the Spark Amazon Web Services Glue properties. </p>
     */
    inline const SparkGlueArgs& GetAdditionalArgs() const { return m_additionalArgs; }
    inline bool AdditionalArgsHasBeenSet() const { return m_additionalArgsHasBeenSet; }
    template<typename AdditionalArgsT = SparkGlueArgs>
    void SetAdditionalArgs(AdditionalArgsT&& value) { m_additionalArgsHasBeenSet = true; m_additionalArgs = std::forward<AdditionalArgsT>(value); }
    template<typename AdditionalArgsT = SparkGlueArgs>
    SparkGluePropertiesOutput& WithAdditionalArgs(AdditionalArgsT&& value) { SetAdditionalArgs(std::forward<AdditionalArgsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue connection name in the Spark Amazon Web Services
     * Glue properties. </p>
     */
    inline const Aws::String& GetGlueConnectionName() const { return m_glueConnectionName; }
    inline bool GlueConnectionNameHasBeenSet() const { return m_glueConnectionNameHasBeenSet; }
    template<typename GlueConnectionNameT = Aws::String>
    void SetGlueConnectionName(GlueConnectionNameT&& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = std::forward<GlueConnectionNameT>(value); }
    template<typename GlueConnectionNameT = Aws::String>
    SparkGluePropertiesOutput& WithGlueConnectionName(GlueConnectionNameT&& value) { SetGlueConnectionName(std::forward<GlueConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue version in the Spark Amazon Web Services Glue
     * properties. </p>
     */
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    SparkGluePropertiesOutput& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idle timeout in the Spark Amazon Web Services Glue properties. </p>
     */
    inline int GetIdleTimeout() const { return m_idleTimeout; }
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }
    inline SparkGluePropertiesOutput& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Java virtual env in the Spark Amazon Web Services Glue properties. </p>
     */
    inline const Aws::String& GetJavaVirtualEnv() const { return m_javaVirtualEnv; }
    inline bool JavaVirtualEnvHasBeenSet() const { return m_javaVirtualEnvHasBeenSet; }
    template<typename JavaVirtualEnvT = Aws::String>
    void SetJavaVirtualEnv(JavaVirtualEnvT&& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = std::forward<JavaVirtualEnvT>(value); }
    template<typename JavaVirtualEnvT = Aws::String>
    SparkGluePropertiesOutput& WithJavaVirtualEnv(JavaVirtualEnvT&& value) { SetJavaVirtualEnv(std::forward<JavaVirtualEnvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers in the Spark Amazon Web Services Glue properties. </p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline SparkGluePropertiesOutput& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python virtual env in the Spark Amazon Web Services Glue properties. </p>
     */
    inline const Aws::String& GetPythonVirtualEnv() const { return m_pythonVirtualEnv; }
    inline bool PythonVirtualEnvHasBeenSet() const { return m_pythonVirtualEnvHasBeenSet; }
    template<typename PythonVirtualEnvT = Aws::String>
    void SetPythonVirtualEnv(PythonVirtualEnvT&& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = std::forward<PythonVirtualEnvT>(value); }
    template<typename PythonVirtualEnvT = Aws::String>
    SparkGluePropertiesOutput& WithPythonVirtualEnv(PythonVirtualEnvT&& value) { SetPythonVirtualEnv(std::forward<PythonVirtualEnvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker type in the Spark Amazon Web Services Glue properties. </p>
     */
    inline const Aws::String& GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    template<typename WorkerTypeT = Aws::String>
    void SetWorkerType(WorkerTypeT&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::forward<WorkerTypeT>(value); }
    template<typename WorkerTypeT = Aws::String>
    SparkGluePropertiesOutput& WithWorkerType(WorkerTypeT&& value) { SetWorkerType(std::forward<WorkerTypeT>(value)); return *this;}
    ///@}
  private:

    SparkGlueArgs m_additionalArgs;
    bool m_additionalArgsHasBeenSet = false;

    Aws::String m_glueConnectionName;
    bool m_glueConnectionNameHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_idleTimeout{0};
    bool m_idleTimeoutHasBeenSet = false;

    Aws::String m_javaVirtualEnv;
    bool m_javaVirtualEnvHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    Aws::String m_pythonVirtualEnv;
    bool m_pythonVirtualEnvHasBeenSet = false;

    Aws::String m_workerType;
    bool m_workerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
