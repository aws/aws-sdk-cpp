/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ClusterState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains a cluster's state, a cluster's ID, and other important
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ClusterListEntry">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API ClusterListEntry
  {
  public:
    ClusterListEntry();
    ClusterListEntry(Aws::Utils::Json::JsonView jsonValue);
    ClusterListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline ClusterListEntry& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline ClusterListEntry& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline ClusterListEntry& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The current state of this cluster. For information about the state of a
     * specific node, see <a>JobListEntry$JobState</a>.</p>
     */
    inline const ClusterState& GetClusterState() const{ return m_clusterState; }

    /**
     * <p>The current state of this cluster. For information about the state of a
     * specific node, see <a>JobListEntry$JobState</a>.</p>
     */
    inline bool ClusterStateHasBeenSet() const { return m_clusterStateHasBeenSet; }

    /**
     * <p>The current state of this cluster. For information about the state of a
     * specific node, see <a>JobListEntry$JobState</a>.</p>
     */
    inline void SetClusterState(const ClusterState& value) { m_clusterStateHasBeenSet = true; m_clusterState = value; }

    /**
     * <p>The current state of this cluster. For information about the state of a
     * specific node, see <a>JobListEntry$JobState</a>.</p>
     */
    inline void SetClusterState(ClusterState&& value) { m_clusterStateHasBeenSet = true; m_clusterState = std::move(value); }

    /**
     * <p>The current state of this cluster. For information about the state of a
     * specific node, see <a>JobListEntry$JobState</a>.</p>
     */
    inline ClusterListEntry& WithClusterState(const ClusterState& value) { SetClusterState(value); return *this;}

    /**
     * <p>The current state of this cluster. For information about the state of a
     * specific node, see <a>JobListEntry$JobState</a>.</p>
     */
    inline ClusterListEntry& WithClusterState(ClusterState&& value) { SetClusterState(std::move(value)); return *this;}


    /**
     * <p>The creation date for this cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline ClusterListEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date for this cluster.</p>
     */
    inline ClusterListEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline ClusterListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline ClusterListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline ClusterListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    ClusterState m_clusterState;
    bool m_clusterStateHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
