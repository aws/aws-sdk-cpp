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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SparkGluePropertiesInput">AWS
   * API Reference</a></p>
   */
  class SparkGluePropertiesInput
  {
  public:
    AWS_DATAZONE_API SparkGluePropertiesInput();
    AWS_DATAZONE_API SparkGluePropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SparkGluePropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional args in the Spark Amazon Web Services Glue properties.</p>
     */
    inline const SparkGlueArgs& GetAdditionalArgs() const{ return m_additionalArgs; }
    inline bool AdditionalArgsHasBeenSet() const { return m_additionalArgsHasBeenSet; }
    inline void SetAdditionalArgs(const SparkGlueArgs& value) { m_additionalArgsHasBeenSet = true; m_additionalArgs = value; }
    inline void SetAdditionalArgs(SparkGlueArgs&& value) { m_additionalArgsHasBeenSet = true; m_additionalArgs = std::move(value); }
    inline SparkGluePropertiesInput& WithAdditionalArgs(const SparkGlueArgs& value) { SetAdditionalArgs(value); return *this;}
    inline SparkGluePropertiesInput& WithAdditionalArgs(SparkGlueArgs&& value) { SetAdditionalArgs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue connection name in the Spark Amazon Web Services
     * Glue properties.</p>
     */
    inline const Aws::String& GetGlueConnectionName() const{ return m_glueConnectionName; }
    inline bool GlueConnectionNameHasBeenSet() const { return m_glueConnectionNameHasBeenSet; }
    inline void SetGlueConnectionName(const Aws::String& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = value; }
    inline void SetGlueConnectionName(Aws::String&& value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName = std::move(value); }
    inline void SetGlueConnectionName(const char* value) { m_glueConnectionNameHasBeenSet = true; m_glueConnectionName.assign(value); }
    inline SparkGluePropertiesInput& WithGlueConnectionName(const Aws::String& value) { SetGlueConnectionName(value); return *this;}
    inline SparkGluePropertiesInput& WithGlueConnectionName(Aws::String&& value) { SetGlueConnectionName(std::move(value)); return *this;}
    inline SparkGluePropertiesInput& WithGlueConnectionName(const char* value) { SetGlueConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Glue version in the Spark Amazon Web Services Glue
     * properties.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }
    inline SparkGluePropertiesInput& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}
    inline SparkGluePropertiesInput& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}
    inline SparkGluePropertiesInput& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idle timeout in the Spark Amazon Web Services Glue properties.</p>
     */
    inline int GetIdleTimeout() const{ return m_idleTimeout; }
    inline bool IdleTimeoutHasBeenSet() const { return m_idleTimeoutHasBeenSet; }
    inline void SetIdleTimeout(int value) { m_idleTimeoutHasBeenSet = true; m_idleTimeout = value; }
    inline SparkGluePropertiesInput& WithIdleTimeout(int value) { SetIdleTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Java virtual env in the Spark Amazon Web Services Glue properties. </p>
     */
    inline const Aws::String& GetJavaVirtualEnv() const{ return m_javaVirtualEnv; }
    inline bool JavaVirtualEnvHasBeenSet() const { return m_javaVirtualEnvHasBeenSet; }
    inline void SetJavaVirtualEnv(const Aws::String& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = value; }
    inline void SetJavaVirtualEnv(Aws::String&& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = std::move(value); }
    inline void SetJavaVirtualEnv(const char* value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv.assign(value); }
    inline SparkGluePropertiesInput& WithJavaVirtualEnv(const Aws::String& value) { SetJavaVirtualEnv(value); return *this;}
    inline SparkGluePropertiesInput& WithJavaVirtualEnv(Aws::String&& value) { SetJavaVirtualEnv(std::move(value)); return *this;}
    inline SparkGluePropertiesInput& WithJavaVirtualEnv(const char* value) { SetJavaVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers in the Spark Amazon Web Services Glue properties. </p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline SparkGluePropertiesInput& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python virtual env in the Spark Amazon Web Services Glue properties. </p>
     */
    inline const Aws::String& GetPythonVirtualEnv() const{ return m_pythonVirtualEnv; }
    inline bool PythonVirtualEnvHasBeenSet() const { return m_pythonVirtualEnvHasBeenSet; }
    inline void SetPythonVirtualEnv(const Aws::String& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = value; }
    inline void SetPythonVirtualEnv(Aws::String&& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = std::move(value); }
    inline void SetPythonVirtualEnv(const char* value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv.assign(value); }
    inline SparkGluePropertiesInput& WithPythonVirtualEnv(const Aws::String& value) { SetPythonVirtualEnv(value); return *this;}
    inline SparkGluePropertiesInput& WithPythonVirtualEnv(Aws::String&& value) { SetPythonVirtualEnv(std::move(value)); return *this;}
    inline SparkGluePropertiesInput& WithPythonVirtualEnv(const char* value) { SetPythonVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker type in the Spark Amazon Web Services Glue properties. </p>
     */
    inline const Aws::String& GetWorkerType() const{ return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(const Aws::String& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline void SetWorkerType(Aws::String&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }
    inline void SetWorkerType(const char* value) { m_workerTypeHasBeenSet = true; m_workerType.assign(value); }
    inline SparkGluePropertiesInput& WithWorkerType(const Aws::String& value) { SetWorkerType(value); return *this;}
    inline SparkGluePropertiesInput& WithWorkerType(Aws::String&& value) { SetWorkerType(std::move(value)); return *this;}
    inline SparkGluePropertiesInput& WithWorkerType(const char* value) { SetWorkerType(value); return *this;}
    ///@}
  private:

    SparkGlueArgs m_additionalArgs;
    bool m_additionalArgsHasBeenSet = false;

    Aws::String m_glueConnectionName;
    bool m_glueConnectionNameHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    int m_idleTimeout;
    bool m_idleTimeoutHasBeenSet = false;

    Aws::String m_javaVirtualEnv;
    bool m_javaVirtualEnvHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    Aws::String m_pythonVirtualEnv;
    bool m_pythonVirtualEnvHasBeenSet = false;

    Aws::String m_workerType;
    bool m_workerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
