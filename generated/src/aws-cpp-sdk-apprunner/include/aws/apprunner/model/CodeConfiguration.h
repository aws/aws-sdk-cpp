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
    AWS_APPRUNNER_API CodeConfiguration();
    AWS_APPRUNNER_API CodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source of the App Runner configuration. Values are interpreted as
     * follows:</p> <ul> <li> <p> <code>REPOSITORY</code> – App Runner reads
     * configuration values from the <code>apprunner.yaml</code> file in the source
     * code repository and ignores <code>CodeConfigurationValues</code>.</p> </li> <li>
     * <p> <code>API</code> – App Runner uses configuration values provided in
     * <code>CodeConfigurationValues</code> and ignores the <code>apprunner.yaml</code>
     * file in the source code repository.</p> </li> </ul>
     */
    inline const ConfigurationSource& GetConfigurationSource() const{ return m_configurationSource; }

    /**
     * <p>The source of the App Runner configuration. Values are interpreted as
     * follows:</p> <ul> <li> <p> <code>REPOSITORY</code> – App Runner reads
     * configuration values from the <code>apprunner.yaml</code> file in the source
     * code repository and ignores <code>CodeConfigurationValues</code>.</p> </li> <li>
     * <p> <code>API</code> – App Runner uses configuration values provided in
     * <code>CodeConfigurationValues</code> and ignores the <code>apprunner.yaml</code>
     * file in the source code repository.</p> </li> </ul>
     */
    inline bool ConfigurationSourceHasBeenSet() const { return m_configurationSourceHasBeenSet; }

    /**
     * <p>The source of the App Runner configuration. Values are interpreted as
     * follows:</p> <ul> <li> <p> <code>REPOSITORY</code> – App Runner reads
     * configuration values from the <code>apprunner.yaml</code> file in the source
     * code repository and ignores <code>CodeConfigurationValues</code>.</p> </li> <li>
     * <p> <code>API</code> – App Runner uses configuration values provided in
     * <code>CodeConfigurationValues</code> and ignores the <code>apprunner.yaml</code>
     * file in the source code repository.</p> </li> </ul>
     */
    inline void SetConfigurationSource(const ConfigurationSource& value) { m_configurationSourceHasBeenSet = true; m_configurationSource = value; }

    /**
     * <p>The source of the App Runner configuration. Values are interpreted as
     * follows:</p> <ul> <li> <p> <code>REPOSITORY</code> – App Runner reads
     * configuration values from the <code>apprunner.yaml</code> file in the source
     * code repository and ignores <code>CodeConfigurationValues</code>.</p> </li> <li>
     * <p> <code>API</code> – App Runner uses configuration values provided in
     * <code>CodeConfigurationValues</code> and ignores the <code>apprunner.yaml</code>
     * file in the source code repository.</p> </li> </ul>
     */
    inline void SetConfigurationSource(ConfigurationSource&& value) { m_configurationSourceHasBeenSet = true; m_configurationSource = std::move(value); }

    /**
     * <p>The source of the App Runner configuration. Values are interpreted as
     * follows:</p> <ul> <li> <p> <code>REPOSITORY</code> – App Runner reads
     * configuration values from the <code>apprunner.yaml</code> file in the source
     * code repository and ignores <code>CodeConfigurationValues</code>.</p> </li> <li>
     * <p> <code>API</code> – App Runner uses configuration values provided in
     * <code>CodeConfigurationValues</code> and ignores the <code>apprunner.yaml</code>
     * file in the source code repository.</p> </li> </ul>
     */
    inline CodeConfiguration& WithConfigurationSource(const ConfigurationSource& value) { SetConfigurationSource(value); return *this;}

    /**
     * <p>The source of the App Runner configuration. Values are interpreted as
     * follows:</p> <ul> <li> <p> <code>REPOSITORY</code> – App Runner reads
     * configuration values from the <code>apprunner.yaml</code> file in the source
     * code repository and ignores <code>CodeConfigurationValues</code>.</p> </li> <li>
     * <p> <code>API</code> – App Runner uses configuration values provided in
     * <code>CodeConfigurationValues</code> and ignores the <code>apprunner.yaml</code>
     * file in the source code repository.</p> </li> </ul>
     */
    inline CodeConfiguration& WithConfigurationSource(ConfigurationSource&& value) { SetConfigurationSource(std::move(value)); return *this;}


    /**
     * <p>The basic configuration for building and running the App Runner service. Use
     * it to quickly launch an App Runner service without providing a
     * <code>apprunner.yaml</code> file in the source code repository (or ignoring the
     * file if it exists).</p>
     */
    inline const CodeConfigurationValues& GetCodeConfigurationValues() const{ return m_codeConfigurationValues; }

    /**
     * <p>The basic configuration for building and running the App Runner service. Use
     * it to quickly launch an App Runner service without providing a
     * <code>apprunner.yaml</code> file in the source code repository (or ignoring the
     * file if it exists).</p>
     */
    inline bool CodeConfigurationValuesHasBeenSet() const { return m_codeConfigurationValuesHasBeenSet; }

    /**
     * <p>The basic configuration for building and running the App Runner service. Use
     * it to quickly launch an App Runner service without providing a
     * <code>apprunner.yaml</code> file in the source code repository (or ignoring the
     * file if it exists).</p>
     */
    inline void SetCodeConfigurationValues(const CodeConfigurationValues& value) { m_codeConfigurationValuesHasBeenSet = true; m_codeConfigurationValues = value; }

    /**
     * <p>The basic configuration for building and running the App Runner service. Use
     * it to quickly launch an App Runner service without providing a
     * <code>apprunner.yaml</code> file in the source code repository (or ignoring the
     * file if it exists).</p>
     */
    inline void SetCodeConfigurationValues(CodeConfigurationValues&& value) { m_codeConfigurationValuesHasBeenSet = true; m_codeConfigurationValues = std::move(value); }

    /**
     * <p>The basic configuration for building and running the App Runner service. Use
     * it to quickly launch an App Runner service without providing a
     * <code>apprunner.yaml</code> file in the source code repository (or ignoring the
     * file if it exists).</p>
     */
    inline CodeConfiguration& WithCodeConfigurationValues(const CodeConfigurationValues& value) { SetCodeConfigurationValues(value); return *this;}

    /**
     * <p>The basic configuration for building and running the App Runner service. Use
     * it to quickly launch an App Runner service without providing a
     * <code>apprunner.yaml</code> file in the source code repository (or ignoring the
     * file if it exists).</p>
     */
    inline CodeConfiguration& WithCodeConfigurationValues(CodeConfigurationValues&& value) { SetCodeConfigurationValues(std::move(value)); return *this;}

  private:

    ConfigurationSource m_configurationSource;
    bool m_configurationSourceHasBeenSet = false;

    CodeConfigurationValues m_codeConfigurationValues;
    bool m_codeConfigurationValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
