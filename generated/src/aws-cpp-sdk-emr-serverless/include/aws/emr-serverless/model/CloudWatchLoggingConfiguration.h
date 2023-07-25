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
    AWS_EMRSERVERLESS_API CloudWatchLoggingConfiguration();
    AWS_EMRSERVERLESS_API CloudWatchLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API CloudWatchLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables CloudWatch logging.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables CloudWatch logging.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables CloudWatch logging.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables CloudWatch logging.</p>
     */
    inline CloudWatchLoggingConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline CloudWatchLoggingConfiguration& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline CloudWatchLoggingConfiguration& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
     * your logs.</p>
     */
    inline CloudWatchLoggingConfiguration& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }

    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }

    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::move(value); }

    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }

    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline CloudWatchLoggingConfiguration& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline CloudWatchLoggingConfiguration& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Prefix for the CloudWatch log stream name.</p>
     */
    inline CloudWatchLoggingConfiguration& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}


    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline CloudWatchLoggingConfiguration& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline CloudWatchLoggingConfiguration& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Key Management Service (KMS) key ARN to encrypt the logs that you store
     * in CloudWatch Logs.</p>
     */
    inline CloudWatchLoggingConfiguration& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLogTypes() const{ return m_logTypes; }

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
    inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }

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
    inline void SetLogTypes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_logTypesHasBeenSet = true; m_logTypes = value; }

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
    inline void SetLogTypes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::move(value); }

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
    inline CloudWatchLoggingConfiguration& WithLogTypes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetLogTypes(value); return *this;}

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
    inline CloudWatchLoggingConfiguration& WithLogTypes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetLogTypes(std::move(value)); return *this;}

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
    inline CloudWatchLoggingConfiguration& AddLogTypes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_logTypesHasBeenSet = true; m_logTypes.emplace(key, value); return *this; }

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
    inline CloudWatchLoggingConfiguration& AddLogTypes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_logTypesHasBeenSet = true; m_logTypes.emplace(std::move(key), value); return *this; }

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
    inline CloudWatchLoggingConfiguration& AddLogTypes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_logTypesHasBeenSet = true; m_logTypes.emplace(key, std::move(value)); return *this; }

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
    inline CloudWatchLoggingConfiguration& AddLogTypes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_logTypesHasBeenSet = true; m_logTypes.emplace(std::move(key), std::move(value)); return *this; }

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
    inline CloudWatchLoggingConfiguration& AddLogTypes(const char* key, Aws::Vector<Aws::String>&& value) { m_logTypesHasBeenSet = true; m_logTypes.emplace(key, std::move(value)); return *this; }

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
    inline CloudWatchLoggingConfiguration& AddLogTypes(const char* key, const Aws::Vector<Aws::String>& value) { m_logTypesHasBeenSet = true; m_logTypes.emplace(key, value); return *this; }

  private:

    bool m_enabled;
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
