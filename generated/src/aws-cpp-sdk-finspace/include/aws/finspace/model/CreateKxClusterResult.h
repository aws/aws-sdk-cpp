/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxClusterStatus.h>
#include <aws/finspace/model/KxClusterType.h>
#include <aws/finspace/model/TickerplantLogConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/AutoScalingConfiguration.h>
#include <aws/finspace/model/CapacityConfiguration.h>
#include <aws/finspace/model/VpcConfiguration.h>
#include <aws/finspace/model/CodeConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/KxSavedownStorageConfiguration.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/finspace/model/KxScalingGroupConfiguration.h>
#include <aws/finspace/model/Volume.h>
#include <aws/finspace/model/KxDatabaseConfiguration.h>
#include <aws/finspace/model/KxCacheStorageConfiguration.h>
#include <aws/finspace/model/KxCommandLineArgument.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace finspace
{
namespace Model
{
  class CreateKxClusterResult
  {
  public:
    AWS_FINSPACE_API CreateKxClusterResult() = default;
    AWS_FINSPACE_API CreateKxClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API CreateKxClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    CreateKxClusterResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of cluster creation.</p> <ul> <li> <p>PENDING – The cluster is
     * pending creation.</p> </li> <li> <p>CREATING – The cluster creation process is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p>DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline KxClusterStatus GetStatus() const { return m_status; }
    inline void SetStatus(KxClusterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateKxClusterResult& WithStatus(KxClusterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    CreateKxClusterResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateKxClusterResult& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
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
    inline void SetClusterType(KxClusterType value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline CreateKxClusterResult& WithClusterType(KxClusterType value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    
    inline const TickerplantLogConfiguration& GetTickerplantLogConfiguration() const { return m_tickerplantLogConfiguration; }
    template<typename TickerplantLogConfigurationT = TickerplantLogConfiguration>
    void SetTickerplantLogConfiguration(TickerplantLogConfigurationT&& value) { m_tickerplantLogConfigurationHasBeenSet = true; m_tickerplantLogConfiguration = std::forward<TickerplantLogConfigurationT>(value); }
    template<typename TickerplantLogConfigurationT = TickerplantLogConfiguration>
    CreateKxClusterResult& WithTickerplantLogConfiguration(TickerplantLogConfigurationT&& value) { SetTickerplantLogConfiguration(std::forward<TickerplantLogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of volumes mounted on the cluster. </p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    CreateKxClusterResult& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    CreateKxClusterResult& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of databases that will be available for querying.</p>
     */
    inline const Aws::Vector<KxDatabaseConfiguration>& GetDatabases() const { return m_databases; }
    template<typename DatabasesT = Aws::Vector<KxDatabaseConfiguration>>
    void SetDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases = std::forward<DatabasesT>(value); }
    template<typename DatabasesT = Aws::Vector<KxDatabaseConfiguration>>
    CreateKxClusterResult& WithDatabases(DatabasesT&& value) { SetDatabases(std::forward<DatabasesT>(value)); return *this;}
    template<typename DatabasesT = KxDatabaseConfiguration>
    CreateKxClusterResult& AddDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases.emplace_back(std::forward<DatabasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline const Aws::Vector<KxCacheStorageConfiguration>& GetCacheStorageConfigurations() const { return m_cacheStorageConfigurations; }
    template<typename CacheStorageConfigurationsT = Aws::Vector<KxCacheStorageConfiguration>>
    void SetCacheStorageConfigurations(CacheStorageConfigurationsT&& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations = std::forward<CacheStorageConfigurationsT>(value); }
    template<typename CacheStorageConfigurationsT = Aws::Vector<KxCacheStorageConfiguration>>
    CreateKxClusterResult& WithCacheStorageConfigurations(CacheStorageConfigurationsT&& value) { SetCacheStorageConfigurations(std::forward<CacheStorageConfigurationsT>(value)); return *this;}
    template<typename CacheStorageConfigurationsT = KxCacheStorageConfiguration>
    CreateKxClusterResult& AddCacheStorageConfigurations(CacheStorageConfigurationsT&& value) { m_cacheStorageConfigurationsHasBeenSet = true; m_cacheStorageConfigurations.emplace_back(std::forward<CacheStorageConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const { return m_autoScalingConfiguration; }
    template<typename AutoScalingConfigurationT = AutoScalingConfiguration>
    void SetAutoScalingConfiguration(AutoScalingConfigurationT&& value) { m_autoScalingConfigurationHasBeenSet = true; m_autoScalingConfiguration = std::forward<AutoScalingConfigurationT>(value); }
    template<typename AutoScalingConfigurationT = AutoScalingConfiguration>
    CreateKxClusterResult& WithAutoScalingConfiguration(AutoScalingConfigurationT&& value) { SetAutoScalingConfiguration(std::forward<AutoScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the cluster.</p>
     */
    inline const Aws::String& GetClusterDescription() const { return m_clusterDescription; }
    template<typename ClusterDescriptionT = Aws::String>
    void SetClusterDescription(ClusterDescriptionT&& value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription = std::forward<ClusterDescriptionT>(value); }
    template<typename ClusterDescriptionT = Aws::String>
    CreateKxClusterResult& WithClusterDescription(ClusterDescriptionT&& value) { SetClusterDescription(std::forward<ClusterDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline const CapacityConfiguration& GetCapacityConfiguration() const { return m_capacityConfiguration; }
    template<typename CapacityConfigurationT = CapacityConfiguration>
    void SetCapacityConfiguration(CapacityConfigurationT&& value) { m_capacityConfigurationHasBeenSet = true; m_capacityConfiguration = std::forward<CapacityConfigurationT>(value); }
    template<typename CapacityConfigurationT = CapacityConfiguration>
    CreateKxClusterResult& WithCapacityConfiguration(CapacityConfigurationT&& value) { SetCapacityConfiguration(std::forward<CapacityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    CreateKxClusterResult& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    template<typename VpcConfigurationT = VpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = VpcConfiguration>
    CreateKxClusterResult& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline const Aws::String& GetInitializationScript() const { return m_initializationScript; }
    template<typename InitializationScriptT = Aws::String>
    void SetInitializationScript(InitializationScriptT&& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = std::forward<InitializationScriptT>(value); }
    template<typename InitializationScriptT = Aws::String>
    CreateKxClusterResult& WithInitializationScript(InitializationScriptT&& value) { SetInitializationScript(std::forward<InitializationScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the key-value pairs to make them available inside the cluster.</p>
     */
    inline const Aws::Vector<KxCommandLineArgument>& GetCommandLineArguments() const { return m_commandLineArguments; }
    template<typename CommandLineArgumentsT = Aws::Vector<KxCommandLineArgument>>
    void SetCommandLineArguments(CommandLineArgumentsT&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments = std::forward<CommandLineArgumentsT>(value); }
    template<typename CommandLineArgumentsT = Aws::Vector<KxCommandLineArgument>>
    CreateKxClusterResult& WithCommandLineArguments(CommandLineArgumentsT&& value) { SetCommandLineArguments(std::forward<CommandLineArgumentsT>(value)); return *this;}
    template<typename CommandLineArgumentsT = KxCommandLineArgument>
    CreateKxClusterResult& AddCommandLineArguments(CommandLineArgumentsT&& value) { m_commandLineArgumentsHasBeenSet = true; m_commandLineArguments.emplace_back(std::forward<CommandLineArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline const CodeConfiguration& GetCode() const { return m_code; }
    template<typename CodeT = CodeConfiguration>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = CodeConfiguration>
    CreateKxClusterResult& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    CreateKxClusterResult& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    CreateKxClusterResult& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline const KxSavedownStorageConfiguration& GetSavedownStorageConfiguration() const { return m_savedownStorageConfiguration; }
    template<typename SavedownStorageConfigurationT = KxSavedownStorageConfiguration>
    void SetSavedownStorageConfiguration(SavedownStorageConfigurationT&& value) { m_savedownStorageConfigurationHasBeenSet = true; m_savedownStorageConfiguration = std::forward<SavedownStorageConfigurationT>(value); }
    template<typename SavedownStorageConfigurationT = KxSavedownStorageConfiguration>
    CreateKxClusterResult& WithSavedownStorageConfiguration(SavedownStorageConfigurationT&& value) { SetSavedownStorageConfiguration(std::forward<SavedownStorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline KxAzMode GetAzMode() const { return m_azMode; }
    inline void SetAzMode(KxAzMode value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline CreateKxClusterResult& WithAzMode(KxAzMode value) { SetAzMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateKxClusterResult& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    CreateKxClusterResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure that stores the configuration details of a scaling group.</p>
     */
    inline const KxScalingGroupConfiguration& GetScalingGroupConfiguration() const { return m_scalingGroupConfiguration; }
    template<typename ScalingGroupConfigurationT = KxScalingGroupConfiguration>
    void SetScalingGroupConfiguration(ScalingGroupConfigurationT&& value) { m_scalingGroupConfigurationHasBeenSet = true; m_scalingGroupConfiguration = std::forward<ScalingGroupConfigurationT>(value); }
    template<typename ScalingGroupConfigurationT = KxScalingGroupConfiguration>
    CreateKxClusterResult& WithScalingGroupConfiguration(ScalingGroupConfigurationT&& value) { SetScalingGroupConfiguration(std::forward<ScalingGroupConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateKxClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    KxClusterStatus m_status{KxClusterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    KxClusterType m_clusterType{KxClusterType::NOT_SET};
    bool m_clusterTypeHasBeenSet = false;

    TickerplantLogConfiguration m_tickerplantLogConfiguration;
    bool m_tickerplantLogConfigurationHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

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

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    KxSavedownStorageConfiguration m_savedownStorageConfiguration;
    bool m_savedownStorageConfigurationHasBeenSet = false;

    KxAzMode m_azMode{KxAzMode::NOT_SET};
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    KxScalingGroupConfiguration m_scalingGroupConfiguration;
    bool m_scalingGroupConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
