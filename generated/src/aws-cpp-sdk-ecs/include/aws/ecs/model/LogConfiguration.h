/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/LogDriver.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Secret.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The log configuration for the container. This parameter maps to
   * <code>LogConfig</code> in the <a
   * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
   * a container</a> section of the <a
   * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
   * <code>--log-driver</code> option to <a
   * href="https://docs.docker.com/engine/reference/commandline/run/"> <code>docker
   * run</code> </a>.</p> <p>By default, containers use the same logging driver that
   * the Docker daemon uses. However, the container might use a different logging
   * driver than the Docker daemon by specifying a log driver configuration in the
   * container definition. For more information about the options for different
   * supported log drivers, see <a
   * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
   * drivers</a> in the Docker documentation.</p> <p>Understand the following when
   * specifying a log configuration for your containers.</p> <ul> <li> <p>Amazon ECS
   * currently supports a subset of the logging drivers available to the Docker
   * daemon (shown in the valid values below). Additional log drivers may be
   * available in future releases of the Amazon ECS container agent.</p> </li> <li>
   * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
   * your container instance.</p> </li> <li> <p>For tasks that are hosted on Amazon
   * EC2 instances, the Amazon ECS container agent must register the available
   * logging drivers with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
   * variable before containers placed on that instance can use these log
   * configuration options. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
   * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
   * Developer Guide</i>.</p> </li> <li> <p>For tasks that are on Fargate, because
   * you don't have access to the underlying infrastructure your tasks are hosted on,
   * any additional software needed must be installed outside of the task. For
   * example, the Fluentd output aggregators or a remote host running Logstash to
   * send Gelf logs to.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LogConfiguration">AWS
   * API Reference</a></p>
   */
  class LogConfiguration
  {
  public:
    AWS_ECS_API LogConfiguration();
    AWS_ECS_API LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log driver to use for the container.</p> <p>For tasks on Fargate, the
     * supported log drivers are <code>awslogs</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
     * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>logentries</code>,<code>syslog</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For more information about using the
     * <code>awslogs</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_awslogs.html">Using
     * the awslogs log driver</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For more information about using the <code>awsfirelens</code>
     * log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * log routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>If you have a custom driver that isn't listed, you can
     * fork the Amazon ECS container agent project that's <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, we don't currently
     * provide support for running modified copies of this software.</p> 
     */
    inline const LogDriver& GetLogDriver() const{ return m_logDriver; }

    /**
     * <p>The log driver to use for the container.</p> <p>For tasks on Fargate, the
     * supported log drivers are <code>awslogs</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
     * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>logentries</code>,<code>syslog</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For more information about using the
     * <code>awslogs</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_awslogs.html">Using
     * the awslogs log driver</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For more information about using the <code>awsfirelens</code>
     * log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * log routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>If you have a custom driver that isn't listed, you can
     * fork the Amazon ECS container agent project that's <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, we don't currently
     * provide support for running modified copies of this software.</p> 
     */
    inline bool LogDriverHasBeenSet() const { return m_logDriverHasBeenSet; }

    /**
     * <p>The log driver to use for the container.</p> <p>For tasks on Fargate, the
     * supported log drivers are <code>awslogs</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
     * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>logentries</code>,<code>syslog</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For more information about using the
     * <code>awslogs</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_awslogs.html">Using
     * the awslogs log driver</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For more information about using the <code>awsfirelens</code>
     * log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * log routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>If you have a custom driver that isn't listed, you can
     * fork the Amazon ECS container agent project that's <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, we don't currently
     * provide support for running modified copies of this software.</p> 
     */
    inline void SetLogDriver(const LogDriver& value) { m_logDriverHasBeenSet = true; m_logDriver = value; }

    /**
     * <p>The log driver to use for the container.</p> <p>For tasks on Fargate, the
     * supported log drivers are <code>awslogs</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
     * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>logentries</code>,<code>syslog</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For more information about using the
     * <code>awslogs</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_awslogs.html">Using
     * the awslogs log driver</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For more information about using the <code>awsfirelens</code>
     * log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * log routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>If you have a custom driver that isn't listed, you can
     * fork the Amazon ECS container agent project that's <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, we don't currently
     * provide support for running modified copies of this software.</p> 
     */
    inline void SetLogDriver(LogDriver&& value) { m_logDriverHasBeenSet = true; m_logDriver = std::move(value); }

    /**
     * <p>The log driver to use for the container.</p> <p>For tasks on Fargate, the
     * supported log drivers are <code>awslogs</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
     * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>logentries</code>,<code>syslog</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For more information about using the
     * <code>awslogs</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_awslogs.html">Using
     * the awslogs log driver</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For more information about using the <code>awsfirelens</code>
     * log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * log routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>If you have a custom driver that isn't listed, you can
     * fork the Amazon ECS container agent project that's <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, we don't currently
     * provide support for running modified copies of this software.</p> 
     */
    inline LogConfiguration& WithLogDriver(const LogDriver& value) { SetLogDriver(value); return *this;}

    /**
     * <p>The log driver to use for the container.</p> <p>For tasks on Fargate, the
     * supported log drivers are <code>awslogs</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
     * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>logentries</code>,<code>syslog</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For more information about using the
     * <code>awslogs</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_awslogs.html">Using
     * the awslogs log driver</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For more information about using the <code>awsfirelens</code>
     * log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * log routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>  <p>If you have a custom driver that isn't listed, you can
     * fork the Amazon ECS container agent project that's <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, we don't currently
     * provide support for running modified copies of this software.</p> 
     */
    inline LogConfiguration& WithLogDriver(LogDriver&& value) { SetLogDriver(std::move(value)); return *this;}


    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version
     * --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LogConfiguration& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }


    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecretOptions() const{ return m_secretOptions; }

    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool SecretOptionsHasBeenSet() const { return m_secretOptionsHasBeenSet; }

    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetSecretOptions(const Aws::Vector<Secret>& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = value; }

    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetSecretOptions(Aws::Vector<Secret>&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = std::move(value); }

    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline LogConfiguration& WithSecretOptions(const Aws::Vector<Secret>& value) { SetSecretOptions(value); return *this;}

    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline LogConfiguration& WithSecretOptions(Aws::Vector<Secret>&& value) { SetSecretOptions(std::move(value)); return *this;}

    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline LogConfiguration& AddSecretOptions(const Secret& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.push_back(value); return *this; }

    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline LogConfiguration& AddSecretOptions(Secret&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.push_back(std::move(value)); return *this; }

  private:

    LogDriver m_logDriver;
    bool m_logDriverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<Secret> m_secretOptions;
    bool m_secretOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
