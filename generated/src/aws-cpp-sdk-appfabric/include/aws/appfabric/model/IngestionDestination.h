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
    AWS_APPFABRIC_API IngestionDestination();
    AWS_APPFABRIC_API IngestionDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API IngestionDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline IngestionDestination& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline IngestionDestination& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion destination.</p>
     */
    inline IngestionDestination& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline const Aws::String& GetIngestionArn() const{ return m_ingestionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline bool IngestionArnHasBeenSet() const { return m_ingestionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline void SetIngestionArn(const Aws::String& value) { m_ingestionArnHasBeenSet = true; m_ingestionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline void SetIngestionArn(Aws::String&& value) { m_ingestionArnHasBeenSet = true; m_ingestionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline void SetIngestionArn(const char* value) { m_ingestionArnHasBeenSet = true; m_ingestionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline IngestionDestination& WithIngestionArn(const Aws::String& value) { SetIngestionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline IngestionDestination& WithIngestionArn(Aws::String&& value) { SetIngestionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ingestion.</p>
     */
    inline IngestionDestination& WithIngestionArn(const char* value) { SetIngestionArn(value); return *this;}


    /**
     * <p>Contains information about how ingested data is processed.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    /**
     * <p>Contains information about how ingested data is processed.</p>
     */
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    /**
     * <p>Contains information about how ingested data is processed.</p>
     */
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    /**
     * <p>Contains information about how ingested data is processed.</p>
     */
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    /**
     * <p>Contains information about how ingested data is processed.</p>
     */
    inline IngestionDestination& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    /**
     * <p>Contains information about how ingested data is processed.</p>
     */
    inline IngestionDestination& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }

    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }

    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline void SetDestinationConfiguration(const DestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }

    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline void SetDestinationConfiguration(DestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }

    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline IngestionDestination& WithDestinationConfiguration(const DestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}

    /**
     * <p>Contains information about the destination of ingested data.</p>
     */
    inline IngestionDestination& WithDestinationConfiguration(DestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The state of the ingestion destination.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>Active</code>: The ingestion destination is
     * active and is ready to be used.</p> </li> <li> <p> <code>Failed</code>: The
     * ingestion destination has failed. If the ingestion destination is in this state,
     * you should verify the ingestion destination configuration and try again.</p>
     * </li> </ul>
     */
    inline const IngestionDestinationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the ingestion destination.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>Active</code>: The ingestion destination is
     * active and is ready to be used.</p> </li> <li> <p> <code>Failed</code>: The
     * ingestion destination has failed. If the ingestion destination is in this state,
     * you should verify the ingestion destination configuration and try again.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of the ingestion destination.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>Active</code>: The ingestion destination is
     * active and is ready to be used.</p> </li> <li> <p> <code>Failed</code>: The
     * ingestion destination has failed. If the ingestion destination is in this state,
     * you should verify the ingestion destination configuration and try again.</p>
     * </li> </ul>
     */
    inline void SetStatus(const IngestionDestinationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the ingestion destination.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>Active</code>: The ingestion destination is
     * active and is ready to be used.</p> </li> <li> <p> <code>Failed</code>: The
     * ingestion destination has failed. If the ingestion destination is in this state,
     * you should verify the ingestion destination configuration and try again.</p>
     * </li> </ul>
     */
    inline void SetStatus(IngestionDestinationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of the ingestion destination.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>Active</code>: The ingestion destination is
     * active and is ready to be used.</p> </li> <li> <p> <code>Failed</code>: The
     * ingestion destination has failed. If the ingestion destination is in this state,
     * you should verify the ingestion destination configuration and try again.</p>
     * </li> </ul>
     */
    inline IngestionDestination& WithStatus(const IngestionDestinationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the ingestion destination.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>Active</code>: The ingestion destination is
     * active and is ready to be used.</p> </li> <li> <p> <code>Failed</code>: The
     * ingestion destination has failed. If the ingestion destination is in this state,
     * you should verify the ingestion destination configuration and try again.</p>
     * </li> </ul>
     */
    inline IngestionDestination& WithStatus(IngestionDestinationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline IngestionDestination& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline IngestionDestination& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the current status of the ingestion destination.</p> <p>Only
     * present when the <code>status</code> of ingestion destination is
     * <code>Failed</code>.</p>
     */
    inline IngestionDestination& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The timestamp of when the ingestion destination was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the ingestion destination was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the ingestion destination was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the ingestion destination was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the ingestion destination was created.</p>
     */
    inline IngestionDestination& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ingestion destination was created.</p>
     */
    inline IngestionDestination& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the ingestion destination was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the ingestion destination was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the ingestion destination was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the ingestion destination was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the ingestion destination was last updated.</p>
     */
    inline IngestionDestination& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ingestion destination was last updated.</p>
     */
    inline IngestionDestination& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_ingestionArn;
    bool m_ingestionArnHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    DestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    IngestionDestinationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
