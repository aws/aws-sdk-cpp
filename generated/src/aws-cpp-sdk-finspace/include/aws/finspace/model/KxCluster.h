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
    AWS_FINSPACE_API KxCluster();
    AWS_FINSPACE_API KxCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const KxClusterStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const KxClusterStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(KxClusterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline KxCluster& WithStatus(const KxClusterStatus& value) { SetStatus(value); return *this;}

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
    inline KxCluster& WithStatus(KxClusterStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline KxCluster& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline KxCluster& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline KxCluster& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>A unique name for the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline KxCluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline KxCluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline KxCluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


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
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

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
    inline void SetClusterType(const KxClusterType& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

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
    inline void SetClusterType(KxClusterType&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

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
    inline KxCluster& WithClusterType(const KxClusterType& value) { SetClusterType(value); return *this;}

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
    inline KxCluster& WithClusterType(KxClusterType&& value) { SetClusterType(std::move(value)); return *this;}


    /**
     * <p>A description of the cluster.</p>
     */
    inline const Aws::String& GetClusterDescription() const{ return m_clusterDescription; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline bool ClusterDescriptionHasBeenSet() const { return m_clusterDescriptionHasBeenSet; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetClusterDescription(const Aws::String& value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription = value; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetClusterDescription(Aws::String&& value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription = std::move(value); }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetClusterDescription(const char* value) { m_clusterDescriptionHasBeenSet = true; m_clusterDescription.assign(value); }

    /**
     * <p>A description of the cluster.</p>
     */
    inline KxCluster& WithClusterDescription(const Aws::String& value) { SetClusterDescription(value); return *this;}

    /**
     * <p>A description of the cluster.</p>
     */
    inline KxCluster& WithClusterDescription(Aws::String&& value) { SetClusterDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the cluster.</p>
     */
    inline KxCluster& WithClusterDescription(const char* value) { SetClusterDescription(value); return *this;}


    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline KxCluster& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline KxCluster& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>A version of the FinSpace managed kdb to run.</p>
     */
    inline KxCluster& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline KxCluster& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline KxCluster& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline KxCluster& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline KxCluster& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline const Aws::String& GetInitializationScript() const{ return m_initializationScript; }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline bool InitializationScriptHasBeenSet() const { return m_initializationScriptHasBeenSet; }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline void SetInitializationScript(const Aws::String& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = value; }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline void SetInitializationScript(Aws::String&& value) { m_initializationScriptHasBeenSet = true; m_initializationScript = std::move(value); }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline void SetInitializationScript(const char* value) { m_initializationScriptHasBeenSet = true; m_initializationScript.assign(value); }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline KxCluster& WithInitializationScript(const Aws::String& value) { SetInitializationScript(value); return *this;}

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline KxCluster& WithInitializationScript(Aws::String&& value) { SetInitializationScript(std::move(value)); return *this;}

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline KxCluster& WithInitializationScript(const char* value) { SetInitializationScript(value); return *this;}


    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline KxCluster& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline KxCluster& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline KxCluster& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>The number of availability zones assigned per cluster. This can be one of the
     * following:</p> <ul> <li> <p> <code>SINGLE</code> – Assigns one availability zone
     * per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns all the
     * availability zones per cluster.</p> </li> </ul>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }

    /**
     * <p>The number of availability zones assigned per cluster. This can be one of the
     * following:</p> <ul> <li> <p> <code>SINGLE</code> – Assigns one availability zone
     * per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns all the
     * availability zones per cluster.</p> </li> </ul>
     */
    inline bool AzModeHasBeenSet() const { return m_azModeHasBeenSet; }

    /**
     * <p>The number of availability zones assigned per cluster. This can be one of the
     * following:</p> <ul> <li> <p> <code>SINGLE</code> – Assigns one availability zone
     * per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns all the
     * availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(const KxAzMode& value) { m_azModeHasBeenSet = true; m_azMode = value; }

    /**
     * <p>The number of availability zones assigned per cluster. This can be one of the
     * following:</p> <ul> <li> <p> <code>SINGLE</code> – Assigns one availability zone
     * per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns all the
     * availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(KxAzMode&& value) { m_azModeHasBeenSet = true; m_azMode = std::move(value); }

    /**
     * <p>The number of availability zones assigned per cluster. This can be one of the
     * following:</p> <ul> <li> <p> <code>SINGLE</code> – Assigns one availability zone
     * per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns all the
     * availability zones per cluster.</p> </li> </ul>
     */
    inline KxCluster& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}

    /**
     * <p>The number of availability zones assigned per cluster. This can be one of the
     * following:</p> <ul> <li> <p> <code>SINGLE</code> – Assigns one availability zone
     * per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns all the
     * availability zones per cluster.</p> </li> </ul>
     */
    inline KxCluster& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}


    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline KxCluster& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline KxCluster& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline KxCluster& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxCluster& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxCluster& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxCluster& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline KxCluster& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    KxClusterStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    KxClusterType m_clusterType;
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

    KxAzMode m_azMode;
    bool m_azModeHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp;
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
