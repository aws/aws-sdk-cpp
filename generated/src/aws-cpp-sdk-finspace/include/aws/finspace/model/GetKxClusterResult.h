/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/KxClusterStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetKxClusterResult
  {
  public:
    AWS_FINSPACE_API GetKxClusterResult();
    AWS_FINSPACE_API GetKxClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const KxClusterStatus& GetStatus() const{ return m_status; }

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
    inline void SetStatus(const KxClusterStatus& value) { m_status = value; }

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
    inline void SetStatus(KxClusterStatus&& value) { m_status = std::move(value); }

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
    inline GetKxClusterResult& WithStatus(const KxClusterStatus& value) { SetStatus(value); return *this;}

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
    inline GetKxClusterResult& WithStatus(KxClusterStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline GetKxClusterResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline GetKxClusterResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The error message when a failed state occurs. </p>
     */
    inline GetKxClusterResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>A unique name for the cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterName = value; }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterName = std::move(value); }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterName.assign(value); }

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline GetKxClusterResult& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline GetKxClusterResult& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the cluster.</p>
     */
    inline GetKxClusterResult& WithClusterName(const char* value) { SetClusterName(value); return *this;}


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
    inline void SetClusterType(const KxClusterType& value) { m_clusterType = value; }

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
    inline void SetClusterType(KxClusterType&& value) { m_clusterType = std::move(value); }

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
    inline GetKxClusterResult& WithClusterType(const KxClusterType& value) { SetClusterType(value); return *this;}

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
    inline GetKxClusterResult& WithClusterType(KxClusterType&& value) { SetClusterType(std::move(value)); return *this;}


    
    inline const TickerplantLogConfiguration& GetTickerplantLogConfiguration() const{ return m_tickerplantLogConfiguration; }

    
    inline void SetTickerplantLogConfiguration(const TickerplantLogConfiguration& value) { m_tickerplantLogConfiguration = value; }

    
    inline void SetTickerplantLogConfiguration(TickerplantLogConfiguration&& value) { m_tickerplantLogConfiguration = std::move(value); }

    
    inline GetKxClusterResult& WithTickerplantLogConfiguration(const TickerplantLogConfiguration& value) { SetTickerplantLogConfiguration(value); return *this;}

    
    inline GetKxClusterResult& WithTickerplantLogConfiguration(TickerplantLogConfiguration&& value) { SetTickerplantLogConfiguration(std::move(value)); return *this;}


    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumes = value; }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumes = std::move(value); }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline GetKxClusterResult& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline GetKxClusterResult& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline GetKxClusterResult& AddVolumes(const Volume& value) { m_volumes.push_back(value); return *this; }

    /**
     * <p> A list of volumes attached to the cluster. </p>
     */
    inline GetKxClusterResult& AddVolumes(Volume&& value) { m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of databases mounted on the cluster.</p>
     */
    inline const Aws::Vector<KxDatabaseConfiguration>& GetDatabases() const{ return m_databases; }

    /**
     * <p> A list of databases mounted on the cluster.</p>
     */
    inline void SetDatabases(const Aws::Vector<KxDatabaseConfiguration>& value) { m_databases = value; }

    /**
     * <p> A list of databases mounted on the cluster.</p>
     */
    inline void SetDatabases(Aws::Vector<KxDatabaseConfiguration>&& value) { m_databases = std::move(value); }

    /**
     * <p> A list of databases mounted on the cluster.</p>
     */
    inline GetKxClusterResult& WithDatabases(const Aws::Vector<KxDatabaseConfiguration>& value) { SetDatabases(value); return *this;}

    /**
     * <p> A list of databases mounted on the cluster.</p>
     */
    inline GetKxClusterResult& WithDatabases(Aws::Vector<KxDatabaseConfiguration>&& value) { SetDatabases(std::move(value)); return *this;}

    /**
     * <p> A list of databases mounted on the cluster.</p>
     */
    inline GetKxClusterResult& AddDatabases(const KxDatabaseConfiguration& value) { m_databases.push_back(value); return *this; }

    /**
     * <p> A list of databases mounted on the cluster.</p>
     */
    inline GetKxClusterResult& AddDatabases(KxDatabaseConfiguration&& value) { m_databases.push_back(std::move(value)); return *this; }


    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline const Aws::Vector<KxCacheStorageConfiguration>& GetCacheStorageConfigurations() const{ return m_cacheStorageConfigurations; }

    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline void SetCacheStorageConfigurations(const Aws::Vector<KxCacheStorageConfiguration>& value) { m_cacheStorageConfigurations = value; }

    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline void SetCacheStorageConfigurations(Aws::Vector<KxCacheStorageConfiguration>&& value) { m_cacheStorageConfigurations = std::move(value); }

    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline GetKxClusterResult& WithCacheStorageConfigurations(const Aws::Vector<KxCacheStorageConfiguration>& value) { SetCacheStorageConfigurations(value); return *this;}

    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline GetKxClusterResult& WithCacheStorageConfigurations(Aws::Vector<KxCacheStorageConfiguration>&& value) { SetCacheStorageConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline GetKxClusterResult& AddCacheStorageConfigurations(const KxCacheStorageConfiguration& value) { m_cacheStorageConfigurations.push_back(value); return *this; }

    /**
     * <p>The configurations for a read only cache storage associated with a cluster.
     * This cache will be stored as an FSx Lustre that reads from the S3 store. </p>
     */
    inline GetKxClusterResult& AddCacheStorageConfigurations(KxCacheStorageConfiguration&& value) { m_cacheStorageConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline const AutoScalingConfiguration& GetAutoScalingConfiguration() const{ return m_autoScalingConfiguration; }

    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline void SetAutoScalingConfiguration(const AutoScalingConfiguration& value) { m_autoScalingConfiguration = value; }

    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline void SetAutoScalingConfiguration(AutoScalingConfiguration&& value) { m_autoScalingConfiguration = std::move(value); }

    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline GetKxClusterResult& WithAutoScalingConfiguration(const AutoScalingConfiguration& value) { SetAutoScalingConfiguration(value); return *this;}

    /**
     * <p>The configuration based on which FinSpace will scale in or scale out nodes in
     * your cluster.</p>
     */
    inline GetKxClusterResult& WithAutoScalingConfiguration(AutoScalingConfiguration&& value) { SetAutoScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description of the cluster.</p>
     */
    inline const Aws::String& GetClusterDescription() const{ return m_clusterDescription; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetClusterDescription(const Aws::String& value) { m_clusterDescription = value; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetClusterDescription(Aws::String&& value) { m_clusterDescription = std::move(value); }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetClusterDescription(const char* value) { m_clusterDescription.assign(value); }

    /**
     * <p>A description of the cluster.</p>
     */
    inline GetKxClusterResult& WithClusterDescription(const Aws::String& value) { SetClusterDescription(value); return *this;}

    /**
     * <p>A description of the cluster.</p>
     */
    inline GetKxClusterResult& WithClusterDescription(Aws::String&& value) { SetClusterDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the cluster.</p>
     */
    inline GetKxClusterResult& WithClusterDescription(const char* value) { SetClusterDescription(value); return *this;}


    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline const CapacityConfiguration& GetCapacityConfiguration() const{ return m_capacityConfiguration; }

    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline void SetCapacityConfiguration(const CapacityConfiguration& value) { m_capacityConfiguration = value; }

    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline void SetCapacityConfiguration(CapacityConfiguration&& value) { m_capacityConfiguration = std::move(value); }

    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline GetKxClusterResult& WithCapacityConfiguration(const CapacityConfiguration& value) { SetCapacityConfiguration(value); return *this;}

    /**
     * <p>A structure for the metadata of a cluster. It includes information like the
     * CPUs needed, memory of instances, and number of instances.</p>
     */
    inline GetKxClusterResult& WithCapacityConfiguration(CapacityConfiguration&& value) { SetCapacityConfiguration(std::move(value)); return *this;}


    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabel = value; }

    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabel = std::move(value); }

    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabel.assign(value); }

    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline GetKxClusterResult& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline GetKxClusterResult& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The version of FinSpace managed kdb to run.</p>
     */
    inline GetKxClusterResult& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfiguration = value; }

    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline GetKxClusterResult& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration details about the network where the Privatelink endpoint of the
     * cluster resides.</p>
     */
    inline GetKxClusterResult& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


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
    inline void SetInitializationScript(const Aws::String& value) { m_initializationScript = value; }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline void SetInitializationScript(Aws::String&& value) { m_initializationScript = std::move(value); }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline void SetInitializationScript(const char* value) { m_initializationScript.assign(value); }

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline GetKxClusterResult& WithInitializationScript(const Aws::String& value) { SetInitializationScript(value); return *this;}

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline GetKxClusterResult& WithInitializationScript(Aws::String&& value) { SetInitializationScript(std::move(value)); return *this;}

    /**
     * <p>Specifies a Q program that will be run at launch of a cluster. It is a
     * relative path within <i>.zip</i> file that contains the custom code, which will
     * be loaded on the cluster. It must include the file name itself. For example,
     * <code>somedir/init.q</code>.</p>
     */
    inline GetKxClusterResult& WithInitializationScript(const char* value) { SetInitializationScript(value); return *this;}


    /**
     * <p>Defines key-value pairs to make them available inside the cluster.</p>
     */
    inline const Aws::Vector<KxCommandLineArgument>& GetCommandLineArguments() const{ return m_commandLineArguments; }

    /**
     * <p>Defines key-value pairs to make them available inside the cluster.</p>
     */
    inline void SetCommandLineArguments(const Aws::Vector<KxCommandLineArgument>& value) { m_commandLineArguments = value; }

    /**
     * <p>Defines key-value pairs to make them available inside the cluster.</p>
     */
    inline void SetCommandLineArguments(Aws::Vector<KxCommandLineArgument>&& value) { m_commandLineArguments = std::move(value); }

    /**
     * <p>Defines key-value pairs to make them available inside the cluster.</p>
     */
    inline GetKxClusterResult& WithCommandLineArguments(const Aws::Vector<KxCommandLineArgument>& value) { SetCommandLineArguments(value); return *this;}

    /**
     * <p>Defines key-value pairs to make them available inside the cluster.</p>
     */
    inline GetKxClusterResult& WithCommandLineArguments(Aws::Vector<KxCommandLineArgument>&& value) { SetCommandLineArguments(std::move(value)); return *this;}

    /**
     * <p>Defines key-value pairs to make them available inside the cluster.</p>
     */
    inline GetKxClusterResult& AddCommandLineArguments(const KxCommandLineArgument& value) { m_commandLineArguments.push_back(value); return *this; }

    /**
     * <p>Defines key-value pairs to make them available inside the cluster.</p>
     */
    inline GetKxClusterResult& AddCommandLineArguments(KxCommandLineArgument&& value) { m_commandLineArguments.push_back(std::move(value)); return *this; }


    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline const CodeConfiguration& GetCode() const{ return m_code; }

    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline void SetCode(const CodeConfiguration& value) { m_code = value; }

    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline void SetCode(CodeConfiguration&& value) { m_code = std::move(value); }

    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline GetKxClusterResult& WithCode(const CodeConfiguration& value) { SetCode(value); return *this;}

    /**
     * <p>The details of the custom code that you want to use inside a cluster when
     * analyzing a data. It consists of the S3 source bucket, location, S3 object
     * version, and the relative path from where the custom code is loaded into the
     * cluster. </p>
     */
    inline GetKxClusterResult& WithCode(CodeConfiguration&& value) { SetCode(std::move(value)); return *this;}


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
    inline void SetExecutionRole(const Aws::String& value) { m_executionRole = value; }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRole = std::move(value); }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRole.assign(value); }

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline GetKxClusterResult& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline GetKxClusterResult& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p> An IAM role that defines a set of permissions associated with a cluster.
     * These permissions are assumed when a cluster attempts to access another cluster.
     * </p>
     */
    inline GetKxClusterResult& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


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
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxClusterResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The last time that the cluster was modified. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxClusterResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline const KxSavedownStorageConfiguration& GetSavedownStorageConfiguration() const{ return m_savedownStorageConfiguration; }

    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline void SetSavedownStorageConfiguration(const KxSavedownStorageConfiguration& value) { m_savedownStorageConfiguration = value; }

    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline void SetSavedownStorageConfiguration(KxSavedownStorageConfiguration&& value) { m_savedownStorageConfiguration = std::move(value); }

    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline GetKxClusterResult& WithSavedownStorageConfiguration(const KxSavedownStorageConfiguration& value) { SetSavedownStorageConfiguration(value); return *this;}

    /**
     * <p>The size and type of the temporary storage that is used to hold data during
     * the savedown process. This parameter is required when you choose
     * <code>clusterType</code> as RDB. All the data written to this storage space is
     * lost when the cluster node is restarted.</p>
     */
    inline GetKxClusterResult& WithSavedownStorageConfiguration(KxSavedownStorageConfiguration&& value) { SetSavedownStorageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline const KxAzMode& GetAzMode() const{ return m_azMode; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(const KxAzMode& value) { m_azMode = value; }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline void SetAzMode(KxAzMode&& value) { m_azMode = std::move(value); }

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline GetKxClusterResult& WithAzMode(const KxAzMode& value) { SetAzMode(value); return *this;}

    /**
     * <p>The number of availability zones you want to assign per cluster. This can be
     * one of the following </p> <ul> <li> <p> <code>SINGLE</code> – Assigns one
     * availability zone per cluster.</p> </li> <li> <p> <code>MULTI</code> – Assigns
     * all the availability zones per cluster.</p> </li> </ul>
     */
    inline GetKxClusterResult& WithAzMode(KxAzMode&& value) { SetAzMode(std::move(value)); return *this;}


    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneId = value; }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneId = std::move(value); }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneId.assign(value); }

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline GetKxClusterResult& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline GetKxClusterResult& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p> The availability zone identifiers for the requested regions. </p>
     */
    inline GetKxClusterResult& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


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
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxClusterResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp at which the cluster was created in FinSpace. The value is
     * determined as epoch time in milliseconds. For example, the value for Monday,
     * November 1, 2021 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline GetKxClusterResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const KxScalingGroupConfiguration& GetScalingGroupConfiguration() const{ return m_scalingGroupConfiguration; }

    
    inline void SetScalingGroupConfiguration(const KxScalingGroupConfiguration& value) { m_scalingGroupConfiguration = value; }

    
    inline void SetScalingGroupConfiguration(KxScalingGroupConfiguration&& value) { m_scalingGroupConfiguration = std::move(value); }

    
    inline GetKxClusterResult& WithScalingGroupConfiguration(const KxScalingGroupConfiguration& value) { SetScalingGroupConfiguration(value); return *this;}

    
    inline GetKxClusterResult& WithScalingGroupConfiguration(KxScalingGroupConfiguration&& value) { SetScalingGroupConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKxClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKxClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKxClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KxClusterStatus m_status;

    Aws::String m_statusReason;

    Aws::String m_clusterName;

    KxClusterType m_clusterType;

    TickerplantLogConfiguration m_tickerplantLogConfiguration;

    Aws::Vector<Volume> m_volumes;

    Aws::Vector<KxDatabaseConfiguration> m_databases;

    Aws::Vector<KxCacheStorageConfiguration> m_cacheStorageConfigurations;

    AutoScalingConfiguration m_autoScalingConfiguration;

    Aws::String m_clusterDescription;

    CapacityConfiguration m_capacityConfiguration;

    Aws::String m_releaseLabel;

    VpcConfiguration m_vpcConfiguration;

    Aws::String m_initializationScript;

    Aws::Vector<KxCommandLineArgument> m_commandLineArguments;

    CodeConfiguration m_code;

    Aws::String m_executionRole;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    KxSavedownStorageConfiguration m_savedownStorageConfiguration;

    KxAzMode m_azMode;

    Aws::String m_availabilityZoneId;

    Aws::Utils::DateTime m_createdTimestamp;

    KxScalingGroupConfiguration m_scalingGroupConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
