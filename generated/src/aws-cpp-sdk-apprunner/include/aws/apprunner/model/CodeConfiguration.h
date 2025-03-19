/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/ConfigurationSource.h>
#include <aws/apprunner/model/CodeConfigurationValues.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the configuration that App Runner uses to build and run an App
   * Runner service from a source code repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CodeConfiguration">AWS
   * API Reference</a></p>
   */
  class CodeConfiguration
  {
  public:
    AWS_APPRUNNER_API CodeConfiguration() = default;
    AWS_APPRUNNER_API CodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the App Runner configuration. Values are interpreted as
     * follows:</p> <ul> <li> <p> <code>REPOSITORY</code> – App Runner reads
     * configuration values from the <code>apprunner.yaml</code> file in the source
     * code repository and ignores <code>CodeConfigurationValues</code>.</p> </li> <li>
     * <p> <code>API</code> – App Runner uses configuration values provided in
     * <code>CodeConfigurationValues</code> and ignores the <code>apprunner.yaml</code>
     * file in the source code repository.</p> </li> </ul>
     */
    inline ConfigurationSource GetConfigurationSource() const { return m_configurationSource; }
    inline bool ConfigurationSourceHasBeenSet() const { return m_configurationSourceHasBeenSet; }
    inline void SetConfigurationSource(ConfigurationSource value) { m_configurationSourceHasBeenSet = true; m_configurationSource = value; }
    inline CodeConfiguration& WithConfigurationSource(ConfigurationSource value) { SetConfigurationSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The basic configuration for building and running the App Runner service. Use
     * it to quickly launch an App Runner service without providing a
     * <code>apprunner.yaml</code> file in the source code repository (or ignoring the
     * file if it exists).</p>
     */
    inline const CodeConfigurationValues& GetCodeConfigurationValues() const { return m_codeConfigurationValues; }
    inline bool CodeConfigurationValuesHasBeenSet() const { return m_codeConfigurationValuesHasBeenSet; }
    template<typename CodeConfigurationValuesT = CodeConfigurationValues>
    void SetCodeConfigurationValues(CodeConfigurationValuesT&& value) { m_codeConfigurationValuesHasBeenSet = true; m_codeConfigurationValues = std::forward<CodeConfigurationValuesT>(value); }
    template<typename CodeConfigurationValuesT = CodeConfigurationValues>
    CodeConfiguration& WithCodeConfigurationValues(CodeConfigurationValuesT&& value) { SetCodeConfigurationValues(std::forward<CodeConfigurationValuesT>(value)); return *this;}
    ///@}
  private:

    ConfigurationSource m_configurationSource{ConfigurationSource::NOT_SET};
    bool m_configurationSourceHasBeenSet = false;

    CodeConfigurationValues m_codeConfigurationValues;
    bool m_codeConfigurationValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
