/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Specifies code executed when a job is run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobCommand">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API JobCommand
  {
  public:
    JobCommand();
    JobCommand(Aws::Utils::Json::JsonView jsonValue);
    JobCommand& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline JobCommand& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline JobCommand& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the job command. For an Apache Spark ETL job, this must be
     * <code>glueetl</code>. For a Python shell job, it must be
     * <code>pythonshell</code>.</p>
     */
    inline JobCommand& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline const Aws::String& GetScriptLocation() const{ return m_scriptLocation; }

    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline bool ScriptLocationHasBeenSet() const { return m_scriptLocationHasBeenSet; }

    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline void SetScriptLocation(const Aws::String& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = value; }

    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline void SetScriptLocation(Aws::String&& value) { m_scriptLocationHasBeenSet = true; m_scriptLocation = std::move(value); }

    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline void SetScriptLocation(const char* value) { m_scriptLocationHasBeenSet = true; m_scriptLocation.assign(value); }

    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline JobCommand& WithScriptLocation(const Aws::String& value) { SetScriptLocation(value); return *this;}

    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline JobCommand& WithScriptLocation(Aws::String&& value) { SetScriptLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Simple Storage Service (Amazon S3) path to a script that
     * executes a job.</p>
     */
    inline JobCommand& WithScriptLocation(const char* value) { SetScriptLocation(value); return *this;}


    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline const Aws::String& GetPythonVersion() const{ return m_pythonVersion; }

    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline bool PythonVersionHasBeenSet() const { return m_pythonVersionHasBeenSet; }

    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline void SetPythonVersion(const Aws::String& value) { m_pythonVersionHasBeenSet = true; m_pythonVersion = value; }

    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline void SetPythonVersion(Aws::String&& value) { m_pythonVersionHasBeenSet = true; m_pythonVersion = std::move(value); }

    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline void SetPythonVersion(const char* value) { m_pythonVersionHasBeenSet = true; m_pythonVersion.assign(value); }

    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline JobCommand& WithPythonVersion(const Aws::String& value) { SetPythonVersion(value); return *this;}

    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline JobCommand& WithPythonVersion(Aws::String&& value) { SetPythonVersion(std::move(value)); return *this;}

    /**
     * <p>The Python version being used to execute a Python shell job. Allowed values
     * are 2 or 3.</p>
     */
    inline JobCommand& WithPythonVersion(const char* value) { SetPythonVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_scriptLocation;
    bool m_scriptLocationHasBeenSet;

    Aws::String m_pythonVersion;
    bool m_pythonVersionHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
