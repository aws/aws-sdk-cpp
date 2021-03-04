/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mwaa/model/LastUpdate.h>
#include <aws/mwaa/model/LoggingConfiguration.h>
#include <aws/mwaa/model/NetworkConfiguration.h>
#include <aws/mwaa/model/EnvironmentStatus.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>An Amazon MWAA environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/Environment">AWS
   * API Reference</a></p>
   */
  class AWS_MWAA_API Environment
  {
  public:
    Environment();
    Environment(Aws::Utils::Json::JsonView jsonValue);
    Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const{ return m_airflowConfigurationOptions; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline void SetAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = value; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline void SetAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::move(value); }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAirflowConfigurationOptions(value); return *this;}

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAirflowConfigurationOptions(std::move(value)); return *this;}

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const Aws::String& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const Aws::String& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const char* key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(Aws::String&& key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Airflow Configuration Options of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddAirflowConfigurationOptions(const char* key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }


    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetAirflowVersion() const{ return m_airflowVersion; }

    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }

    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline void SetAirflowVersion(const Aws::String& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = value; }

    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline void SetAirflowVersion(Aws::String&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::move(value); }

    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline void SetAirflowVersion(const char* value) { m_airflowVersionHasBeenSet = true; m_airflowVersion.assign(value); }

    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithAirflowVersion(const Aws::String& value) { SetAirflowVersion(value); return *this;}

    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithAirflowVersion(Aws::String&& value) { SetAirflowVersion(std::move(value)); return *this;}

    /**
     * <p>The AirflowV ersion of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithAirflowVersion(const char* value) { SetAirflowVersion(value); return *this;}


    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Created At date of the Amazon MWAA Environment.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Created At date of the Amazon MWAA Environment.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Created At date of the Amazon MWAA Environment.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Created At date of the Amazon MWAA Environment.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Created At date of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Created At date of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetDagS3Path() const{ return m_dagS3Path; }

    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }

    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetDagS3Path(const Aws::String& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = value; }

    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetDagS3Path(Aws::String&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::move(value); }

    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetDagS3Path(const char* value) { m_dagS3PathHasBeenSet = true; m_dagS3Path.assign(value); }

    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithDagS3Path(const Aws::String& value) { SetDagS3Path(value); return *this;}

    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithDagS3Path(Aws::String&& value) { SetDagS3Path(std::move(value)); return *this;}

    /**
     * <p>The Dags S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithDagS3Path(const char* value) { SetDagS3Path(value); return *this;}


    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetEnvironmentClass() const{ return m_environmentClass; }

    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline bool EnvironmentClassHasBeenSet() const { return m_environmentClassHasBeenSet; }

    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline void SetEnvironmentClass(const Aws::String& value) { m_environmentClassHasBeenSet = true; m_environmentClass = value; }

    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline void SetEnvironmentClass(Aws::String&& value) { m_environmentClassHasBeenSet = true; m_environmentClass = std::move(value); }

    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline void SetEnvironmentClass(const char* value) { m_environmentClassHasBeenSet = true; m_environmentClass.assign(value); }

    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithEnvironmentClass(const Aws::String& value) { SetEnvironmentClass(value); return *this;}

    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithEnvironmentClass(Aws::String&& value) { SetEnvironmentClass(std::move(value)); return *this;}

    /**
     * <p>The Environment Class (size) of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithEnvironmentClass(const char* value) { SetEnvironmentClass(value); return *this;}


    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Execution Role ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p>The Kms Key of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    
    inline const LastUpdate& GetLastUpdate() const{ return m_lastUpdate; }

    
    inline bool LastUpdateHasBeenSet() const { return m_lastUpdateHasBeenSet; }

    
    inline void SetLastUpdate(const LastUpdate& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = value; }

    
    inline void SetLastUpdate(LastUpdate&& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = std::move(value); }

    
    inline Environment& WithLastUpdate(const LastUpdate& value) { SetLastUpdate(value); return *this;}

    
    inline Environment& WithLastUpdate(LastUpdate&& value) { SetLastUpdate(std::move(value)); return *this;}


    /**
     * <p>The Logging Configuration of the Amazon MWAA Environment.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The Logging Configuration of the Amazon MWAA Environment.</p>
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>The Logging Configuration of the Amazon MWAA Environment.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>The Logging Configuration of the Amazon MWAA Environment.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>The Logging Configuration of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The Logging Configuration of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The maximum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline int GetMaxWorkers() const{ return m_maxWorkers; }

    /**
     * <p>The maximum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline bool MaxWorkersHasBeenSet() const { return m_maxWorkersHasBeenSet; }

    /**
     * <p>The maximum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline void SetMaxWorkers(int value) { m_maxWorkersHasBeenSet = true; m_maxWorkers = value; }

    /**
     * <p>The maximum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline Environment& WithMaxWorkers(int value) { SetMaxWorkers(value); return *this;}


    /**
     * <p>The minimum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline int GetMinWorkers() const{ return m_minWorkers; }

    /**
     * <p>The minimum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }

    /**
     * <p>The minimum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }

    /**
     * <p>The minimum number of workers to run in your Amazon MWAA Environment.</p>
     */
    inline Environment& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}


    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithName(const char* value) { SetName(value); return *this;}


    
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    
    inline Environment& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    
    inline Environment& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetPluginsS3ObjectVersion() const{ return m_pluginsS3ObjectVersion; }

    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }

    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline void SetPluginsS3ObjectVersion(const Aws::String& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = value; }

    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline void SetPluginsS3ObjectVersion(Aws::String&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::move(value); }

    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline void SetPluginsS3ObjectVersion(const char* value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion.assign(value); }

    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithPluginsS3ObjectVersion(const Aws::String& value) { SetPluginsS3ObjectVersion(value); return *this;}

    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithPluginsS3ObjectVersion(Aws::String&& value) { SetPluginsS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The Plugins.zip S3 Object Version of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithPluginsS3ObjectVersion(const char* value) { SetPluginsS3ObjectVersion(value); return *this;}


    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const{ return m_pluginsS3Path; }

    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }

    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetPluginsS3Path(const Aws::String& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = value; }

    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetPluginsS3Path(Aws::String&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::move(value); }

    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetPluginsS3Path(const char* value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path.assign(value); }

    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithPluginsS3Path(const Aws::String& value) { SetPluginsS3Path(value); return *this;}

    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithPluginsS3Path(Aws::String&& value) { SetPluginsS3Path(std::move(value)); return *this;}

    /**
     * <p>The Plugins.zip S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithPluginsS3Path(const char* value) { SetPluginsS3Path(value); return *this;}


    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline const Aws::String& GetRequirementsS3ObjectVersion() const{ return m_requirementsS3ObjectVersion; }

    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }

    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline void SetRequirementsS3ObjectVersion(const Aws::String& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = value; }

    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline void SetRequirementsS3ObjectVersion(Aws::String&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::move(value); }

    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline void SetRequirementsS3ObjectVersion(const char* value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion.assign(value); }

    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline Environment& WithRequirementsS3ObjectVersion(const Aws::String& value) { SetRequirementsS3ObjectVersion(value); return *this;}

    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline Environment& WithRequirementsS3ObjectVersion(Aws::String&& value) { SetRequirementsS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The Requirements.txt file S3 Object Version of the Amazon MWAA
     * Environment.</p>
     */
    inline Environment& WithRequirementsS3ObjectVersion(const char* value) { SetRequirementsS3ObjectVersion(value); return *this;}


    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const{ return m_requirementsS3Path; }

    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }

    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetRequirementsS3Path(const Aws::String& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = value; }

    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetRequirementsS3Path(Aws::String&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::move(value); }

    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline void SetRequirementsS3Path(const char* value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path.assign(value); }

    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithRequirementsS3Path(const Aws::String& value) { SetRequirementsS3Path(value); return *this;}

    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithRequirementsS3Path(Aws::String&& value) { SetRequirementsS3Path(std::move(value)); return *this;}

    /**
     * <p>The Requirement.txt S3 Path of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithRequirementsS3Path(const char* value) { SetRequirementsS3Path(value); return *this;}


    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Service Role ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetSourceBucketArn() const{ return m_sourceBucketArn; }

    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline bool SourceBucketArnHasBeenSet() const { return m_sourceBucketArnHasBeenSet; }

    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetSourceBucketArn(const Aws::String& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = value; }

    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetSourceBucketArn(Aws::String&& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = std::move(value); }

    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline void SetSourceBucketArn(const char* value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn.assign(value); }

    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithSourceBucketArn(const Aws::String& value) { SetSourceBucketArn(value); return *this;}

    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithSourceBucketArn(Aws::String&& value) { SetSourceBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Source S3 Bucket ARN of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithSourceBucketArn(const char* value) { SetSourceBucketArn(value); return *this;}


    /**
     * <p>The status of the Amazon MWAA Environment.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon MWAA Environment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Amazon MWAA Environment.</p>
     */
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Amazon MWAA Environment.</p>
     */
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Tags of the Amazon MWAA Environment.</p>
     */
    inline Environment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Webserver Access Mode of the Amazon MWAA Environment (public or private
     * only).</p>
     */
    inline const WebserverAccessMode& GetWebserverAccessMode() const{ return m_webserverAccessMode; }

    /**
     * <p>The Webserver Access Mode of the Amazon MWAA Environment (public or private
     * only).</p>
     */
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }

    /**
     * <p>The Webserver Access Mode of the Amazon MWAA Environment (public or private
     * only).</p>
     */
    inline void SetWebserverAccessMode(const WebserverAccessMode& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }

    /**
     * <p>The Webserver Access Mode of the Amazon MWAA Environment (public or private
     * only).</p>
     */
    inline void SetWebserverAccessMode(WebserverAccessMode&& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = std::move(value); }

    /**
     * <p>The Webserver Access Mode of the Amazon MWAA Environment (public or private
     * only).</p>
     */
    inline Environment& WithWebserverAccessMode(const WebserverAccessMode& value) { SetWebserverAccessMode(value); return *this;}

    /**
     * <p>The Webserver Access Mode of the Amazon MWAA Environment (public or private
     * only).</p>
     */
    inline Environment& WithWebserverAccessMode(WebserverAccessMode&& value) { SetWebserverAccessMode(std::move(value)); return *this;}


    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetWebserverUrl() const{ return m_webserverUrl; }

    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline bool WebserverUrlHasBeenSet() const { return m_webserverUrlHasBeenSet; }

    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline void SetWebserverUrl(const Aws::String& value) { m_webserverUrlHasBeenSet = true; m_webserverUrl = value; }

    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline void SetWebserverUrl(Aws::String&& value) { m_webserverUrlHasBeenSet = true; m_webserverUrl = std::move(value); }

    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline void SetWebserverUrl(const char* value) { m_webserverUrlHasBeenSet = true; m_webserverUrl.assign(value); }

    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithWebserverUrl(const Aws::String& value) { SetWebserverUrl(value); return *this;}

    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithWebserverUrl(Aws::String&& value) { SetWebserverUrl(std::move(value)); return *this;}

    /**
     * <p>The Webserver URL of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithWebserverUrl(const char* value) { SetWebserverUrl(value); return *this;}


    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }

    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }

    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }

    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }

    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }

    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}

    /**
     * <p>The Weekly Maintenance Window Start of the Amazon MWAA Environment.</p>
     */
    inline Environment& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_airflowConfigurationOptions;
    bool m_airflowConfigurationOptionsHasBeenSet;

    Aws::String m_airflowVersion;
    bool m_airflowVersionHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_dagS3Path;
    bool m_dagS3PathHasBeenSet;

    Aws::String m_environmentClass;
    bool m_environmentClassHasBeenSet;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet;

    LastUpdate m_lastUpdate;
    bool m_lastUpdateHasBeenSet;

    LoggingConfiguration m_loggingConfiguration;
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

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    Aws::String m_sourceBucketArn;
    bool m_sourceBucketArnHasBeenSet;

    EnvironmentStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    WebserverAccessMode m_webserverAccessMode;
    bool m_webserverAccessModeHasBeenSet;

    Aws::String m_webserverUrl;
    bool m_webserverUrlHasBeenSet;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
