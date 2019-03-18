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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A cluster step consisting of a JAR file whose main function will be executed.
   * The main function submits a job for Hadoop to execute and waits for the job to
   * finish or fail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/HadoopStepConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API HadoopStepConfig
  {
  public:
    HadoopStepConfig();
    HadoopStepConfig(Aws::Utils::Json::JsonView jsonValue);
    HadoopStepConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline const Aws::String& GetJar() const{ return m_jar; }

    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline bool JarHasBeenSet() const { return m_jarHasBeenSet; }

    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline void SetJar(const Aws::String& value) { m_jarHasBeenSet = true; m_jar = value; }

    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline void SetJar(Aws::String&& value) { m_jarHasBeenSet = true; m_jar = std::move(value); }

    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline void SetJar(const char* value) { m_jarHasBeenSet = true; m_jar.assign(value); }

    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline HadoopStepConfig& WithJar(const Aws::String& value) { SetJar(value); return *this;}

    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline HadoopStepConfig& WithJar(Aws::String&& value) { SetJar(std::move(value)); return *this;}

    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline HadoopStepConfig& WithJar(const char* value) { SetJar(value); return *this;}


    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key value pairs to your main function.</p>
     */
    inline HadoopStepConfig& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }


    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline const Aws::String& GetMainClass() const{ return m_mainClass; }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline bool MainClassHasBeenSet() const { return m_mainClassHasBeenSet; }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline void SetMainClass(const Aws::String& value) { m_mainClassHasBeenSet = true; m_mainClass = value; }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline void SetMainClass(Aws::String&& value) { m_mainClassHasBeenSet = true; m_mainClass = std::move(value); }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline void SetMainClass(const char* value) { m_mainClassHasBeenSet = true; m_mainClass.assign(value); }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline HadoopStepConfig& WithMainClass(const Aws::String& value) { SetMainClass(value); return *this;}

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline HadoopStepConfig& WithMainClass(Aws::String&& value) { SetMainClass(std::move(value)); return *this;}

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline HadoopStepConfig& WithMainClass(const char* value) { SetMainClass(value); return *this;}


    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline HadoopStepConfig& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline HadoopStepConfig& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(std::move(value)); return *this;}

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline HadoopStepConfig& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline HadoopStepConfig& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline HadoopStepConfig& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

  private:

    Aws::String m_jar;
    bool m_jarHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet;

    Aws::String m_mainClass;
    bool m_mainClassHasBeenSet;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
