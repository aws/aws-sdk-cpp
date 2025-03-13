/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class HadoopStepConfig
  {
  public:
    AWS_EMR_API HadoopStepConfig() = default;
    AWS_EMR_API HadoopStepConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API HadoopStepConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the JAR file that runs during the step.</p>
     */
    inline const Aws::String& GetJar() const { return m_jar; }
    inline bool JarHasBeenSet() const { return m_jarHasBeenSet; }
    template<typename JarT = Aws::String>
    void SetJar(JarT&& value) { m_jarHasBeenSet = true; m_jar = std::forward<JarT>(value); }
    template<typename JarT = Aws::String>
    HadoopStepConfig& WithJar(JarT&& value) { SetJar(std::forward<JarT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Java properties that are set when the step runs. You can use
     * these properties to pass key-value pairs to your main function.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    HadoopStepConfig& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
    HadoopStepConfig& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the main class in the specified Java file. If not specified, the
     * JAR file should specify a main class in its manifest file.</p>
     */
    inline const Aws::String& GetMainClass() const { return m_mainClass; }
    inline bool MainClassHasBeenSet() const { return m_mainClassHasBeenSet; }
    template<typename MainClassT = Aws::String>
    void SetMainClass(MainClassT&& value) { m_mainClassHasBeenSet = true; m_mainClass = std::forward<MainClassT>(value); }
    template<typename MainClassT = Aws::String>
    HadoopStepConfig& WithMainClass(MainClassT&& value) { SetMainClass(std::forward<MainClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of command line arguments to pass to the JAR file's main function
     * for execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const { return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    void SetArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args = std::forward<ArgsT>(value); }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    HadoopStepConfig& WithArgs(ArgsT&& value) { SetArgs(std::forward<ArgsT>(value)); return *this;}
    template<typename ArgsT = Aws::String>
    HadoopStepConfig& AddArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args.emplace_back(std::forward<ArgsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jar;
    bool m_jarHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_mainClass;
    bool m_mainClassHasBeenSet = false;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
