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
    AWS_FINSPACE_API CreateKxClusterRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateKxClusterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    CreateKxClusterRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the cluster that you want to create.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateKxClusterRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
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
    inline KxClusterType GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(KxClusterType value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline CreateKxClusterRequest& WithClusterType(KxClusterType value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A configuration to store Tickerplant logs. It consists of a list of volumes
     * that will be mounted to your cluster. For the cluster type
     * <code>Tickerplant</code>, the location of the TP volume on the cluster will be
     * available by using the global variable <code>.aws.tp_log_path</code>. </p>
     */
    inline const TickerplantLogConfiguration& GetTickerplantLogConfiguration() const { return m_tickerplantLogConfiguration; }
    inline bool TickerplantLogConfigurationHasBeenSet() const { return m_tickerplantLogConfigurationHasBeenSet; }
    template<typename TickerplantLogConfigurationT = TickerplantLogConfiguration>
    void SetTickerplantLogConfiguration(TickerplantLogConfigurationT&& value) { m_tickerplantLogConfigurationHasBeenSet = true; m_tickerplantLogConfiguration = std::forward<TickerplantLogConfigurationT>(value); }
    template<typename TickerplantLogConfigurationT = TickerplantLogConfiguration>
    CreateKxClusterRequest& WithTickerplantLogConfiguration(TickerplantLogConfigurationT&& value) { SetTickerplantLogConfiguration(std::forward<TickerplantLogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of databases that will be available for querying.</p>
     */
    inline const Aws::Vector<KxDatabaseConfiguration>& GetDatabases() const { return m_databases; }
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }
    template<typename DatabasesT = Aws::Vector<KxDatabaseConfiguration>>
    void SetDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases = std::forward<DatabasesT>(value); }
    template<typename DatabasesT = Aws::Vector<KxDatabaseConfiguration>>
    CreateKxClusterRequest& WithDatabases(DatabasesT&& value) { SetDatabases(std::forward<DatabasesT>(value)); return *this;}
    template<typename DatabasesT = KxDatabaseConfiguration>
    CreateKxClusterRequest& AddDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases.emplace_back(std::forward<DatabasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline const Aws::Vector<KxCacheStorageConfiguration>& GetCacheStorageConfigurations() const { return m_cacheStorageConfigurations; }
    inline bool CacheStorageConfigurationsHasBeenSet() const { return m_cacheStorageConfigurationsHasBeenSet; }
    template<typename CacheStorageConfigurationsT = Aws::Vector<KxCacheStorageConfiguration>>
    void SetCacheStorageConfigurations(CacheStorageConfigurationsT&& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations = std::forward<CacheStorageConfigurationsT>(value); }
    template<typename CacheStorageConfigurationsT = Aws::Vector<KxCacheStorageConfiguration>>
    CreateKxClusterRequest& WithCacheStorageConfigurations(CacheStorageConfigurationsT&& value) { SetCacheStorageConfigurations(std::forward<CacheStorageConfigurationsT>(value)); return *this;}
    template<typename CacheStorageConfigurationsT = KxCacheStorageConfiguration>
    CreateKxClusterRequest& AddCacheStorageConfigurations(CacheStorageConfigurationsT&& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations.emplace_back(std::forward<CacheStorageConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const { return m_autoScalingConfiguration; }
    inline bool AutoScalingConfigurationHasBeenSet() const { return m_autoScalingConfigurationHasBeenSet; }
    template<typename AutoScalingConfigurationT = AutoScalingConfiguration>
    void SetAutoScalingConfiguration(AutoScalingConfigurationT&& value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = std::forward<AutoScalingConfigurationT>(value); }
    template<typename AutoScalingConfigurationT = AutoScalingConfiguration>
    CreateKxClusterRequest& WithAutoScalingConfiguration(AutoScalingConfigurationT&& value) { SetAutoScalingConfiguration(std::forward<AutoScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster.</p>
     */
    inline const Aws::String& GetClusterDescription() const { return m_clusterDescription; }
    inline bool ClusterDescriptionHasBeenSet() const { return m_clusterDescriptionHasBeenSet; }
    template<typename ClusterDescriptionT = Aws::String>
    void SetClusterDescription(ClusterDescriptionT&& value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription = std::forward<ClusterDescriptionT>(value); }
    template<typename ClusterDescriptionT = Aws::String>
    CreateKxClusterRequest& WithClusterDescription(ClusterDescriptionT&& value) { SetClusterDescription(std::forward<ClusterDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline const CapacityConfiguration& GetCapacityConfiguration() const { return m_capacityConfiguration; }
    inline bool CapacityConfigurationHasBeenSet() const { return m_capacityConfigurationHasBeenSet; }
    template<typename CapacityConfigurationT = CapacityConfiguration>
    void SetCapacityConfiguration(CapacityConfigurationT&& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = std::forward<CapacityConfigurationT>(value); }
    template<typename CapacityConfigurationT = CapacityConfiguration>
    CreateKxClusterRequest& WithCapacityConfiguration(CapacityConfigurationT&& value) { SetCapacityConfiguration(std::forward<CapacityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    CreateKxClusterRequest& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = VpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = VpcConfiguration>
    CreateKxClusterRequest& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline const Aws::String& GetInitializationScript() const { return m_initializationScript; }
    inline bool InitializationScriptHasBeenSet() const { return m_initializationScriptHasBeenSet; }
    template<typename InitializationScriptT = Aws::String>
    void SetInitializationScript(InitializationScriptT&& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = std::forward<InitializationScriptT>(value); }
    template<typename InitializationScriptT = Aws::String>
    CreateKxClusterRequest& WithInitializationScript(InitializationScriptT&& value) { SetInitializationScript(std::forward<InitializationScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the key-value pairs to make them available inside the cluster.</p>
     */
    inline const Aws::Vector<KxCommandLineArgument>& GetCommandLineArguments() const { return m_commandLineArguments; }
    inline bool CommandLineArgumentsHasBeenSet() const { return m_commandLineArgumentsHasBeenSet; }
    template<typename CommandLineArgumentsT = Aws::Vector<KxCommandLineArgument>>
    void SetCommandLineArguments(CommandLineArgumentsT&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments = std::forward<CommandLineArgumentsT>(value); }
    template<typename CommandLineArgumentsT = Aws::Vector<KxCommandLineArgument>>
    CreateKxClusterRequest& WithCommandLineArguments(CommandLineArgumentsT&& value) { SetCommandLineArguments(std::forward<CommandLineArgumentsT>(value)); return *this;}
    template<typename CommandLineArgumentsT = KxCommandLineArgument>
    CreateKxClusterRequest& AddCommandLineArguments(CommandLineArgumentsT&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments.emplace_back(std::forward<CommandLineArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline const CodeConfiguration& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = CodeConfiguration>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = CodeConfiguration>
    CreateKxClusterRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another
     * cluster.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    CreateKxClusterRequest& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline const KxSavedownStorageConfiguration& GetSavedownStorageConfiguration() const { return m_savedownStorageConfiguration; }
    inline bool SavedownStorageConfigurationHasBeenSet() const { return m_savedownStorageConfigurationHasBeenSet; }
    template<typename SavedownStorageConfigurationT = KxSavedownStorageConfiguration>
    void SetSavedownStorageConfiguration(SavedownStorageConfigurationT&& value) { m_savedownStorageConfigurationHasBeenSet = true; m_savedownStorageConfiguration = std::forward<SavedownStorageConfigurationT>(value); }
    template<typename SavedownStorageConfigurationT = KxSavedownStorageConfiguration>
    CreateKxClusterRequest& WithSavedownStorageConfiguration(SavedownStorageConfigurationT&& value) { SetSavedownStorageConfiguration(std::forward<SavedownStorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline KxAzMode GetAzMode() const { return m_azMode; }
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }
    inline void SetAzMode(KxAzMode value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline CreateKxClusterRequest& WithAzMode(KxAzMode value) { SetAzMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone identifiers for the requested regions.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateKxClusterRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to label the cluster. You can add up to 50 tags to
     * a cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateKxClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateKxClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The structure that stores the configuration details of a scaling group.</p>
     */
    inline const KxScalingGroupConfiguration& GetScalingGroupConfiguration() const { return m_scalingGroupConfiguration; }
    inline bool ScalingGroupConfigurationHasBeenSet() const { return m_scalingGroupConfigurationHasBeenSet; }
    template<typename ScalingGroupConfigurationT = KxScalingGroupConfiguration>
    void SetScalingGroupConfiguration(ScalingGroupConfigurationT&& value) { m_scalingGroupConfigurationHasBeenSet = true; m_scalingGroupConfiguration = std::forward<ScalingGroupConfigurationT>(value); }
    template<typename ScalingGroupConfigurationT = KxScalingGroupConfiguration>
    CreateKxClusterRequest& WithScalingGroupConfiguration(ScalingGroupConfigurationT&& value) { SetScalingGroupConfiguration(std::forward<ScalingGroupConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    KxClusterType m_clusterType{KxClusterType::NOT_SET};
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

    KxAzMode m_azMode{KxAzMode::NOT_SET};
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
