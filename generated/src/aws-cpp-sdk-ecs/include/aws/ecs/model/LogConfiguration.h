﻿/**
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
   * <code>LogConfig</code> in the docker container create command and the
   * <code>--log-driver</code> option to docker run.</p> <p>By default, containers
   * use the same logging driver that the Docker daemon uses. However, the container
   * might use a different logging driver than the Docker daemon by specifying a log
   * driver configuration in the container definition.</p> <p>Understand the
   * following when specifying a log configuration for your containers.</p> <ul> <li>
   * <p>Amazon ECS currently supports a subset of the logging drivers available to
   * the Docker daemon. Additional log drivers may be available in future releases of
   * the Amazon ECS container agent.</p> <p>For tasks on Fargate, the supported log
   * drivers are <code>awslogs</code>, <code>splunk</code>, and
   * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
   * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
   * <code>gelf</code>, <code>json-file</code>,
   * <code>journald</code>,<code>syslog</code>, <code>splunk</code>, and
   * <code>awsfirelens</code>.</p> </li> <li> <p>This parameter requires version 1.18
   * of the Docker Remote API or greater on your container instance.</p> </li> <li>
   * <p>For tasks that are hosted on Amazon EC2 instances, the Amazon ECS container
   * agent must register the available logging drivers with the
   * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
   * containers placed on that instance can use these log configuration options. For
   * more information, see <a
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


    ///@{
    /**
     * <p>The log driver to use for the container.</p> <p>For tasks on Fargate, the
     * supported log drivers are <code>awslogs</code>, <code>splunk</code>, and
     * <code>awsfirelens</code>.</p> <p>For tasks hosted on Amazon EC2 instances, the
     * supported log drivers are <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>syslog</code>, <code>splunk</code>, and <code>awsfirelens</code>.</p>
     * <p>For more information about using the <code>awslogs</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_awslogs.html">Send
     * Amazon ECS logs to CloudWatch</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>For more information about using the
     * <code>awsfirelens</code> log driver, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Send
     * Amazon ECS logs to an Amazon Web Services service or Amazon Web Services
     * Partner</a>.</p>  <p>If you have a custom driver that isn't listed, you
     * can fork the Amazon ECS container agent project that's <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, we don't currently
     * provide support for running modified copies of this software.</p> 
     */
    inline const LogDriver& GetLogDriver() const{ return m_logDriver; }
    inline bool LogDriverHasBeenSet() const { return m_logDriverHasBeenSet; }
    inline void SetLogDriver(const LogDriver& value) { m_logDriverHasBeenSet = true; m_logDriver = value; }
    inline void SetLogDriver(LogDriver&& value) { m_logDriverHasBeenSet = true; m_logDriver = std::move(value); }
    inline LogConfiguration& WithLogDriver(const LogDriver& value) { SetLogDriver(value); return *this;}
    inline LogConfiguration& WithLogDriver(LogDriver&& value) { SetLogDriver(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options to send to the log driver.</p> <p>The options you
     * can specify depend on the log driver. Some of the options you can specify when
     * you use the <code>awslogs</code> log driver to route logs to Amazon CloudWatch
     * include the following:</p> <dl> <dt>awslogs-create-group</dt> <dd> <p>Required:
     * No</p> <p>Specify whether you want the log group to be created automatically. If
     * this option isn't specified, it defaults to <code>false</code>.</p> 
     * <p>Your IAM policy must include the <code>logs:CreateLogGroup</code> permission
     * before you attempt to use <code>awslogs-create-group</code>.</p>  </dd>
     * <dt>awslogs-region</dt> <dd> <p>Required: Yes</p> <p>Specify the Amazon Web
     * Services Region that the <code>awslogs</code> log driver is to send your Docker
     * logs to. You can choose to send all of your logs from clusters in different
     * Regions to a single region in CloudWatch Logs. This is so that they're all
     * visible in one location. Otherwise, you can separate them by Region for more
     * granularity. Make sure that the specified log group exists in the Region that
     * you specify with this option.</p> </dd> <dt>awslogs-group</dt> <dd> <p>Required:
     * Yes</p> <p>Make sure to specify a log group that the <code>awslogs</code> log
     * driver sends its log streams to.</p> </dd> <dt>awslogs-stream-prefix</dt> <dd>
     * <p>Required: Yes, when using the Fargate launch type.Optional for the EC2 launch
     * type, required for the Fargate launch type.</p> <p>Use the
     * <code>awslogs-stream-prefix</code> option to associate a log stream with the
     * specified prefix, the container name, and the ID of the Amazon ECS task that the
     * container belongs to. If you specify a prefix with this option, then the log
     * stream takes the format <code>prefix-name/container-name/ecs-task-id</code>.</p>
     * <p>If you don't specify a prefix with this option, then the log stream is named
     * after the container ID that's assigned by the Docker daemon on the container
     * instance. Because it's difficult to trace logs back to the container that sent
     * them with just the Docker container ID (which is only available on the container
     * instance), we recommend that you specify a prefix with this option.</p> <p>For
     * Amazon ECS services, you can use the service name as the prefix. Doing so, you
     * can trace log streams to the service that the container belongs to, the name of
     * the container that sent them, and the ID of the task that the container belongs
     * to.</p> <p>You must specify a stream-prefix for your logs to have your logs
     * appear in the Log pane when using the Amazon ECS console.</p> </dd>
     * <dt>awslogs-datetime-format</dt> <dd> <p>Required: No</p> <p>This option defines
     * a multiline start pattern in Python <code>strftime</code> format. A log message
     * consists of a line that matches the pattern and any following lines that don’t
     * match the pattern. The matched line is the delimiter between log messages.</p>
     * <p>One example of a use case for using this format is for parsing output such as
     * a stack dump, which might otherwise be logged in multiple entries. The correct
     * pattern allows it to be captured in a single entry.</p> <p>For more information,
     * see <a
     * href="https://docs.docker.com/config/containers/logging/awslogs/#awslogs-datetime-format">awslogs-datetime-format</a>.</p>
     * <p>You cannot configure both the <code>awslogs-datetime-format</code> and
     * <code>awslogs-multiline-pattern</code> options.</p>  <p>Multiline logging
     * performs regular expression parsing and matching of all log messages. This might
     * have a negative impact on logging performance.</p>  </dd>
     * <dt>awslogs-multiline-pattern</dt> <dd> <p>Required: No</p> <p>This option
     * defines a multiline start pattern that uses a regular expression. A log message
     * consists of a line that matches the pattern and any following lines that don’t
     * match the pattern. The matched line is the delimiter between log messages.</p>
     * <p>For more information, see <a
     * href="https://docs.docker.com/config/containers/logging/awslogs/#awslogs-multiline-pattern">awslogs-multiline-pattern</a>.</p>
     * <p>This option is ignored if <code>awslogs-datetime-format</code> is also
     * configured.</p> <p>You cannot configure both the
     * <code>awslogs-datetime-format</code> and <code>awslogs-multiline-pattern</code>
     * options.</p>  <p>Multiline logging performs regular expression parsing and
     * matching of all log messages. This might have a negative impact on logging
     * performance.</p>  </dd> <dt>mode</dt> <dd> <p>Required: No</p> <p>Valid
     * values: <code>non-blocking</code> | <code>blocking</code> </p> <p>This option
     * defines the delivery mode of log messages from the container to CloudWatch Logs.
     * The delivery mode you choose affects application availability when the flow of
     * logs from container to CloudWatch is interrupted.</p> <p>If you use the
     * <code>blocking</code> mode and the flow of logs to CloudWatch is interrupted,
     * calls from container code to write to the <code>stdout</code> and
     * <code>stderr</code> streams will block. The logging thread of the application
     * will block as a result. This may cause the application to become unresponsive
     * and lead to container healthcheck failure. </p> <p>If you use the
     * <code>non-blocking</code> mode, the container's logs are instead stored in an
     * in-memory intermediate buffer configured with the <code>max-buffer-size</code>
     * option. This prevents the application from becoming unresponsive when logs
     * cannot be sent to CloudWatch. We recommend using this mode if you want to ensure
     * service availability and are okay with some log loss. For more information, see
     * <a
     * href="http://aws.amazon.com/blogs/containers/preventing-log-loss-with-non-blocking-mode-in-the-awslogs-container-log-driver/">Preventing
     * log loss with non-blocking mode in the <code>awslogs</code> container log
     * driver</a>.</p> </dd> <dt>max-buffer-size</dt> <dd> <p>Required: No</p>
     * <p>Default value: <code>1m</code> </p> <p>When <code>non-blocking</code> mode is
     * used, the <code>max-buffer-size</code> log option controls the size of the
     * buffer that's used for intermediate message storage. Make sure to specify an
     * adequate buffer size based on your application. When the buffer fills up,
     * further logs cannot be stored. Logs that cannot be stored are lost. </p> </dd>
     * </dl> <p>To route logs using the <code>splunk</code> log router, you need to
     * specify a <code>splunk-token</code> and a <code>splunk-url</code>.</p> <p>When
     * you use the <code>awsfirelens</code> log router to route logs to an Amazon Web
     * Services Service or Amazon Web Services Partner Network destination for log
     * storage and analytics, you can set the <code>log-driver-buffer-limit</code>
     * option to limit the number of events that are buffered in memory, before being
     * sent to the log router container. It can help to resolve potential log loss
     * issue because high throughput might result in memory running out for the buffer
     * inside of Docker.</p> <p>Other options you can specify when using
     * <code>awsfirelens</code> to route logs depend on the destination. When you
     * export logs to Amazon Data Firehose, you can specify the Amazon Web Services
     * Region with <code>region</code> and a name for the log stream with
     * <code>delivery_stream</code>.</p> <p>When you export logs to Amazon Kinesis Data
     * Streams, you can specify an Amazon Web Services Region with <code>region</code>
     * and a data stream name with <code>stream</code>.</p> <p> When you export logs to
     * Amazon OpenSearch Service, you can specify options like <code>Name</code>,
     * <code>Host</code> (OpenSearch Service endpoint without protocol),
     * <code>Port</code>, <code>Index</code>, <code>Type</code>, <code>Aws_auth</code>,
     * <code>Aws_region</code>, <code>Suppress_Type_Name</code>, and <code>tls</code>.
     * For more information, see <a
     * href="http://aws.amazon.com/blogs/containers/under-the-hood-firelens-for-amazon-ecs-tasks/">Under
     * the hood: FireLens for Amazon ECS Tasks</a>.</p> <p>When you export logs to
     * Amazon S3, you can specify the bucket using the <code>bucket</code> option. You
     * can also specify <code>region</code>, <code>total_file_size</code>,
     * <code>upload_timeout</code>, and <code>use_put_object</code> as options.</p>
     * <p>This parameter requires version 1.19 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline LogConfiguration& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}
    inline LogConfiguration& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(std::move(value)); return *this;}
    inline LogConfiguration& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }
    inline LogConfiguration& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }
    inline LogConfiguration& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }
    inline LogConfiguration& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }
    inline LogConfiguration& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }
    inline LogConfiguration& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }
    inline LogConfiguration& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecretOptions() const{ return m_secretOptions; }
    inline bool SecretOptionsHasBeenSet() const { return m_secretOptionsHasBeenSet; }
    inline void SetSecretOptions(const Aws::Vector<Secret>& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = value; }
    inline void SetSecretOptions(Aws::Vector<Secret>&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = std::move(value); }
    inline LogConfiguration& WithSecretOptions(const Aws::Vector<Secret>& value) { SetSecretOptions(value); return *this;}
    inline LogConfiguration& WithSecretOptions(Aws::Vector<Secret>&& value) { SetSecretOptions(std::move(value)); return *this;}
    inline LogConfiguration& AddSecretOptions(const Secret& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.push_back(value); return *this; }
    inline LogConfiguration& AddSecretOptions(Secret&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.push_back(std::move(value)); return *this; }
    ///@}
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
