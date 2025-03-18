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
    AWS_ELASTICSEARCHSERVICE_API ServiceSoftwareOptions() = default;
    AWS_ELASTICSEARCHSERVICE_API ServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    ServiceSoftwareOptions& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service software version if one is available.</p>
     */
    inline const Aws::String& GetNewVersion() const { return m_newVersion; }
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }
    template<typename NewVersionT = Aws::String>
    void SetNewVersion(NewVersionT&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::forward<NewVersionT>(value); }
    template<typename NewVersionT = Aws::String>
    ServiceSoftwareOptions& WithNewVersion(NewVersionT&& value) { SetNewVersion(std::forward<NewVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p><code>True</code> if you are able to update you service software version.
     * <code>False</code> if you are not able to update your service software version.
     * </p>
     */
    inline bool GetUpdateAvailable() const { return m_updateAvailable; }
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
    inline bool GetCancellable() const { return m_cancellable; }
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
    inline DeploymentStatus GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(DeploymentStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline ServiceSoftwareOptions& WithUpdateStatus(DeploymentStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServiceSoftwareOptions& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedUpdateDate() const { return m_automatedUpdateDate; }
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }
    template<typename AutomatedUpdateDateT = Aws::Utils::DateTime>
    void SetAutomatedUpdateDate(AutomatedUpdateDateT&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::forward<AutomatedUpdateDateT>(value); }
    template<typename AutomatedUpdateDateT = Aws::Utils::DateTime>
    ServiceSoftwareOptions& WithAutomatedUpdateDate(AutomatedUpdateDateT&& value) { SetAutomatedUpdateDate(std::forward<AutomatedUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p><code>True</code> if a service software is never automatically updated.
     * <code>False</code> if a service software is automatically updated after
     * <code>AutomatedUpdateDate</code>. </p>
     */
    inline bool GetOptionalDeployment() const { return m_optionalDeployment; }
    inline bool OptionalDeploymentHasBeenSet() const { return m_optionalDeploymentHasBeenSet; }
    inline void SetOptionalDeployment(bool value) { m_optionalDeploymentHasBeenSet = true; m_optionalDeployment = value; }
    inline ServiceSoftwareOptions& WithOptionalDeployment(bool value) { SetOptionalDeployment(value); return *this;}
    ///@}
  private:

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_newVersion;
    bool m_newVersionHasBeenSet = false;

    bool m_updateAvailable{false};
    bool m_updateAvailableHasBeenSet = false;

    bool m_cancellable{false};
    bool m_cancellableHasBeenSet = false;

    DeploymentStatus m_updateStatus{DeploymentStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_automatedUpdateDate{};
    bool m_automatedUpdateDateHasBeenSet = false;

    bool m_optionalDeployment{false};
    bool m_optionalDeploymentHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
