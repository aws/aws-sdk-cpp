/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/ProcessingConfiguration.h>
#include <aws/appfabric/model/DestinationConfiguration.h>
#include <aws/appfabric/model/IngestionDestinationStatus.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an ingestion destination.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/IngestionDestination">AWS
   * API Reference</a></p>
   */
  class IngestionDestination
  {
  public:
    AWS_APPFABRIC_API IngestionDestination() = default;
    AWS_APPFABRIC_API IngestionDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API IngestionDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    IngestionDestination& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline const Aws::String& GetIngestionArn() const { return m_ingestionArn; }
    inline bool IngestionArnHasBeenSet() const { return m_ingestionArnHasBeenSet; }
    template<typename IngestionArnT = Aws::String>
    void SetIngestionArn(IngestionArnT&& value) { m_ingestionArnHasBeenSet = true; m_ingestionArn = std::forward<IngestionArnT>(value); }
    template<typename IngestionArnT = Aws::String>
    IngestionDestination& WithIngestionArn(IngestionArnT&& value) { SetIngestionArn(std::forward<IngestionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about how ingested data is processed.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    IngestionDestination& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    template<typename DestinationConfigurationT = DestinationConfiguration>
    void SetDestinationConfiguration(DestinationConfigurationT&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::forward<DestinationConfigurationT>(value); }
    template<typename DestinationConfigurationT = DestinationConfiguration>
    IngestionDestination& WithDestinationConfiguration(DestinationConfigurationT&& value) { SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the ingestion destination.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>Active</code>: The ingestion destination is
     * active and is ready to be used.</p> </li> <li> <p> <code>Failed</code>: The
     * ingestion destination has failed. If the ingestion destination is in this state,
     * you should verify the ingestion destination configuration and try again.</p>
     * </li> </ul>
     */
    inline IngestionDestinationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IngestionDestinationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IngestionDestination& WithStatus(IngestionDestinationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    IngestionDestination& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingestion destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    IngestionDestination& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingestion destination was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    IngestionDestination& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ingestionArn;
    bool m_ingestionArnHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    IngestionDestinationStatus m_status{IngestionDestinationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
