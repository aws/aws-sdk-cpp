/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/QueryLoggingConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/amp/model/LoggingDestination.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>The metadata for a query logging configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/QueryLoggingConfigurationMetadata">AWS
   * API Reference</a></p>
   */
  class QueryLoggingConfigurationMetadata
  {
  public:
    AWS_PROMETHEUSSERVICE_API QueryLoggingConfigurationMetadata() = default;
    AWS_PROMETHEUSSERVICE_API QueryLoggingConfigurationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API QueryLoggingConfigurationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the query logging configuration.</p>
     */
    inline const QueryLoggingConfigurationStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = QueryLoggingConfigurationStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = QueryLoggingConfigurationStatus>
    QueryLoggingConfigurationMetadata& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace associated with this query logging configuration.</p>
     */
    inline const Aws::String& GetWorkspace() const { return m_workspace; }
    inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }
    template<typename WorkspaceT = Aws::String>
    void SetWorkspace(WorkspaceT&& value) { m_workspaceHasBeenSet = true; m_workspace = std::forward<WorkspaceT>(value); }
    template<typename WorkspaceT = Aws::String>
    QueryLoggingConfigurationMetadata& WithWorkspace(WorkspaceT&& value) { SetWorkspace(std::forward<WorkspaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured destinations for the query logging configuration.</p>
     */
    inline const Aws::Vector<LoggingDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<LoggingDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<LoggingDestination>>
    QueryLoggingConfigurationMetadata& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = LoggingDestination>
    QueryLoggingConfigurationMetadata& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the query logging configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    QueryLoggingConfigurationMetadata& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the query logging configuration was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    QueryLoggingConfigurationMetadata& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}
  private:

    QueryLoggingConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_workspace;
    bool m_workspaceHasBeenSet = false;

    Aws::Vector<LoggingDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
