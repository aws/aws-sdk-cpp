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
    AWS_FINSPACE_API KxAttachedCluster() = default;
    AWS_FINSPACE_API KxAttachedCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxAttachedCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique name for the attached cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    KxAttachedCluster& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of cluster. The volume for TP and RDB cluster types will
     * be used for TP logs.</p>
     */
    inline KxClusterType GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(KxClusterType value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline KxAttachedCluster& WithClusterType(KxClusterType value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
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
    inline KxClusterStatus GetClusterStatus() const { return m_clusterStatus; }
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }
    inline void SetClusterStatus(KxClusterStatus value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline KxAttachedCluster& WithClusterStatus(KxClusterStatus value) { SetClusterStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    KxClusterType m_clusterType{KxClusterType::NOT_SET};
    bool m_clusterTypeHasBeenSet = false;

    KxClusterStatus m_clusterStatus{KxClusterStatus::NOT_SET};
    bool m_clusterStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
