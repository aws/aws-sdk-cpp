/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The FireLens configuration for the container. The configuration specifies and
   * configures a log router for container logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The options to use to configure the log router.</p> <p>The valid option keys
     * are as follows:</p> <ul> <li> <p> <code>enable-ecs-log-metadata</code>. The
     * value can be <code>true</code> or <code>false</code>.</p> </li> <li> <p>
     * <code>config-file-type</code>. The value can be <code>s3</code> or
     * <code>file</code>.</p> </li> <li> <p> <code>config-file-value</code>. The value
     * is either an S3 ARN or a file path.</p> </li> </ul>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }


    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The log router to use. Valid values are <code>fluentbit</code> or
     * <code>fluentd</code>.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
