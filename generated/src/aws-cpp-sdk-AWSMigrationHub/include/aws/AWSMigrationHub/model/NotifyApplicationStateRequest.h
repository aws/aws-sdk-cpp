/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/ApplicationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class NotifyApplicationStateRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API NotifyApplicationStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyApplicationState"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline NotifyApplicationStateRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline NotifyApplicationStateRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the grouped application.</p>
     */
    inline NotifyApplicationStateRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline void SetStatus(const ApplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline void SetStatus(ApplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline NotifyApplicationStateRequest& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the application - Not Started, In-Progress, Complete.</p>
     */
    inline NotifyApplicationStateRequest& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the application state changed.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The timestamp when the application state changed.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The timestamp when the application state changed.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The timestamp when the application state changed.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The timestamp when the application state changed.</p>
     */
    inline NotifyApplicationStateRequest& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The timestamp when the application state changed.</p>
     */
    inline NotifyApplicationStateRequest& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline NotifyApplicationStateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    ApplicationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
