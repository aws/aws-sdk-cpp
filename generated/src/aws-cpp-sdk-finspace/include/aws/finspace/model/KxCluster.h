/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/KxClusterStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxClusterType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/KxAzMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/Volume.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The details of a kdb cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxCluster">AWS
   * API Reference</a></p>
   */
  class KxCluster
  {
  public:
    AWS_FINSPACE_API KxCluster() = default;
    AWS_FINSPACE_API KxCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of a cluster.</p> <ul> <li> <p>PENDING – The cluster is pending
     * creation.</p> </li> <li> <p>CREATING –The cluster creation process is in
     * progress.</p> </li> <li> <p>CREATE_FAILED– The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p> DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline KxClusterStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(KxClusterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline KxCluster& WithStatus(KxClusterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    KxCluster& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    KxCluster& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
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
    inline KxCluster& WithClusterType(KxClusterType value) { SetClusterType(value); return *this;}
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
    KxCluster& WithClusterDescription(ClusterDescriptionT&& value) { SetClusterDescription(std::forward<ClusterDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    KxCluster& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    KxCluster& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    KxCluster& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
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
    KxCluster& WithInitializationScript(InitializationScriptT&& value) { SetInitializationScript(std::forward<InitializationScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    KxCluster& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of availability zones assigned per cluster. This can be one of the
     * following:</p> <ul> <li> <p> <code>SINGLE</code> – Assigns one availability zone
     * per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns all the
     * availability zones per cluster.</p> </li> </ul>
     */
    inline KxAzMode GetAzMode() const { return m_azMode; }
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }
    inline void SetAzMode(KxAzMode value) { m_azModeHasBeenSet = true; m_azMode = value; }
    inline KxCluster& WithAzMode(KxAzMode value) { SetAzMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    KxCluster& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    KxCluster& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    KxCluster& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}
  private:

    KxClusterStatus m_status{KxClusterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    KxClusterType m_clusterType{KxClusterType::NOT_SET};
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_clusterDescription;
    bool m_clusterDescriptionHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_initializationScript;
    bool m_initializationScriptHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    KxAzMode m_azMode{KxAzMode::NOT_SET};
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
