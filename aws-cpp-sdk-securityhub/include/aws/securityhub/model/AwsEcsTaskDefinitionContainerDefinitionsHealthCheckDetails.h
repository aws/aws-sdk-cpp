/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The container health check command and associated configuration parameters
   * for the container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command that the container runs to determine whether it is healthy.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The time period in seconds between each health check execution. The default
     * value is 30 seconds.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The time period in seconds between each health check execution. The default
     * value is 30 seconds.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The time period in seconds between each health check execution. The default
     * value is 30 seconds.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The time period in seconds between each health check execution. The default
     * value is 30 seconds.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The default value is 3.</p>
     */
    inline int GetRetries() const{ return m_retries; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The default value is 3.</p>
     */
    inline bool RetriesHasBeenSet() const { return m_retriesHasBeenSet; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The default value is 3.</p>
     */
    inline void SetRetries(int value) { m_retriesHasBeenSet = true; m_retries = value; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The default value is 3.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& WithRetries(int value) { SetRetries(value); return *this;}


    /**
     * <p>The optional grace period in seconds that allows containers time to bootstrap
     * before failed health checks count towards the maximum number of retries.</p>
     */
    inline int GetStartPeriod() const{ return m_startPeriod; }

    /**
     * <p>The optional grace period in seconds that allows containers time to bootstrap
     * before failed health checks count towards the maximum number of retries.</p>
     */
    inline bool StartPeriodHasBeenSet() const { return m_startPeriodHasBeenSet; }

    /**
     * <p>The optional grace period in seconds that allows containers time to bootstrap
     * before failed health checks count towards the maximum number of retries.</p>
     */
    inline void SetStartPeriod(int value) { m_startPeriodHasBeenSet = true; m_startPeriod = value; }

    /**
     * <p>The optional grace period in seconds that allows containers time to bootstrap
     * before failed health checks count towards the maximum number of retries.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& WithStartPeriod(int value) { SetStartPeriod(value); return *this;}


    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. The default value is 5.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. The default value is 5.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. The default value is 5.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. The default value is 5.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    int m_retries;
    bool m_retriesHasBeenSet = false;

    int m_startPeriod;
    bool m_startPeriodHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
