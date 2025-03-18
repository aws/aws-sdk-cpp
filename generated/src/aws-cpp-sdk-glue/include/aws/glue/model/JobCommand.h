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
   * <p>Specifies code that runs when a job is run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobCommand">AWS API
   * Reference</a></p>
   */
  class JobCommand
  {
  public:
    AWS_GLUE_API JobCommand() = default;
    AWS_GLUE_API JobCommand(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobCommand& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>. For an Apache Spark streaming ETL job, this must be
     * <code>gluestreaming</code>. For a Ray job, this must be
     * <code>glueray</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JobCommand& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * runs a job.</p>
     */
    inline const Aws::String& GetScriptLocation() const { return m_scriptLocation; }
    inline bool ScriptLocationHasBeenSet() const { return m_scriptLocationHasBeenSet; }
    template<typename ScriptLocationT = Aws::String>
    void SetScriptLocation(ScriptLocationT&& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = std::forward<ScriptLocationT>(value); }
    template<typename ScriptLocationT = Aws::String>
    JobCommand& WithScriptLocation(ScriptLocationT&& value) { SetScriptLocation(std::forward<ScriptLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python version being used to run a Python shell job. Allowed values are 2
     * or 3.</p>
     */
    inline const Aws::String& GetPythonVersion() const { return m_pythonVersion; }
    inline bool PythonVersionHasBeenSet() const { return m_pythonVersionHasBeenSet; }
    template<typename PythonVersionT = Aws::String>
    void SetPythonVersion(PythonVersionT&& value) { m_pythonVersionHasBeenSet = true; m_pythonVersion = std::forward<PythonVersionT>(value); }
    template<typename PythonVersionT = Aws::String>
    JobCommand& WithPythonVersion(PythonVersionT&& value) { SetPythonVersion(std::forward<PythonVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In Ray jobs, Runtime is used to specify the versions of Ray, Python and
     * additional libraries available in your environment. This field is not used in
     * other job types. For supported runtime environment values, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/ray-jobs-section.html">Supported
     * Ray runtime environments</a> in the Glue Developer Guide.</p>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    JobCommand& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_scriptLocation;
    bool m_scriptLocationHasBeenSet = false;

    Aws::String m_pythonVersion;
    bool m_pythonVersionHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
