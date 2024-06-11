/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/DeploymentStatus.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>The current options of an Elasticsearch domain service software
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ServiceSoftwareOptions">AWS
   * API Reference</a></p>
   */
  class ServiceSoftwareOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ServiceSoftwareOptions();
    AWS_ELASTICSEARCHSERVICE_API ServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline ServiceSoftwareOptions& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline ServiceSoftwareOptions& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline ServiceSoftwareOptions& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service software version if one is available.</p>
     */
    inline const Aws::String& GetNewVersion() const{ return m_newVersion; }
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }
    inline void SetNewVersion(const Aws::String& value) { m_newVersionHasBeenSet = true; m_newVersion = value; }
    inline void SetNewVersion(Aws::String&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::move(value); }
    inline void SetNewVersion(const char* value) { m_newVersionHasBeenSet = true; m_newVersion.assign(value); }
    inline ServiceSoftwareOptions& WithNewVersion(const Aws::String& value) { SetNewVersion(value); return *this;}
    inline ServiceSoftwareOptions& WithNewVersion(Aws::String&& value) { SetNewVersion(std::move(value)); return *this;}
    inline ServiceSoftwareOptions& WithNewVersion(const char* value) { SetNewVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p><code>True</code> if you are able to update you service software version.
     * <code>False</code> if you are not able to update your service software version.
     * </p>
     */
    inline bool GetUpdateAvailable() const{ return m_updateAvailable; }
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }
    inline ServiceSoftwareOptions& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p><code>True</code> if you are able to cancel your service software version
     * update. <code>False</code> if you are not able to cancel your service software
     * version. </p>
     */
    inline bool GetCancellable() const{ return m_cancellable; }
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }
    inline ServiceSoftwareOptions& WithCancellable(bool value) { SetCancellable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your service software update. This field can take the following
     * values: <code>ELIGIBLE</code>, <code>PENDING_UPDATE</code>,
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
     * <code>NOT_ELIGIBLE</code>.</p>
     */
    inline const DeploymentStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const DeploymentStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(DeploymentStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline ServiceSoftwareOptions& WithUpdateStatus(const DeploymentStatus& value) { SetUpdateStatus(value); return *this;}
    inline ServiceSoftwareOptions& WithUpdateStatus(DeploymentStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceSoftwareOptions& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceSoftwareOptions& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceSoftwareOptions& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedUpdateDate() const{ return m_automatedUpdateDate; }
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }
    inline void SetAutomatedUpdateDate(const Aws::Utils::DateTime& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = value; }
    inline void SetAutomatedUpdateDate(Aws::Utils::DateTime&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::move(value); }
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(const Aws::Utils::DateTime& value) { SetAutomatedUpdateDate(value); return *this;}
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(Aws::Utils::DateTime&& value) { SetAutomatedUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p><code>True</code> if a service software is never automatically updated.
     * <code>False</code> if a service software is automatically updated after
     * <code>AutomatedUpdateDate</code>. </p>
     */
    inline bool GetOptionalDeployment() const{ return m_optionalDeployment; }
    inline bool OptionalDeploymentHasBeenSet() const { return m_optionalDeploymentHasBeenSet; }
    inline void SetOptionalDeployment(bool value) { m_optionalDeploymentHasBeenSet = true; m_optionalDeployment = value; }
    inline ServiceSoftwareOptions& WithOptionalDeployment(bool value) { SetOptionalDeployment(value); return *this;}
    ///@}
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
} // namespace ElasticsearchService
} // namespace Aws
