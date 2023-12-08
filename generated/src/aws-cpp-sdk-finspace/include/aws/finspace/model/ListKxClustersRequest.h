/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxClusterType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace finspace
{
namespace Model
{

  /**
   */
  class ListKxClustersRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API ListKxClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListKxClusters"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;

    AWS_FINSPACE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline ListKxClustersRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline ListKxClustersRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline ListKxClustersRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


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
    inline ListKxClustersRequest& WithClusterType(const KxClusterType& value) { SetClusterType(value); return *this;}

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
    inline ListKxClustersRequest& WithClusterType(KxClusterType&& value) { SetClusterType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline ListKxClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    KxClusterType m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
