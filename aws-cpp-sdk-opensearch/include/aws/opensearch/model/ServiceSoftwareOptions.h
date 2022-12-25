/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DeploymentStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The current status of the service software for an Amazon OpenSearch Service
   * domain. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">Service
   * software updates in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ServiceSoftwareOptions">AWS
   * API Reference</a></p>
   */
  class ServiceSoftwareOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions();
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline ServiceSoftwareOptions& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline ServiceSoftwareOptions& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline ServiceSoftwareOptions& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline const Aws::String& GetNewVersion() const{ return m_newVersion; }

    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }

    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline void SetNewVersion(const Aws::String& value) { m_newVersionHasBeenSet = true; m_newVersion = value; }

    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline void SetNewVersion(Aws::String&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::move(value); }

    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline void SetNewVersion(const char* value) { m_newVersionHasBeenSet = true; m_newVersion.assign(value); }

    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline ServiceSoftwareOptions& WithNewVersion(const Aws::String& value) { SetNewVersion(value); return *this;}

    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline ServiceSoftwareOptions& WithNewVersion(Aws::String&& value) { SetNewVersion(std::move(value)); return *this;}

    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline ServiceSoftwareOptions& WithNewVersion(const char* value) { SetNewVersion(value); return *this;}


    /**
     * <p>True if you're able to update your service software version. False if you
     * can't update your service software version.</p>
     */
    inline bool GetUpdateAvailable() const{ return m_updateAvailable; }

    /**
     * <p>True if you're able to update your service software version. False if you
     * can't update your service software version.</p>
     */
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }

    /**
     * <p>True if you're able to update your service software version. False if you
     * can't update your service software version.</p>
     */
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }

    /**
     * <p>True if you're able to update your service software version. False if you
     * can't update your service software version.</p>
     */
    inline ServiceSoftwareOptions& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}


    /**
     * <p> True if you're able to cancel your service software version update. False if
     * you can't cancel your service software update.</p>
     */
    inline bool GetCancellable() const{ return m_cancellable; }

    /**
     * <p> True if you're able to cancel your service software version update. False if
     * you can't cancel your service software update.</p>
     */
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }

    /**
     * <p> True if you're able to cancel your service software version update. False if
     * you can't cancel your service software update.</p>
     */
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }

    /**
     * <p> True if you're able to cancel your service software version update. False if
     * you can't cancel your service software update.</p>
     */
    inline ServiceSoftwareOptions& WithCancellable(bool value) { SetCancellable(value); return *this;}


    /**
     * <p>The status of your service software update.</p>
     */
    inline const DeploymentStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The status of your service software update.</p>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The status of your service software update.</p>
     */
    inline void SetUpdateStatus(const DeploymentStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The status of your service software update.</p>
     */
    inline void SetUpdateStatus(DeploymentStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The status of your service software update.</p>
     */
    inline ServiceSoftwareOptions& WithUpdateStatus(const DeploymentStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The status of your service software update.</p>
     */
    inline ServiceSoftwareOptions& WithUpdateStatus(DeploymentStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the service software update status.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the service software update status.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the service software update status.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the service software update status.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the service software update status.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the service software update status.</p>
     */
    inline ServiceSoftwareOptions& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the service software update status.</p>
     */
    inline ServiceSoftwareOptions& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the service software update status.</p>
     */
    inline ServiceSoftwareOptions& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedUpdateDate() const{ return m_automatedUpdateDate; }

    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }

    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline void SetAutomatedUpdateDate(const Aws::Utils::DateTime& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = value; }

    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline void SetAutomatedUpdateDate(Aws::Utils::DateTime&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::move(value); }

    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(const Aws::Utils::DateTime& value) { SetAutomatedUpdateDate(value); return *this;}

    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(Aws::Utils::DateTime&& value) { SetAutomatedUpdateDate(std::move(value)); return *this;}


    /**
     * <p>True if a service software is never automatically updated. False if a service
     * software is automatically updated after the automated update date.</p>
     */
    inline bool GetOptionalDeployment() const{ return m_optionalDeployment; }

    /**
     * <p>True if a service software is never automatically updated. False if a service
     * software is automatically updated after the automated update date.</p>
     */
    inline bool OptionalDeploymentHasBeenSet() const { return m_optionalDeploymentHasBeenSet; }

    /**
     * <p>True if a service software is never automatically updated. False if a service
     * software is automatically updated after the automated update date.</p>
     */
    inline void SetOptionalDeployment(bool value) { m_optionalDeploymentHasBeenSet = true; m_optionalDeployment = value; }

    /**
     * <p>True if a service software is never automatically updated. False if a service
     * software is automatically updated after the automated update date.</p>
     */
    inline ServiceSoftwareOptions& WithOptionalDeployment(bool value) { SetOptionalDeployment(value); return *this;}

  private:

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_newVersion;
    bool m_newVersionHasBeenSet = false;

    bool m_updateAvailable;
    bool m_updateAvailableHasBeenSet = false;

    bool m_cancellable;
    bool m_cancellableHasBeenSet = false;

    DeploymentStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_automatedUpdateDate;
    bool m_automatedUpdateDateHasBeenSet = false;

    bool m_optionalDeployment;
    bool m_optionalDeploymentHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
