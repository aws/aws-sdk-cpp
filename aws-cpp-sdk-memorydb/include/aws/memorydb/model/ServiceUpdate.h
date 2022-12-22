/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/memorydb/model/ServiceUpdateStatus.h>
#include <aws/memorydb/model/ServiceUpdateType.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>An update that you can apply to your MemoryDB clusters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ServiceUpdate">AWS
   * API Reference</a></p>
   */
  class ServiceUpdate
  {
  public:
    AWS_MEMORYDB_API ServiceUpdate();
    AWS_MEMORYDB_API ServiceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ServiceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline ServiceUpdate& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline ServiceUpdate& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster to which the service update applies</p>
     */
    inline ServiceUpdate& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdate& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The date when the service update is initially available</p>
     */
    inline const Aws::Utils::DateTime& GetReleaseDate() const{ return m_releaseDate; }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline bool ReleaseDateHasBeenSet() const { return m_releaseDateHasBeenSet; }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline void SetReleaseDate(const Aws::Utils::DateTime& value) { m_releaseDateHasBeenSet = true; m_releaseDate = value; }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline void SetReleaseDate(Aws::Utils::DateTime&& value) { m_releaseDateHasBeenSet = true; m_releaseDate = std::move(value); }

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline ServiceUpdate& WithReleaseDate(const Aws::Utils::DateTime& value) { SetReleaseDate(value); return *this;}

    /**
     * <p>The date when the service update is initially available</p>
     */
    inline ServiceUpdate& WithReleaseDate(Aws::Utils::DateTime&& value) { SetReleaseDate(std::move(value)); return *this;}


    /**
     * <p>Provides details of the service update</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Provides details of the service update</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Provides details of the service update</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Provides details of the service update</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Provides details of the service update</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Provides details of the service update</p>
     */
    inline ServiceUpdate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Provides details of the service update</p>
     */
    inline ServiceUpdate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Provides details of the service update</p>
     */
    inline ServiceUpdate& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the service update</p>
     */
    inline const ServiceUpdateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the service update</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetStatus(const ServiceUpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the service update</p>
     */
    inline void SetStatus(ServiceUpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdate& WithStatus(const ServiceUpdateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the service update</p>
     */
    inline ServiceUpdate& WithStatus(ServiceUpdateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline const ServiceUpdateType& GetType() const{ return m_type; }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline void SetType(const ServiceUpdateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline void SetType(ServiceUpdateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline ServiceUpdate& WithType(const ServiceUpdateType& value) { SetType(value); return *this;}

    /**
     * <p>Reflects the nature of the service update</p>
     */
    inline ServiceUpdate& WithType(ServiceUpdateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline const Aws::String& GetNodesUpdated() const{ return m_nodesUpdated; }

    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline bool NodesUpdatedHasBeenSet() const { return m_nodesUpdatedHasBeenSet; }

    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline void SetNodesUpdated(const Aws::String& value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated = value; }

    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline void SetNodesUpdated(Aws::String&& value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated = std::move(value); }

    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline void SetNodesUpdated(const char* value) { m_nodesUpdatedHasBeenSet = true; m_nodesUpdated.assign(value); }

    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline ServiceUpdate& WithNodesUpdated(const Aws::String& value) { SetNodesUpdated(value); return *this;}

    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline ServiceUpdate& WithNodesUpdated(Aws::String&& value) { SetNodesUpdated(std::move(value)); return *this;}

    /**
     * <p>A list of nodes updated by the service update</p>
     */
    inline ServiceUpdate& WithNodesUpdated(const char* value) { SetNodesUpdated(value); return *this;}


    /**
     * <p>The date at which the service update will be automatically applied</p>
     */
    inline const Aws::Utils::DateTime& GetAutoUpdateStartDate() const{ return m_autoUpdateStartDate; }

    /**
     * <p>The date at which the service update will be automatically applied</p>
     */
    inline bool AutoUpdateStartDateHasBeenSet() const { return m_autoUpdateStartDateHasBeenSet; }

    /**
     * <p>The date at which the service update will be automatically applied</p>
     */
    inline void SetAutoUpdateStartDate(const Aws::Utils::DateTime& value) { m_autoUpdateStartDateHasBeenSet = true; m_autoUpdateStartDate = value; }

    /**
     * <p>The date at which the service update will be automatically applied</p>
     */
    inline void SetAutoUpdateStartDate(Aws::Utils::DateTime&& value) { m_autoUpdateStartDateHasBeenSet = true; m_autoUpdateStartDate = std::move(value); }

    /**
     * <p>The date at which the service update will be automatically applied</p>
     */
    inline ServiceUpdate& WithAutoUpdateStartDate(const Aws::Utils::DateTime& value) { SetAutoUpdateStartDate(value); return *this;}

    /**
     * <p>The date at which the service update will be automatically applied</p>
     */
    inline ServiceUpdate& WithAutoUpdateStartDate(Aws::Utils::DateTime&& value) { SetAutoUpdateStartDate(std::move(value)); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Utils::DateTime m_releaseDate;
    bool m_releaseDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceUpdateStatus m_status;
    bool m_statusHasBeenSet = false;

    ServiceUpdateType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_nodesUpdated;
    bool m_nodesUpdatedHasBeenSet = false;

    Aws::Utils::DateTime m_autoUpdateStartDate;
    bool m_autoUpdateStartDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
