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
#include <aws/mwaa/model/UpdateNetworkConfigurationInput.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   */
  class AWS_MWAA_API UpdateEnvironmentRequest : public MWAARequest
  {
  public:
    UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAirflowConfigurationOptions() const{ return m_airflowConfigurationOptions; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline bool AirflowConfigurationOptionsHasBeenSet() const { return m_airflowConfigurationOptionsHasBeenSet; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = value; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions = std::move(value); }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithAirflowConfigurationOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAirflowConfigurationOptions(value); return *this;}

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithAirflowConfigurationOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAirflowConfigurationOptions(std::move(value)); return *this;}

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const Aws::String& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, const Aws::String& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const Aws::String& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const char* key, Aws::String&& value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(Aws::String&& key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Airflow Configuration Options to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& AddAirflowConfigurationOptions(const char* key, const char* value) { m_airflowConfigurationOptionsHasBeenSet = true; m_airflowConfigurationOptions.emplace(key, value); return *this; }


    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetAirflowVersion() const{ return m_airflowVersion; }

    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline bool AirflowVersionHasBeenSet() const { return m_airflowVersionHasBeenSet; }

    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline void SetAirflowVersion(const Aws::String& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = value; }

    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline void SetAirflowVersion(Aws::String&& value) { m_airflowVersionHasBeenSet = true; m_airflowVersion = std::move(value); }

    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline void SetAirflowVersion(const char* value) { m_airflowVersionHasBeenSet = true; m_airflowVersion.assign(value); }

    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithAirflowVersion(const Aws::String& value) { SetAirflowVersion(value); return *this;}

    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithAirflowVersion(Aws::String&& value) { SetAirflowVersion(std::move(value)); return *this;}

    /**
     * <p>The Airflow Version to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithAirflowVersion(const char* value) { SetAirflowVersion(value); return *this;}


    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetDagS3Path() const{ return m_dagS3Path; }

    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }

    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetDagS3Path(const Aws::String& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = value; }

    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetDagS3Path(Aws::String&& value) { m_dagS3PathHasBeenSet = true; m_dagS3Path = std::move(value); }

    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetDagS3Path(const char* value) { m_dagS3PathHasBeenSet = true; m_dagS3Path.assign(value); }

    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDagS3Path(const Aws::String& value) { SetDagS3Path(value); return *this;}

    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDagS3Path(Aws::String&& value) { SetDagS3Path(std::move(value)); return *this;}

    /**
     * <p>The Dags folder S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDagS3Path(const char* value) { SetDagS3Path(value); return *this;}


    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetEnvironmentClass() const{ return m_environmentClass; }

    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline bool EnvironmentClassHasBeenSet() const { return m_environmentClassHasBeenSet; }

    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline void SetEnvironmentClass(const Aws::String& value) { m_environmentClassHasBeenSet = true; m_environmentClass = value; }

    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline void SetEnvironmentClass(Aws::String&& value) { m_environmentClassHasBeenSet = true; m_environmentClass = std::move(value); }

    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline void SetEnvironmentClass(const char* value) { m_environmentClassHasBeenSet = true; m_environmentClass.assign(value); }

    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentClass(const Aws::String& value) { SetEnvironmentClass(value); return *this;}

    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentClass(Aws::String&& value) { SetEnvironmentClass(std::move(value)); return *this;}

    /**
     * <p>The Environment Class to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentClass(const char* value) { SetEnvironmentClass(value); return *this;}


    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Executio Role ARN to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The Logging Configuration to update of your Amazon MWAA environment.</p>
     */
    inline const LoggingConfigurationInput& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p>The Logging Configuration to update of your Amazon MWAA environment.</p>
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p>The Logging Configuration to update of your Amazon MWAA environment.</p>
     */
    inline void SetLoggingConfiguration(const LoggingConfigurationInput& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p>The Logging Configuration to update of your Amazon MWAA environment.</p>
     */
    inline void SetLoggingConfiguration(LoggingConfigurationInput&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p>The Logging Configuration to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithLoggingConfiguration(const LoggingConfigurationInput& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p>The Logging Configuration to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithLoggingConfiguration(LoggingConfigurationInput&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The maximum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline int GetMaxWorkers() const{ return m_maxWorkers; }

    /**
     * <p>The maximum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline bool MaxWorkersHasBeenSet() const { return m_maxWorkersHasBeenSet; }

    /**
     * <p>The maximum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline void SetMaxWorkers(int value) { m_maxWorkersHasBeenSet = true; m_maxWorkers = value; }

    /**
     * <p>The maximum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithMaxWorkers(int value) { SetMaxWorkers(value); return *this;}


    /**
     * <p>The minimum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline int GetMinWorkers() const{ return m_minWorkers; }

    /**
     * <p>The minimum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline bool MinWorkersHasBeenSet() const { return m_minWorkersHasBeenSet; }

    /**
     * <p>The minimum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline void SetMinWorkers(int value) { m_minWorkersHasBeenSet = true; m_minWorkers = value; }

    /**
     * <p>The minimum number of workers to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithMinWorkers(int value) { SetMinWorkers(value); return *this;}


    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon MWAA environment that you wish to update.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Network Configuration to update of your Amazon MWAA environment.</p>
     */
    inline const UpdateNetworkConfigurationInput& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The Network Configuration to update of your Amazon MWAA environment.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The Network Configuration to update of your Amazon MWAA environment.</p>
     */
    inline void SetNetworkConfiguration(const UpdateNetworkConfigurationInput& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The Network Configuration to update of your Amazon MWAA environment.</p>
     */
    inline void SetNetworkConfiguration(UpdateNetworkConfigurationInput&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The Network Configuration to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithNetworkConfiguration(const UpdateNetworkConfigurationInput& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The Network Configuration to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithNetworkConfiguration(UpdateNetworkConfigurationInput&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline const Aws::String& GetPluginsS3ObjectVersion() const{ return m_pluginsS3ObjectVersion; }

    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline bool PluginsS3ObjectVersionHasBeenSet() const { return m_pluginsS3ObjectVersionHasBeenSet; }

    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetPluginsS3ObjectVersion(const Aws::String& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = value; }

    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetPluginsS3ObjectVersion(Aws::String&& value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion = std::move(value); }

    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetPluginsS3ObjectVersion(const char* value) { m_pluginsS3ObjectVersionHasBeenSet = true; m_pluginsS3ObjectVersion.assign(value); }

    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithPluginsS3ObjectVersion(const Aws::String& value) { SetPluginsS3ObjectVersion(value); return *this;}

    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithPluginsS3ObjectVersion(Aws::String&& value) { SetPluginsS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The Plugins.zip S3 Object Version to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithPluginsS3ObjectVersion(const char* value) { SetPluginsS3ObjectVersion(value); return *this;}


    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetPluginsS3Path() const{ return m_pluginsS3Path; }

    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline bool PluginsS3PathHasBeenSet() const { return m_pluginsS3PathHasBeenSet; }

    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetPluginsS3Path(const Aws::String& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = value; }

    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetPluginsS3Path(Aws::String&& value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path = std::move(value); }

    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetPluginsS3Path(const char* value) { m_pluginsS3PathHasBeenSet = true; m_pluginsS3Path.assign(value); }

    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithPluginsS3Path(const Aws::String& value) { SetPluginsS3Path(value); return *this;}

    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithPluginsS3Path(Aws::String&& value) { SetPluginsS3Path(std::move(value)); return *this;}

    /**
     * <p>The Plugins.zip S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithPluginsS3Path(const char* value) { SetPluginsS3Path(value); return *this;}


    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline const Aws::String& GetRequirementsS3ObjectVersion() const{ return m_requirementsS3ObjectVersion; }

    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline bool RequirementsS3ObjectVersionHasBeenSet() const { return m_requirementsS3ObjectVersionHasBeenSet; }

    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetRequirementsS3ObjectVersion(const Aws::String& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = value; }

    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetRequirementsS3ObjectVersion(Aws::String&& value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion = std::move(value); }

    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetRequirementsS3ObjectVersion(const char* value) { m_requirementsS3ObjectVersionHasBeenSet = true; m_requirementsS3ObjectVersion.assign(value); }

    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithRequirementsS3ObjectVersion(const Aws::String& value) { SetRequirementsS3ObjectVersion(value); return *this;}

    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithRequirementsS3ObjectVersion(Aws::String&& value) { SetRequirementsS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The Requirements.txt S3 ObjectV ersion to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithRequirementsS3ObjectVersion(const char* value) { SetRequirementsS3ObjectVersion(value); return *this;}


    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetRequirementsS3Path() const{ return m_requirementsS3Path; }

    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline bool RequirementsS3PathHasBeenSet() const { return m_requirementsS3PathHasBeenSet; }

    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetRequirementsS3Path(const Aws::String& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = value; }

    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetRequirementsS3Path(Aws::String&& value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path = std::move(value); }

    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline void SetRequirementsS3Path(const char* value) { m_requirementsS3PathHasBeenSet = true; m_requirementsS3Path.assign(value); }

    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithRequirementsS3Path(const Aws::String& value) { SetRequirementsS3Path(value); return *this;}

    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithRequirementsS3Path(Aws::String&& value) { SetRequirementsS3Path(std::move(value)); return *this;}

    /**
     * <p>The Requirements.txt S3 Path to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithRequirementsS3Path(const char* value) { SetRequirementsS3Path(value); return *this;}


    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline const Aws::String& GetSourceBucketArn() const{ return m_sourceBucketArn; }

    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline bool SourceBucketArnHasBeenSet() const { return m_sourceBucketArnHasBeenSet; }

    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline void SetSourceBucketArn(const Aws::String& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = value; }

    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline void SetSourceBucketArn(Aws::String&& value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn = std::move(value); }

    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline void SetSourceBucketArn(const char* value) { m_sourceBucketArnHasBeenSet = true; m_sourceBucketArn.assign(value); }

    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithSourceBucketArn(const Aws::String& value) { SetSourceBucketArn(value); return *this;}

    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithSourceBucketArn(Aws::String&& value) { SetSourceBucketArn(std::move(value)); return *this;}

    /**
     * <p>The S3 Source Bucket ARN to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithSourceBucketArn(const char* value) { SetSourceBucketArn(value); return *this;}


    /**
     * <p>The Webserver Access Mode to update of your Amazon MWAA environment.</p>
     */
    inline const WebserverAccessMode& GetWebserverAccessMode() const{ return m_webserverAccessMode; }

    /**
     * <p>The Webserver Access Mode to update of your Amazon MWAA environment.</p>
     */
    inline bool WebserverAccessModeHasBeenSet() const { return m_webserverAccessModeHasBeenSet; }

    /**
     * <p>The Webserver Access Mode to update of your Amazon MWAA environment.</p>
     */
    inline void SetWebserverAccessMode(const WebserverAccessMode& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = value; }

    /**
     * <p>The Webserver Access Mode to update of your Amazon MWAA environment.</p>
     */
    inline void SetWebserverAccessMode(WebserverAccessMode&& value) { m_webserverAccessModeHasBeenSet = true; m_webserverAccessMode = std::move(value); }

    /**
     * <p>The Webserver Access Mode to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithWebserverAccessMode(const WebserverAccessMode& value) { SetWebserverAccessMode(value); return *this;}

    /**
     * <p>The Webserver Access Mode to update of your Amazon MWAA environment.</p>
     */
    inline UpdateEnvironmentRequest& WithWebserverAccessMode(WebserverAccessMode&& value) { SetWebserverAccessMode(std::move(value)); return *this;}


    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }

    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }

    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }

    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }

    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }

    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}

    /**
     * <p>The Weekly Maintenance Window Start to update of your Amazon MWAA
     * environment.</p>
     */
    inline UpdateEnvironmentRequest& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}

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

    LoggingConfigurationInput m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet;

    int m_maxWorkers;
    bool m_maxWorkersHasBeenSet;

    int m_minWorkers;
    bool m_minWorkersHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    UpdateNetworkConfigurationInput m_networkConfiguration;
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

    WebserverAccessMode m_webserverAccessMode;
    bool m_webserverAccessModeHasBeenSet;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
