/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxClusterType.h>
#include <aws/finspace/model/KxClusterStatus.h>
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
   * <p>The structure containing the metadata of the attached clusters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxAttachedCluster">AWS
   * API Reference</a></p>
   */
  class KxAttachedCluster
  {
  public:
    AWS_FINSPACE_API KxAttachedCluster();
    AWS_FINSPACE_API KxAttachedCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxAttachedCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline KxAttachedCluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline KxAttachedCluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline KxAttachedCluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>Specifies the type of cluster. The volume for TP and RDB cluster types will
     * be used for TP logs.</p>
     */
    inline const KxClusterType& GetClusterType() const{ return m_clusterType; }

    /**
     * <p>Specifies the type of cluster. The volume for TP and RDB cluster types will
     * be used for TP logs.</p>
     */
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

    /**
     * <p>Specifies the type of cluster. The volume for TP and RDB cluster types will
     * be used for TP logs.</p>
     */
    inline void SetClusterType(const KxClusterType& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

    /**
     * <p>Specifies the type of cluster. The volume for TP and RDB cluster types will
     * be used for TP logs.</p>
     */
    inline void SetClusterType(KxClusterType&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

    /**
     * <p>Specifies the type of cluster. The volume for TP and RDB cluster types will
     * be used for TP logs.</p>
     */
    inline KxAttachedCluster& WithClusterType(const KxClusterType& value) { SetClusterType(value); return *this;}

    /**
     * <p>Specifies the type of cluster. The volume for TP and RDB cluster types will
     * be used for TP logs.</p>
     */
    inline KxAttachedCluster& WithClusterType(KxClusterType&& value) { SetClusterType(std::move(value)); return *this;}


    /**
     * <p>The status of the attached cluster.</p> <ul> <li> <p>PENDING – The cluster is
     * pending creation.</p> </li> <li> <p>CREATING – The cluster creation process is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p>DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline const KxClusterStatus& GetClusterStatus() const{ return m_clusterStatus; }

    /**
     * <p>The status of the attached cluster.</p> <ul> <li> <p>PENDING – The cluster is
     * pending creation.</p> </li> <li> <p>CREATING – The cluster creation process is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p>DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }

    /**
     * <p>The status of the attached cluster.</p> <ul> <li> <p>PENDING – The cluster is
     * pending creation.</p> </li> <li> <p>CREATING – The cluster creation process is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p>DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline void SetClusterStatus(const KxClusterStatus& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }

    /**
     * <p>The status of the attached cluster.</p> <ul> <li> <p>PENDING – The cluster is
     * pending creation.</p> </li> <li> <p>CREATING – The cluster creation process is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p>DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline void SetClusterStatus(KxClusterStatus&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }

    /**
     * <p>The status of the attached cluster.</p> <ul> <li> <p>PENDING – The cluster is
     * pending creation.</p> </li> <li> <p>CREATING – The cluster creation process is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p>DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline KxAttachedCluster& WithClusterStatus(const KxClusterStatus& value) { SetClusterStatus(value); return *this;}

    /**
     * <p>The status of the attached cluster.</p> <ul> <li> <p>PENDING – The cluster is
     * pending creation.</p> </li> <li> <p>CREATING – The cluster creation process is
     * in progress.</p> </li> <li> <p>CREATE_FAILED – The cluster creation process has
     * failed.</p> </li> <li> <p>RUNNING – The cluster creation process is running.</p>
     * </li> <li> <p>UPDATING – The cluster is in the process of being updated.</p>
     * </li> <li> <p>DELETING – The cluster is in the process of being deleted.</p>
     * </li> <li> <p>DELETED – The cluster has been deleted.</p> </li> <li>
     * <p>DELETE_FAILED – The cluster failed to delete.</p> </li> </ul>
     */
    inline KxAttachedCluster& WithClusterStatus(KxClusterStatus&& value) { SetClusterStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    KxClusterType m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    KxClusterStatus m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
