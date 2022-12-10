/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/servicecatalog/model/LastSyncStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Provides details about the product's connection sync and contains the
   * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
   * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
   * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
   * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
   * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/LastSync">AWS
   * API Reference</a></p>
   */
  class LastSync
  {
  public:
    AWS_SERVICECATALOG_API LastSync();
    AWS_SERVICECATALOG_API LastSync(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API LastSync& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline const Aws::Utils::DateTime& GetLastSyncTime() const{ return m_lastSyncTime; }

    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline bool LastSyncTimeHasBeenSet() const { return m_lastSyncTimeHasBeenSet; }

    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline void SetLastSyncTime(const Aws::Utils::DateTime& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = value; }

    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline void SetLastSyncTime(Aws::Utils::DateTime&& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = std::move(value); }

    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline LastSync& WithLastSyncTime(const Aws::Utils::DateTime& value) { SetLastSyncTime(value); return *this;}

    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline LastSync& WithLastSyncTime(Aws::Utils::DateTime&& value) { SetLastSyncTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline const LastSyncStatus& GetLastSyncStatus() const{ return m_lastSyncStatus; }

    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline bool LastSyncStatusHasBeenSet() const { return m_lastSyncStatusHasBeenSet; }

    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline void SetLastSyncStatus(const LastSyncStatus& value) { m_lastSyncStatusHasBeenSet = true; m_lastSyncStatus = value; }

    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline void SetLastSyncStatus(LastSyncStatus&& value) { m_lastSyncStatusHasBeenSet = true; m_lastSyncStatus = std::move(value); }

    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline LastSync& WithLastSyncStatus(const LastSyncStatus& value) { SetLastSyncStatus(value); return *this;}

    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline LastSync& WithLastSyncStatus(LastSyncStatus&& value) { SetLastSyncStatus(std::move(value)); return *this;}


    /**
     * <p>The sync's status message. </p>
     */
    inline const Aws::String& GetLastSyncStatusMessage() const{ return m_lastSyncStatusMessage; }

    /**
     * <p>The sync's status message. </p>
     */
    inline bool LastSyncStatusMessageHasBeenSet() const { return m_lastSyncStatusMessageHasBeenSet; }

    /**
     * <p>The sync's status message. </p>
     */
    inline void SetLastSyncStatusMessage(const Aws::String& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = value; }

    /**
     * <p>The sync's status message. </p>
     */
    inline void SetLastSyncStatusMessage(Aws::String&& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = std::move(value); }

    /**
     * <p>The sync's status message. </p>
     */
    inline void SetLastSyncStatusMessage(const char* value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage.assign(value); }

    /**
     * <p>The sync's status message. </p>
     */
    inline LastSync& WithLastSyncStatusMessage(const Aws::String& value) { SetLastSyncStatusMessage(value); return *this;}

    /**
     * <p>The sync's status message. </p>
     */
    inline LastSync& WithLastSyncStatusMessage(Aws::String&& value) { SetLastSyncStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The sync's status message. </p>
     */
    inline LastSync& WithLastSyncStatusMessage(const char* value) { SetLastSyncStatusMessage(value); return *this;}


    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulSyncTime() const{ return m_lastSuccessfulSyncTime; }

    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline bool LastSuccessfulSyncTimeHasBeenSet() const { return m_lastSuccessfulSyncTimeHasBeenSet; }

    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline void SetLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = value; }

    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline void SetLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = std::move(value); }

    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline LastSync& WithLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulSyncTime(value); return *this;}

    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline LastSync& WithLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulSyncTime(std::move(value)); return *this;}


    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline const Aws::String& GetLastSuccessfulSyncProvisioningArtifactId() const{ return m_lastSuccessfulSyncProvisioningArtifactId; }

    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline bool LastSuccessfulSyncProvisioningArtifactIdHasBeenSet() const { return m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet; }

    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline void SetLastSuccessfulSyncProvisioningArtifactId(const Aws::String& value) { m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true; m_lastSuccessfulSyncProvisioningArtifactId = value; }

    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline void SetLastSuccessfulSyncProvisioningArtifactId(Aws::String&& value) { m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true; m_lastSuccessfulSyncProvisioningArtifactId = std::move(value); }

    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline void SetLastSuccessfulSyncProvisioningArtifactId(const char* value) { m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true; m_lastSuccessfulSyncProvisioningArtifactId.assign(value); }

    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline LastSync& WithLastSuccessfulSyncProvisioningArtifactId(const Aws::String& value) { SetLastSuccessfulSyncProvisioningArtifactId(value); return *this;}

    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline LastSync& WithLastSuccessfulSyncProvisioningArtifactId(Aws::String&& value) { SetLastSuccessfulSyncProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline LastSync& WithLastSuccessfulSyncProvisioningArtifactId(const char* value) { SetLastSuccessfulSyncProvisioningArtifactId(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastSyncTime;
    bool m_lastSyncTimeHasBeenSet = false;

    LastSyncStatus m_lastSyncStatus;
    bool m_lastSyncStatusHasBeenSet = false;

    Aws::String m_lastSyncStatusMessage;
    bool m_lastSyncStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulSyncTime;
    bool m_lastSuccessfulSyncTimeHasBeenSet = false;

    Aws::String m_lastSuccessfulSyncProvisioningArtifactId;
    bool m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
