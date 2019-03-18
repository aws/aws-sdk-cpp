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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/KeyValue.h>
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
   * <p>A job flow step consisting of a JAR file whose main function will be
   * executed. The main function submits a job for Hadoop to execute and waits for
   * the job to finish or fail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/HadoopJarStepConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API HadoopJarStepConfig
  {
  public:
    HadoopJarStepConfig();
    HadoopJarStepConfig(Aws::Utils::Json::JsonView jsonValue);
    HadoopJarStepConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline const Aws::Vector<KeyValue>& GetProperties() const{ return m_properties; }

    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline void SetProperties(const Aws::Vector<KeyValue>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline void SetProperties(Aws::Vector<KeyValue>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline HadoopJarStepConfig& WithProperties(const Aws::Vector<KeyValue>& value) { SetProperties(value); return *this;}

    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline HadoopJarStepConfig& WithProperties(Aws::Vector<KeyValue>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline HadoopJarStepConfig& AddProperties(const KeyValue& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

    /**
     * <p>A list of Java properties that are set when the step runs. You can use these
     * properties to pass key value pairs to your main function.</p>
     */
    inline HadoopJarStepConfig& AddProperties(KeyValue&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }


    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline const Aws::String& GetJar() const{ return m_jar; }

    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline bool JarHasBeenSet() const { return m_jarHasBeenSet; }

    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline void SetJar(const Aws::String& value) { m_jarHasBeenSet = true; m_jar = value; }

    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline void SetJar(Aws::String&& value) { m_jarHasBeenSet = true; m_jar = std::move(value); }

    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline void SetJar(const char* value) { m_jarHasBeenSet = true; m_jar.assign(value); }

    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline HadoopJarStepConfig& WithJar(const Aws::String& value) { SetJar(value); return *this;}

    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline HadoopJarStepConfig& WithJar(Aws::String&& value) { SetJar(std::move(value)); return *this;}

    /**
     * <p>A path to a JAR file run during the step.</p>
     */
    inline HadoopJarStepConfig& WithJar(const char* value) { SetJar(value); return *this;}


    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline const Aws::String& GetMainClass() const{ return m_mainClass; }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline bool MainClassHasBeenSet() const { return m_mainClassHasBeenSet; }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline void SetMainClass(const Aws::String& value) { m_mainClassHasBeenSet = true; m_mainClass = value; }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline void SetMainClass(Aws::String&& value) { m_mainClassHasBeenSet = true; m_mainClass = std::move(value); }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline void SetMainClass(const char* value) { m_mainClassHasBeenSet = true; m_mainClass.assign(value); }

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline HadoopJarStepConfig& WithMainClass(const Aws::String& value) { SetMainClass(value); return *this;}

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline HadoopJarStepConfig& WithMainClass(Aws::String&& value) { SetMainClass(std::move(value)); return *this;}

    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a Main-Class in its manifest file.</p>
     */
    inline HadoopJarStepConfig& WithMainClass(const char* value) { SetMainClass(value); return *this;}


    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline HadoopJarStepConfig& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline HadoopJarStepConfig& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(std::move(value)); return *this;}

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline HadoopJarStepConfig& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline HadoopJarStepConfig& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of command line arguments passed to the JAR file's main function when
     * executed.</p>
     */
    inline HadoopJarStepConfig& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

  private:

    Aws::Vector<KeyValue> m_properties;
    bool m_propertiesHasBeenSet;

    Aws::String m_jar;
    bool m_jarHasBeenSet;

    Aws::String m_mainClass;
    bool m_mainClassHasBeenSet;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
