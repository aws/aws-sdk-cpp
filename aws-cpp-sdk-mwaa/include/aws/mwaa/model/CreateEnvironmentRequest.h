/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/model/LoggingConfigurationInput.h>
#include <aws/mwaa/model/NetworkConfiguration.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   * <p>This section contains the Amazon Managed Workflows for Apache Airflow (MWAA)
   * API reference documentation to create an environment. For more information, see
   * <a href="https://docs.aws.amazon.com/mwaa/latest/userguide/get-started.html">Get
   * started with Amazon Managed Workflows for Apache Airflow</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateEnvironmentInput">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API CreateEnvironmentRequest : public MWAARequest
  {
  public:
    CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const{ return m_airflowConfigurationOptions; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline void SetAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = value; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline void SetAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::move(value); }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& WithAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAirflowConfigurationOptions(value); return *this;}

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& WithAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAirflowConfigurationOptions(std::move(value)); return *this;}

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& AddAirflowConfigurationOptions(const Aws::String& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& AddAirflowConfigurationOptions(const Aws::String& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& AddAirflowConfigurationOptions(const char* key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Apache Airflow configuration setting you want to override in your
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-env-variables.html">Environment
     * configuration</a>.</p>
     */
    inline CreateEnvironmentRequest& AddAirflowConfigurationOptions(const char* key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }


    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline const Aws::String& GetAirflowVersion() const{ return m_airflowVersion; }

    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }

    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline void SetAirflowVersion(const Aws::String& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = value; }

    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline void SetAirflowVersion(Aws::String&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::move(value); }

    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline void SetAirflowVersion(const char* value) { m_airflowVersionHasBeenSet = true; m_airflowVersion.assign(value); }

    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline CreateEnvironmentRequest& WithAirflowVersion(const Aws::String& value) { SetAirflowVersion(value); return *this;}

    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline CreateEnvironmentRequest& WithAirflowVersion(Aws::String&& value) { SetAirflowVersion(std::move(value)); return *this;}

    /**
     * <p>The Apache Airflow version you want to use for your environment.</p>
     */
    inline CreateEnvironmentRequest& WithAirflowVersion(const char* value) { SetAirflowVersion(value); return *this;}


    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline const Aws::String& GetDagS3Path() const{ return m_dagS3Path; }

    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }

    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetDagS3Path(const Aws::String& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = value; }

    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetDagS3Path(Aws::String&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::move(value); }

    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetDagS3Path(const char* value) { m_dagS3PathHasBeenSet = true; m_dagS3Path.assign(value); }

    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithDagS3Path(const Aws::String& value) { SetDagS3Path(value); return *this;}

    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithDagS3Path(Aws::String&& value) { SetDagS3Path(std::move(value)); return *this;}

    /**
     * <p>The relative path to the DAG folder on your Amazon S3 storage bucket. For
     * example, <code>dags</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithDagS3Path(const char* value) { SetDagS3Path(value); return *this;}


    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline const Aws::String& GetEnvironmentClass() const{ return m_environmentClass; }

    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline bool EnvironmentClassHasBeenSet() const { return m_environmentClassHasBeenSet; }

    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline void SetEnvironmentClass(const Aws::String& value) { m_environmentClassHasBeenSet = true; m_environmentClass = value; }

    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline void SetEnvironmentClass(Aws::String&& value) { m_environmentClassHasBeenSet = true; m_environmentClass = std::move(value); }

    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline void SetEnvironmentClass(const char* value) { m_environmentClassHasBeenSet = true; m_environmentClass.assign(value); }

    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentClass(const Aws::String& value) { SetEnvironmentClass(value); return *this;}

    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentClass(Aws::String&& value) { SetEnvironmentClass(std::move(value)); return *this;}

    /**
     * <p>The environment class you want to use for your environment. The environment
     * class determines the size of the containers and database used for your Apache
     * Airflow services.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentClass(const char* value) { SetEnvironmentClass(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline CreateEnvironmentRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline CreateEnvironmentRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role for your environment. An
     * execution role is an AWS Identity and Access Management (IAM) role that grants
     * MWAA permission to access AWS services and resources used by your environment.
     * For example, <code>arn:aws:iam::123456789:role/my-execution-role</code>. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/manage-access.html">Managing
     * access to Amazon Managed Workflows for Apache Airflow</a>.</p>
     */
    inline CreateEnvironmentRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (KMS) key to encrypt and decrypt the data in
     * your environment. You can use an AWS KMS key managed by MWAA, or a custom KMS
     * key (advanced). For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html?icmpid=docs_console_unmapped#master_keys">Customer
     * master keys (CMKs)</a> in the AWS KMS developer guide.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p>The Apache Airflow logs you want to send to Amazon CloudWatch Logs.</p>
     */
    inline const LoggingConfigurationInput& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The Apache Airflow logs you want to send to Amazon CloudWatch Logs.</p>
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>The Apache Airflow logs you want to send to Amazon CloudWatch Logs.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfigurationInput& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>The Apache Airflow logs you want to send to Amazon CloudWatch Logs.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfigurationInput&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>The Apache Airflow logs you want to send to Amazon CloudWatch Logs.</p>
     */
    inline CreateEnvironmentRequest& WithLoggingConfiguration(const LoggingConfigurationInput& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The Apache Airflow logs you want to send to Amazon CloudWatch Logs.</p>
     */
    inline CreateEnvironmentRequest& WithLoggingConfiguration(LoggingConfigurationInput&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The maximum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in this field. When there are no more
     * tasks running, and no more in the queue, MWAA disposes of the extra containers
     * leaving the one worker that is included with your environment.</p>
     */
    inline int GetMaxWorkers() const{ return m_maxWorkers; }

    /**
     * <p>The maximum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in this field. When there are no more
     * tasks running, and no more in the queue, MWAA disposes of the extra containers
     * leaving the one worker that is included with your environment.</p>
     */
    inline bool MaxWorkersHasBeenSet() const { return m_maxWorkersHasBeenSet; }

    /**
     * <p>The maximum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in this field. When there are no more
     * tasks running, and no more in the queue, MWAA disposes of the extra containers
     * leaving the one worker that is included with your environment.</p>
     */
    inline void SetMaxWorkers(int value) { m_maxWorkersHasBeenSet = true; m_maxWorkers = value; }

    /**
     * <p>The maximum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in this field. When there are no more
     * tasks running, and no more in the queue, MWAA disposes of the extra containers
     * leaving the one worker that is included with your environment.</p>
     */
    inline CreateEnvironmentRequest& WithMaxWorkers(int value) { SetMaxWorkers(value); return *this;}


    /**
     * <p>The minimum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in the <code>MaxWorkers</code> field.
     * When there are no more tasks running, and no more in the queue, MWAA disposes of
     * the extra containers leaving the worker count you specify in the
     * <code>MinWorkers</code> field.</p>
     */
    inline int GetMinWorkers() const{ return m_minWorkers; }

    /**
     * <p>The minimum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in the <code>MaxWorkers</code> field.
     * When there are no more tasks running, and no more in the queue, MWAA disposes of
     * the extra containers leaving the worker count you specify in the
     * <code>MinWorkers</code> field.</p>
     */
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }

    /**
     * <p>The minimum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in the <code>MaxWorkers</code> field.
     * When there are no more tasks running, and no more in the queue, MWAA disposes of
     * the extra containers leaving the worker count you specify in the
     * <code>MinWorkers</code> field.</p>
     */
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }

    /**
     * <p>The minimum number of workers that you want to run in your environment. MWAA
     * scales the number of Apache Airflow workers and the Fargate containers that run
     * your tasks up to the number you specify in the <code>MaxWorkers</code> field.
     * When there are no more tasks running, and no more in the queue, MWAA disposes of
     * the extra containers leaving the worker count you specify in the
     * <code>MinWorkers</code> field.</p>
     */
    inline CreateEnvironmentRequest& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}


    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of your MWAA environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The VPC networking components you want to use for your environment. At least
     * two private subnet identifiers and one VPC security group identifier are
     * required to create an environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The VPC networking components you want to use for your environment. At least
     * two private subnet identifiers and one VPC security group identifier are
     * required to create an environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The VPC networking components you want to use for your environment. At least
     * two private subnet identifiers and one VPC security group identifier are
     * required to create an environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The VPC networking components you want to use for your environment. At least
     * two private subnet identifiers and one VPC security group identifier are
     * required to create an environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The VPC networking components you want to use for your environment. At least
     * two private subnet identifiers and one VPC security group identifier are
     * required to create an environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline CreateEnvironmentRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The VPC networking components you want to use for your environment. At least
     * two private subnet identifiers and one VPC security group identifier are
     * required to create an environment. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline CreateEnvironmentRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline const Aws::String& GetPluginsS3ObjectVersion() const{ return m_pluginsS3ObjectVersion; }

    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }

    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline void SetPluginsS3ObjectVersion(const Aws::String& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = value; }

    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline void SetPluginsS3ObjectVersion(Aws::String&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::move(value); }

    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline void SetPluginsS3ObjectVersion(const char* value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion.assign(value); }

    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline CreateEnvironmentRequest& WithPluginsS3ObjectVersion(const Aws::String& value) { SetPluginsS3ObjectVersion(value); return *this;}

    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline CreateEnvironmentRequest& WithPluginsS3ObjectVersion(Aws::String&& value) { SetPluginsS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The <code>plugins.zip</code> file version you want to use.</p>
     */
    inline CreateEnvironmentRequest& WithPluginsS3ObjectVersion(const char* value) { SetPluginsS3ObjectVersion(value); return *this;}


    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const{ return m_pluginsS3Path; }

    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }

    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetPluginsS3Path(const Aws::String& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = value; }

    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetPluginsS3Path(Aws::String&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::move(value); }

    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetPluginsS3Path(const char* value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path.assign(value); }

    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithPluginsS3Path(const Aws::String& value) { SetPluginsS3Path(value); return *this;}

    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithPluginsS3Path(Aws::String&& value) { SetPluginsS3Path(std::move(value)); return *this;}

    /**
     * <p>The relative path to the <code>plugins.zip</code> file on your Amazon S3
     * storage bucket. For example, <code>plugins.zip</code>. If a relative path is
     * provided in the request, then <code>PluginsS3ObjectVersion</code> is required.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithPluginsS3Path(const char* value) { SetPluginsS3Path(value); return *this;}


    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline const Aws::String& GetRequirementsS3ObjectVersion() const{ return m_requirementsS3ObjectVersion; }

    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }

    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline void SetRequirementsS3ObjectVersion(const Aws::String& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = value; }

    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline void SetRequirementsS3ObjectVersion(Aws::String&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::move(value); }

    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline void SetRequirementsS3ObjectVersion(const char* value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion.assign(value); }

    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline CreateEnvironmentRequest& WithRequirementsS3ObjectVersion(const Aws::String& value) { SetRequirementsS3ObjectVersion(value); return *this;}

    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline CreateEnvironmentRequest& WithRequirementsS3ObjectVersion(Aws::String&& value) { SetRequirementsS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The <code>requirements.txt</code> file version you want to use.</p>
     */
    inline CreateEnvironmentRequest& WithRequirementsS3ObjectVersion(const char* value) { SetRequirementsS3ObjectVersion(value); return *this;}


    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const{ return m_requirementsS3Path; }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetRequirementsS3Path(const Aws::String& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = value; }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetRequirementsS3Path(Aws::String&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::move(value); }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline void SetRequirementsS3Path(const char* value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path.assign(value); }

    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithRequirementsS3Path(const Aws::String& value) { SetRequirementsS3Path(value); return *this;}

    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithRequirementsS3Path(Aws::String&& value) { SetRequirementsS3Path(std::move(value)); return *this;}

    /**
     * <p>The relative path to the <code>requirements.txt</code> file on your Amazon S3
     * storage bucket. For example, <code>requirements.txt</code>. If a relative path
     * is provided in the request, then <code>RequirementsS3ObjectVersion</code> is
     * required. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-import.html">Importing
     * DAGs on Amazon MWAA</a>.</p>
     */
    inline CreateEnvironmentRequest& WithRequirementsS3Path(const char* value) { SetRequirementsS3Path(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline const Aws::String& GetSourceBucketArn() const{ return m_sourceBucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline bool SourceBucketArnHasBeenSet() const { return m_sourceBucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline void SetSourceBucketArn(const Aws::String& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline void SetSourceBucketArn(Aws::String&& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline void SetSourceBucketArn(const char* value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline CreateEnvironmentRequest& WithSourceBucketArn(const Aws::String& value) { SetSourceBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline CreateEnvironmentRequest& WithSourceBucketArn(Aws::String&& value) { SetSourceBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your Amazon S3 storage bucket. For example,
     * <code>arn:aws:s3:::airflow-mybucketname</code>.</p>
     */
    inline CreateEnvironmentRequest& WithSourceBucketArn(const char* value) { SetSourceBucketArn(value); return *this;}


    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata tags you want to attach to your environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS resources</a>.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The networking access of your Apache Airflow web server. A public network
     * allows your Airflow UI to be accessed over the Internet by users granted access
     * in your IAM policy. A private network limits access of your Airflow UI to users
     * within your VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline const WebserverAccessMode& GetWebserverAccessMode() const{ return m_webserverAccessMode; }

    /**
     * <p>The networking access of your Apache Airflow web server. A public network
     * allows your Airflow UI to be accessed over the Internet by users granted access
     * in your IAM policy. A private network limits access of your Airflow UI to users
     * within your VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }

    /**
     * <p>The networking access of your Apache Airflow web server. A public network
     * allows your Airflow UI to be accessed over the Internet by users granted access
     * in your IAM policy. A private network limits access of your Airflow UI to users
     * within your VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline void SetWebserverAccessMode(const WebserverAccessMode& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }

    /**
     * <p>The networking access of your Apache Airflow web server. A public network
     * allows your Airflow UI to be accessed over the Internet by users granted access
     * in your IAM policy. A private network limits access of your Airflow UI to users
     * within your VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline void SetWebserverAccessMode(WebserverAccessMode&& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = std::move(value); }

    /**
     * <p>The networking access of your Apache Airflow web server. A public network
     * allows your Airflow UI to be accessed over the Internet by users granted access
     * in your IAM policy. A private network limits access of your Airflow UI to users
     * within your VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline CreateEnvironmentRequest& WithWebserverAccessMode(const WebserverAccessMode& value) { SetWebserverAccessMode(value); return *this;}

    /**
     * <p>The networking access of your Apache Airflow web server. A public network
     * allows your Airflow UI to be accessed over the Internet by users granted access
     * in your IAM policy. A private network limits access of your Airflow UI to users
     * within your VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/mwaa/latest/userguide/vpc-mwaa.html">Creating
     * the VPC network for a MWAA environment</a>.</p>
     */
    inline CreateEnvironmentRequest& WithWebserverAccessMode(WebserverAccessMode&& value) { SetWebserverAccessMode(std::move(value)); return *this;}


    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }

    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }

    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }

    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }

    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }

    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline CreateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline CreateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}

    /**
     * <p>The day and time you want MWAA to start weekly maintenance updates on your
     * environment.</p>
     */
    inline CreateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_airflowConfigurationOptions;
    bool m_airflowConfigurationOptionsHasBeenSet;

    Aws::String m_airflowVersion;
    bool m_airflowVersionHasBeenSet;

    Aws::String m_dagS3Path;
    bool m_dagS3PathHasBeenSet;

    Aws::String m_environmentClass;
    bool m_environmentClassHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet;

    LoggingConfigurationInput m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet;

    int m_maxWorkers;
    bool m_maxWorkersHasBeenSet;

    int m_minWorkers;
    bool m_minWorkersHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet;

    Aws::String m_pluginsS3ObjectVersion;
    bool m_pluginsS3ObjectVersionHasBeenSet;

    Aws::String m_pluginsS3Path;
    bool m_pluginsS3PathHasBeenSet;

    Aws::String m_requirementsS3ObjectVersion;
    bool m_requirementsS3ObjectVersionHasBeenSet;

    Aws::String m_requirementsS3Path;
    bool m_requirementsS3PathHasBeenSet;

    Aws::String m_sourceBucketArn;
    bool m_sourceBucketArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    WebserverAccessMode m_webserverAccessMode;
    bool m_webserverAccessModeHasBeenSet;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
