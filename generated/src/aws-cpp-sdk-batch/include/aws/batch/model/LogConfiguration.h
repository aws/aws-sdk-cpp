/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/LogDriver.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/Secret.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Log configuration options to send to a custom log driver for the
   * container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/LogConfiguration">AWS
   * API Reference</a></p>
   */
  class LogConfiguration
  {
  public:
    AWS_BATCH_API LogConfiguration() = default;
    AWS_BATCH_API LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The log driver to use for the container. The valid values that are listed for
     * this parameter are log drivers that the Amazon ECS container agent can
     * communicate with by default.</p> <p>The supported log drivers are
     * <code>awsfirelens</code>, <code>awslogs</code>, <code>fluentd</code>,
     * <code>gelf</code>, <code>json-file</code>, <code>journald</code>,
     * <code>logentries</code>, <code>syslog</code>, and <code>splunk</code>.</p>
     *  <p>Jobs that are running on Fargate resources are restricted to the
     * <code>awslogs</code> and <code>splunk</code> log drivers.</p>  <dl>
     * <dt>awsfirelens</dt> <dd> <p>Specifies the firelens logging driver. For more
     * information on configuring Firelens, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Send
     * Amazon ECS logs to an Amazon Web Services service or Amazon Web Services
     * Partner</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     * </dd> <dt>awslogs</dt> <dd> <p>Specifies the Amazon CloudWatch Logs logging
     * driver. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/using_awslogs.html">Using
     * the awslogs log driver</a> in the <i>Batch User Guide</i> and <a
     * href="https://docs.docker.com/config/containers/logging/awslogs/">Amazon
     * CloudWatch Logs logging driver</a> in the Docker documentation.</p> </dd>
     * <dt>fluentd</dt> <dd> <p>Specifies the Fluentd logging driver. For more
     * information including usage and options, see <a
     * href="https://docs.docker.com/config/containers/logging/fluentd/">Fluentd
     * logging driver</a> in the <i>Docker documentation</i>.</p> </dd> <dt>gelf</dt>
     * <dd> <p>Specifies the Graylog Extended Format (GELF) logging driver. For more
     * information including usage and options, see <a
     * href="https://docs.docker.com/config/containers/logging/gelf/">Graylog Extended
     * Format logging driver</a> in the <i>Docker documentation</i>.</p> </dd>
     * <dt>journald</dt> <dd> <p>Specifies the journald logging driver. For more
     * information including usage and options, see <a
     * href="https://docs.docker.com/config/containers/logging/journald/">Journald
     * logging driver</a> in the <i>Docker documentation</i>.</p> </dd>
     * <dt>json-file</dt> <dd> <p>Specifies the JSON file logging driver. For more
     * information including usage and options, see <a
     * href="https://docs.docker.com/config/containers/logging/json-file/">JSON File
     * logging driver</a> in the <i>Docker documentation</i>.</p> </dd> <dt>splunk</dt>
     * <dd> <p>Specifies the Splunk logging driver. For more information including
     * usage and options, see <a
     * href="https://docs.docker.com/config/containers/logging/splunk/">Splunk logging
     * driver</a> in the <i>Docker documentation</i>.</p> </dd> <dt>syslog</dt> <dd>
     * <p>Specifies the syslog logging driver. For more information including usage and
     * options, see <a
     * href="https://docs.docker.com/config/containers/logging/syslog/">Syslog logging
     * driver</a> in the <i>Docker documentation</i>.</p> </dd> </dl>  <p>If you
     * have a custom driver that's not listed earlier that you want to work with the
     * Amazon ECS container agent, you can fork the Amazon ECS container agent project
     * that's <a href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a>
     * and customize it to work with that driver. We encourage you to submit pull
     * requests for changes that you want to have included. However, Amazon Web
     * Services doesn't currently support running modified copies of this software.</p>
     *  <p>This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline LogDriver GetLogDriver() const { return m_logDriver; }
    inline bool LogDriverHasBeenSet() const { return m_logDriverHasBeenSet; }
    inline void SetLogDriver(LogDriver value) { m_logDriverHasBeenSet = true; m_logDriver = value; }
    inline LogConfiguration& WithLogDriver(LogDriver value) { SetLogDriver(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    LogConfiguration& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsKeyT = Aws::String, typename OptionsValueT = Aws::String>
    LogConfiguration& AddOptions(OptionsKeyT&& key, OptionsValueT&& value) {
      m_optionsHasBeenSet = true; m_options.emplace(std::forward<OptionsKeyT>(key), std::forward<OptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the log configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecretOptions() const { return m_secretOptions; }
    inline bool SecretOptionsHasBeenSet() const { return m_secretOptionsHasBeenSet; }
    template<typename SecretOptionsT = Aws::Vector<Secret>>
    void SetSecretOptions(SecretOptionsT&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions = std::forward<SecretOptionsT>(value); }
    template<typename SecretOptionsT = Aws::Vector<Secret>>
    LogConfiguration& WithSecretOptions(SecretOptionsT&& value) { SetSecretOptions(std::forward<SecretOptionsT>(value)); return *this;}
    template<typename SecretOptionsT = Secret>
    LogConfiguration& AddSecretOptions(SecretOptionsT&& value) { m_secretOptionsHasBeenSet = true; m_secretOptions.emplace_back(std::forward<SecretOptionsT>(value)); return *this; }
    ///@}
  private:

    LogDriver m_logDriver{LogDriver::NOT_SET};
    bool m_logDriverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<Secret> m_secretOptions;
    bool m_secretOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
