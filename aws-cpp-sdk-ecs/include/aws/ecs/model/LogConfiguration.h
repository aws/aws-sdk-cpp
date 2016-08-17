/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/LogDriver.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>Log configuration options to send to a custom log driver for the
   * container.</p>
   */
  class AWS_ECS_API LogConfiguration
  {
  public:
    LogConfiguration();
    LogConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    LogConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The log driver to use for the container. The valid values listed for this
     * parameter are log drivers that the Amazon ECS container agent can communicate
     * with by default. </p> <note> <p>If you have a custom driver that is not listed
     * above that you would like to work with the Amazon ECS container agent, you can
     * fork the Amazon ECS container agent project that is <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, Amazon Web Services
     * does not currently provide support for running modified copies of this
     * software.</p> </note> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log into your container instance and run the
     * following command: <code>sudo docker version | grep "Server API version"</code>
     * </p>
     */
    inline const LogDriver& GetLogDriver() const{ return m_logDriver; }

    /**
     * <p>The log driver to use for the container. The valid values listed for this
     * parameter are log drivers that the Amazon ECS container agent can communicate
     * with by default. </p> <note> <p>If you have a custom driver that is not listed
     * above that you would like to work with the Amazon ECS container agent, you can
     * fork the Amazon ECS container agent project that is <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, Amazon Web Services
     * does not currently provide support for running modified copies of this
     * software.</p> </note> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log into your container instance and run the
     * following command: <code>sudo docker version | grep "Server API version"</code>
     * </p>
     */
    inline void SetLogDriver(const LogDriver& value) { m_logDriverHasBeenSet = true; m_logDriver = value; }

    /**
     * <p>The log driver to use for the container. The valid values listed for this
     * parameter are log drivers that the Amazon ECS container agent can communicate
     * with by default. </p> <note> <p>If you have a custom driver that is not listed
     * above that you would like to work with the Amazon ECS container agent, you can
     * fork the Amazon ECS container agent project that is <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, Amazon Web Services
     * does not currently provide support for running modified copies of this
     * software.</p> </note> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log into your container instance and run the
     * following command: <code>sudo docker version | grep "Server API version"</code>
     * </p>
     */
    inline void SetLogDriver(LogDriver&& value) { m_logDriverHasBeenSet = true; m_logDriver = value; }

    /**
     * <p>The log driver to use for the container. The valid values listed for this
     * parameter are log drivers that the Amazon ECS container agent can communicate
     * with by default. </p> <note> <p>If you have a custom driver that is not listed
     * above that you would like to work with the Amazon ECS container agent, you can
     * fork the Amazon ECS container agent project that is <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, Amazon Web Services
     * does not currently provide support for running modified copies of this
     * software.</p> </note> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log into your container instance and run the
     * following command: <code>sudo docker version | grep "Server API version"</code>
     * </p>
     */
    inline LogConfiguration& WithLogDriver(const LogDriver& value) { SetLogDriver(value); return *this;}

    /**
     * <p>The log driver to use for the container. The valid values listed for this
     * parameter are log drivers that the Amazon ECS container agent can communicate
     * with by default. </p> <note> <p>If you have a custom driver that is not listed
     * above that you would like to work with the Amazon ECS container agent, you can
     * fork the Amazon ECS container agent project that is <a
     * href="https://github.com/aws/amazon-ecs-agent">available on GitHub</a> and
     * customize it to work with that driver. We encourage you to submit pull requests
     * for changes that you would like to have included. However, Amazon Web Services
     * does not currently provide support for running modified copies of this
     * software.</p> </note> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log into your container instance and run the
     * following command: <code>sudo docker version | grep "Server API version"</code>
     * </p>
     */
    inline LogConfiguration& WithLogDriver(LogDriver&& value) { SetLogDriver(value); return *this;}

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(value); return *this;}

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

    /**
     * <p>The configuration options to send to the log driver. This parameter requires
     * version 1.19 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log into your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>
     */
    inline LogConfiguration& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options[key] = value; return *this; }

  private:
    LogDriver m_logDriver;
    bool m_logDriverHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
