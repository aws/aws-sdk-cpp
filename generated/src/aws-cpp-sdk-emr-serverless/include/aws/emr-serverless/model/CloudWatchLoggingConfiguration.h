/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The Amazon CloudWatch configuration for monitoring logs. You can configure
   * your jobs to send log information to CloudWatch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/CloudWatchLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudWatchLoggingConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API CloudWatchLoggingConfiguration() = default;
    AWS_EMRSERVERLESS_API CloudWatchLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API CloudWatchLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables CloudWatch logging.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CloudWatchLoggingConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    CloudWatchLoggingConfiguration& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
    template<typename LogStreamNamePrefixT = Aws::String>
    void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value); }
    template<typename LogStreamNamePrefixT = Aws::String>
    CloudWatchLoggingConfiguration& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) { SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    CloudWatchLoggingConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of logs that you want to publish to CloudWatch. If you don't
     * specify any log types, driver STDOUT and STDERR logs will be published to
     * CloudWatch Logs by default. For more information including the supported worker
     * types for Hive and Spark, see <a
     * href="https://docs.aws.amazon.com/emr/latest/EMR-Serverless-UserGuide/logging.html#jobs-log-storage-cw">Logging
     * for EMR Serverless with CloudWatch</a>.</p> <ul> <li> <p> <b>Key Valid
     * Values</b>: <code>SPARK_DRIVER</code>, <code>SPARK_EXECUTOR</code>,
     * <code>HIVE_DRIVER</code>, <code>TEZ_TASK</code> </p> </li> <li> <p> <b>Array
     * Members Valid Values</b>: <code>STDOUT</code>, <code>STDERR</code>,
     * <code>HIVE_LOG</code>, <code>TEZ_AM</code>, <code>SYSTEM_LOGS</code> </p> </li>
     * </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLogTypes() const { return m_logTypes; }
    inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
    template<typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetLogTypes(LogTypesT&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::forward<LogTypesT>(value); }
    template<typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    CloudWatchLoggingConfiguration& WithLogTypes(LogTypesT&& value) { SetLogTypes(std::forward<LogTypesT>(value)); return *this;}
    template<typename LogTypesKeyT = Aws::String, typename LogTypesValueT = Aws::Vector<Aws::String>>
    CloudWatchLoggingConfiguration& AddLogTypes(LogTypesKeyT&& key, LogTypesValueT&& value) {
      m_logTypesHasBeenSet = true; m_logTypes.emplace(std::forward<LogTypesKeyT>(key), std::forward<LogTypesValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_logTypes;
    bool m_logTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
