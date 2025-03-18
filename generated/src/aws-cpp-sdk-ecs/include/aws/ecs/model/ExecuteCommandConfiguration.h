/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ExecuteCommandLogging.h>
#include <aws/ecs/model/ExecuteCommandLogConfiguration.h>
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
   * <p>The details of the execute command configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExecuteCommandConfiguration">AWS
   * API Reference</a></p>
   */
  class ExecuteCommandConfiguration
  {
  public:
    AWS_ECS_API ExecuteCommandConfiguration() = default;
    AWS_ECS_API ExecuteCommandConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ExecuteCommandConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify an Key Management Service key ID to encrypt the data between the
     * local client and the container.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ExecuteCommandConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log setting to use for redirecting logs for your execute command results.
     * The following log settings are available.</p> <ul> <li> <p> <code>NONE</code>:
     * The execute command session is not logged.</p> </li> <li> <p>
     * <code>DEFAULT</code>: The <code>awslogs</code> configuration in the task
     * definition is used. If no logging parameter is specified, it defaults to this
     * value. If no <code>awslogs</code> log driver is configured in the task
     * definition, the output won't be logged.</p> </li> <li> <p>
     * <code>OVERRIDE</code>: Specify the logging details as a part of
     * <code>logConfiguration</code>. If the <code>OVERRIDE</code> logging option is
     * specified, the <code>logConfiguration</code> is required.</p> </li> </ul>
     */
    inline ExecuteCommandLogging GetLogging() const { return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(ExecuteCommandLogging value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline ExecuteCommandConfiguration& WithLogging(ExecuteCommandLogging value) { SetLogging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration for the results of the execute command actions. The
     * logs can be sent to CloudWatch Logs or an Amazon S3 bucket. When
     * <code>logging=OVERRIDE</code> is specified, a <code>logConfiguration</code> must
     * be provided.</p>
     */
    inline const ExecuteCommandLogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = ExecuteCommandLogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = ExecuteCommandLogConfiguration>
    ExecuteCommandConfiguration& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ExecuteCommandLogging m_logging{ExecuteCommandLogging::NOT_SET};
    bool m_loggingHasBeenSet = false;

    ExecuteCommandLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
