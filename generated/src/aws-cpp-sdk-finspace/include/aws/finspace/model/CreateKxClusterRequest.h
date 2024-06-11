/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxClusterType.h>
#include <aws/finspace/model/TickerplantLogConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/AutoScalingConfiguration.h>
#include <aws/finspace/model/CapacityConfiguration.h>
#include <aws/finspace/model/VpcConfiguration.h>
#include <aws/finspace/model/CodeConfiguration.h>
#include <aws/finspace/model/KxSavedownStorageConfiguration.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/finspace/model/KxScalingGroupConfiguration.h>
#include <aws/finspace/model/KxDatabaseConfiguration.h>
#include <aws/finspace/model/KxCacheStorageConfiguration.h>
#include <aws/finspace/model/KxCommandLineArgument.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class CreateKxClusterRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API CreateKxClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKxCluster"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateKxClusterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateKxClusterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline CreateKxClusterRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline CreateKxClusterRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the cluster that you want to create.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline CreateKxClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CreateKxClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of KDB database that is being created. The following types
     * are available: </p> <ul> <li> <p>HDB – A Historical Database. The data is only
     * accessible with read-only permissions from one of the FinSpace managed kdb
     * databases mounted to the cluster.</p> </li> <li> <p>RDB – A Realtime Database.
     * This type of database captures all the data from a ticker plant and stores it in
     * memory until the end of day, after which it writes all of its data to a disk and
     * reloads the HDB. This cluster type requires local storage for temporary storage
     * of data during the savedown process. If you specify this field in your request,
     * you must provide the <code>savedownStorageConfiguration</code> parameter.</p>
     * </li> <li> <p>GATEWAY – A gateway cluster allows you to access data across
     * processes in kdb systems. It allows you to create your own routing logic using
     * the initialization scripts and custom code. This type of cluster does not
     * require a writable local storage.</p> </li> <li> <p>GP – A general purpose
     * cluster allows you to quickly iterate on code during development by granting
     * greater access to system commands and enabling a fast reload of custom code.
     * This cluster type can optionally mount databases including cache and savedown
     * storage. For this cluster type, the node count is fixed at 1. It does not
     * support autoscaling and supports only <code>SINGLE</code> AZ mode.</p> </li>
     * <li> <p>Tickerplant – A tickerplant cluster allows you to subscribe to feed
     * handlers based on IAM permissions. It can publish to RDBs, other Tickerplants,
     * and real-time subscribers (RTS). Tickerplants can persist messages to log, which
     * is readable by any RDB environment. It supports only single-node that is only
     * one kdb process.</p> </li> </ul>
     */
    inline const KxClusterType& GetClusterType() const{ return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(const KxClusterType& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline void SetClusterType(KxClusterType&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }
    inline CreateKxClusterRequest& WithClusterType(const KxClusterType& value) { SetClusterType(value); return *this;}
    inline CreateKxClusterRequest& WithClusterType(KxClusterType&& value) { SetClusterType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A configuration to store Tickerplant logs. It consists of a list of volumes
     * that will be mounted to your cluster. For the cluster type
     * <code>Tickerplant</code>, the location of the TP volume on the cluster will be
     * available by using the global variable <code>.aws.tp_log_path</code>. </p>
     */
    inline const TickerplantLogConfiguration& GetTickerplantLogConfiguration() const{ return m_tickerplantLogConfiguration; }
    inline bool TickerplantLogConfigurationHasBeenSet() const { return m_tickerplantLogConfigurationHasBeenSet; }
    inline void SetTickerplantLogConfiguration(const TickerplantLogConfiguration& value) { m_tickerplantLogConfigurationHasBeenSet = true; m_tickerplantLogConfiguration = value; }
    inline void SetTickerplantLogConfiguration(TickerplantLogConfiguration&& value) { m_tickerplantLogConfigurationHasBeenSet = true; m_tickerplantLogConfiguration = std::move(value); }
    inline CreateKxClusterRequest& WithTickerplantLogConfiguration(const TickerplantLogConfiguration& value) { SetTickerplantLogConfiguration(value); return *this;}
    inline CreateKxClusterRequest& WithTickerplantLogConfiguration(TickerplantLogConfiguration&& value) { SetTickerplantLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of databases that will be available for querying.</p>
     */
    inline const Aws::Vector<KxDatabaseConfiguration>& GetDatabases() const{ return m_databases; }
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }
    inline void SetDatabases(const Aws::Vector<KxDatabaseConfiguration>& value) { m_databasesHasBeenSet = true; m_databases = value; }
    inline void SetDatabases(Aws::Vector<KxDatabaseConfiguration>&& value) { m_databasesHasBeenSet = true; m_databases = std::move(value); }
    inline CreateKxClusterRequest& WithDatabases(const Aws::Vector<KxDatabaseConfiguration>& value) { SetDatabases(value); return *this;}
    inline CreateKxClusterRequest& WithDatabases(Aws::Vector<KxDatabaseConfiguration>&& value) { SetDatabases(std::move(value)); return *this;}
    inline CreateKxClusterRequest& AddDatabases(const KxDatabaseConfiguration& value) { m_databasesHasBeenSet = true; m_databases.push_back(value); return *this; }
    inline CreateKxClusterRequest& AddDatabases(KxDatabaseConfiguration&& value) { m_databasesHasBeenSet = true; m_databases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline const Aws::Vector<KxCacheStorageConfiguration>& GetCacheStorageConfigurations() const{ return m_cacheStorageConfigurations; }
    inline bool CacheStorageConfigurationsHasBeenSet() const { return m_cacheStorageConfigurationsHasBeenSet; }
    inline void SetCacheStorageConfigurations(const Aws::Vector<KxCacheStorageConfiguration>& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations = value; }
    inline void SetCacheStorageConfigurations(Aws::Vector<KxCacheStorageConfiguration>&& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations = std::move(value); }
    inline CreateKxClusterRequest& WithCacheStorageConfigurations(const Aws::Vector<KxCacheStorageConfiguration>& value) { SetCacheStorageConfigurations(value); return *this;}
    inline CreateKxClusterRequest& WithCacheStorageConfigurations(Aws::Vector<KxCacheStorageConfiguration>&& value) { SetCacheStorageConfigurations(std::move(value)); return *this;}
    inline CreateKxClusterRequest& AddCacheStorageConfigurations(const KxCacheStorageConfiguration& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations.push_back(value); return *this; }
    inline CreateKxClusterRequest& AddCacheStorageConfigurations(KxCacheStorageConfiguration&& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const{ return m_autoScalingConfiguration; }
    inline bool AutoScalingConfigurationHasBeenSet() const { return m_autoScalingConfigurationHasBeenSet; }
    inline void SetAutoScalingConfiguration(const AutoScalingConfiguration& value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = value; }
    inline void SetAutoScalingConfiguration(AutoScalingConfiguration&& value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = std::move(value); }
    inline CreateKxClusterRequest& WithAutoScalingConfiguration(const AutoScalingConfiguration& value) { SetAutoScalingConfiguration(value); return *this;}
    inline CreateKxClusterRequest& WithAutoScalingConfiguration(AutoScalingConfiguration&& value) { SetAutoScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster.</p>
     */
    inline const Aws::String& GetClusterDescription() const{ return m_clusterDescription; }
    inline bool ClusterDescriptionHasBeenSet() const { return m_clusterDescriptionHasBeenSet; }
    inline void SetClusterDescription(const Aws::String& value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription = value; }
    inline void SetClusterDescription(Aws::String&& value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription = std::move(value); }
    inline void SetClusterDescription(const char* value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription.assign(value); }
    inline CreateKxClusterRequest& WithClusterDescription(const Aws::String& value) { SetClusterDescription(value); return *this;}
    inline CreateKxClusterRequest& WithClusterDescription(Aws::String&& value) { SetClusterDescription(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithClusterDescription(const char* value) { SetClusterDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline const CapacityConfiguration& GetCapacityConfiguration() const{ return m_capacityConfiguration; }
    inline bool CapacityConfigurationHasBeenSet() const { return m_capacityConfigurationHasBeenSet; }
    inline void SetCapacityConfiguration(const CapacityConfiguration& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = value; }
    inline void SetCapacityConfiguration(CapacityConfiguration&& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = std::move(value); }
    inline CreateKxClusterRequest& WithCapacityConfiguration(const CapacityConfiguration& value) { SetCapacityConfiguration(value); return *this;}
    inline CreateKxClusterRequest& WithCapacityConfiguration(CapacityConfiguration&& value) { SetCapacityConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }
    inline CreateKxClusterRequest& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}
    inline CreateKxClusterRequest& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline CreateKxClusterRequest& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline CreateKxClusterRequest& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline const Aws::String& GetInitializationScript() const{ return m_initializationScript; }
    inline bool InitializationScriptHasBeenSet() const { return m_initializationScriptHasBeenSet; }
    inline void SetInitializationScript(const Aws::String& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = value; }
    inline void SetInitializationScript(Aws::String&& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = std::move(value); }
    inline void SetInitializationScript(const char* value) { m_initializationScriptHasBeenSet = true; m_initializationScript.assign(value); }
    inline CreateKxClusterRequest& WithInitializationScript(const Aws::String& value) { SetInitializationScript(value); return *this;}
    inline CreateKxClusterRequest& WithInitializationScript(Aws::String&& value) { SetInitializationScript(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithInitializationScript(const char* value) { SetInitializationScript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the key-value pairs to make them available inside the cluster.</p>
     */
    inline const Aws::Vector<KxCommandLineArgument>& GetCommandLineArguments() const{ return m_commandLineArguments; }
    inline bool CommandLineArgumentsHasBeenSet() const { return m_commandLineArgumentsHasBeenSet; }
    inline void SetCommandLineArguments(const Aws::Vector<KxCommandLineArgument>& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments = value; }
    inline void SetCommandLineArguments(Aws::Vector<KxCommandLineArgument>&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments = std::move(value); }
    inline CreateKxClusterRequest& WithCommandLineArguments(const Aws::Vector<KxCommandLineArgument>& value) { SetCommandLineArguments(value); return *this;}
    inline CreateKxClusterRequest& WithCommandLineArguments(Aws::Vector<KxCommandLineArgument>&& value) { SetCommandLineArguments(std::move(value)); return *this;}
    inline CreateKxClusterRequest& AddCommandLineArguments(const KxCommandLineArgument& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments.push_back(value); return *this; }
    inline CreateKxClusterRequest& AddCommandLineArguments(KxCommandLineArgument&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline const CodeConfiguration& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const CodeConfiguration& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(CodeConfiguration&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline CreateKxClusterRequest& WithCode(const CodeConfiguration& value) { SetCode(value); return *this;}
    inline CreateKxClusterRequest& WithCode(CodeConfiguration&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another
     * cluster.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline CreateKxClusterRequest& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline CreateKxClusterRequest& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline const KxSavedownStorageConfiguration& GetSavedownStorageConfiguration() const{ return m_savedownStorageConfiguration; }
    inline bool SavedownStorageConfigurationHasBeenSet() const { return m_savedownStorageConfigurationHasBeenSet; }
    inline void SetSavedownStorageConfiguration(const KxSavedownStorageConfiguration& value) { m_savedownStorageConfigurationHasBeenSet = true; m_savedownStorageConfiguration = value; }
    inline void SetSavedownStorageConfiguration(KxSavedownStorageConfiguration&& value) { m_savedownStorageConfigurationHasBeenSet = true; m_savedownStorageConfiguration = std::move(value); }
    inline CreateKxClusterRequest& WithSavedownStorageConfiguration(const KxSavedownStorageConfiguration& value) { SetSavedownStorageConfiguration(value); return *this;}
    inline CreateKxClusterRequest& WithSavedownStorageConfiguration(KxSavedownStorageConfiguration&& value) { SetSavedownStorageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }
    inline CreateKxClusterRequest& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}
    inline CreateKxClusterRequest& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone identifiers for the requested regions.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline CreateKxClusterRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CreateKxClusterRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CreateKxClusterRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to label the cluster. You can add up to 50 tags to
     * a cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateKxClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateKxClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateKxClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateKxClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKxClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKxClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateKxClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateKxClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateKxClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The structure that stores the configuration details of a scaling group.</p>
     */
    inline const KxScalingGroupConfiguration& GetScalingGroupConfiguration() const{ return m_scalingGroupConfiguration; }
    inline bool ScalingGroupConfigurationHasBeenSet() const { return m_scalingGroupConfigurationHasBeenSet; }
    inline void SetScalingGroupConfiguration(const KxScalingGroupConfiguration& value) { m_scalingGroupConfigurationHasBeenSet = true; m_scalingGroupConfiguration = value; }
    inline void SetScalingGroupConfiguration(KxScalingGroupConfiguration&& value) { m_scalingGroupConfigurationHasBeenSet = true; m_scalingGroupConfiguration = std::move(value); }
    inline CreateKxClusterRequest& WithScalingGroupConfiguration(const KxScalingGroupConfiguration& value) { SetScalingGroupConfiguration(value); return *this;}
    inline CreateKxClusterRequest& WithScalingGroupConfiguration(KxScalingGroupConfiguration&& value) { SetScalingGroupConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    KxClusterType m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    TickerplantLogConfiguration m_tickerplantLogConfiguration;
    bool m_tickerplantLogConfigurationHasBeenSet = false;

    Aws::Vector<KxDatabaseConfiguration> m_databases;
    bool m_databasesHasBeenSet = false;

    Aws::Vector<KxCacheStorageConfiguration> m_cacheStorageConfigurations;
    bool m_cacheStorageConfigurationsHasBeenSet = false;

    AutoScalingConfiguration m_autoScalingConfiguration;
    bool m_autoScalingConfigurationHasBeenSet = false;

    Aws::String m_clusterDescription;
    bool m_clusterDescriptionHasBeenSet = false;

    CapacityConfiguration m_capacityConfiguration;
    bool m_capacityConfigurationHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_initializationScript;
    bool m_initializationScriptHasBeenSet = false;

    Aws::Vector<KxCommandLineArgument> m_commandLineArguments;
    bool m_commandLineArgumentsHasBeenSet = false;

    CodeConfiguration m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    KxSavedownStorageConfiguration m_savedownStorageConfiguration;
    bool m_savedownStorageConfigurationHasBeenSet = false;

    KxAzMode m_azMode;
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    KxScalingGroupConfiguration m_scalingGroupConfiguration;
    bool m_scalingGroupConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
