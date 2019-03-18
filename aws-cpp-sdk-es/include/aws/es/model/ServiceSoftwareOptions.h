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
  class AWS_ELASTICSEARCHSERVICE_API ServiceSoftwareOptions
  {
  public:
    ServiceSoftwareOptions();
    ServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    ServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline ServiceSoftwareOptions& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline ServiceSoftwareOptions& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current service software version that is present on the domain.</p>
     */
    inline ServiceSoftwareOptions& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>The new service software version if one is available.</p>
     */
    inline const Aws::String& GetNewVersion() const{ return m_newVersion; }

    /**
     * <p>The new service software version if one is available.</p>
     */
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }

    /**
     * <p>The new service software version if one is available.</p>
     */
    inline void SetNewVersion(const Aws::String& value) { m_newVersionHasBeenSet = true; m_newVersion = value; }

    /**
     * <p>The new service software version if one is available.</p>
     */
    inline void SetNewVersion(Aws::String&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::move(value); }

    /**
     * <p>The new service software version if one is available.</p>
     */
    inline void SetNewVersion(const char* value) { m_newVersionHasBeenSet = true; m_newVersion.assign(value); }

    /**
     * <p>The new service software version if one is available.</p>
     */
    inline ServiceSoftwareOptions& WithNewVersion(const Aws::String& value) { SetNewVersion(value); return *this;}

    /**
     * <p>The new service software version if one is available.</p>
     */
    inline ServiceSoftwareOptions& WithNewVersion(Aws::String&& value) { SetNewVersion(std::move(value)); return *this;}

    /**
     * <p>The new service software version if one is available.</p>
     */
    inline ServiceSoftwareOptions& WithNewVersion(const char* value) { SetNewVersion(value); return *this;}


    /**
     * <p><code>True</code> if you are able to update you service software version.
     * <code>False</code> if you are not able to update your service software version.
     * </p>
     */
    inline bool GetUpdateAvailable() const{ return m_updateAvailable; }

    /**
     * <p><code>True</code> if you are able to update you service software version.
     * <code>False</code> if you are not able to update your service software version.
     * </p>
     */
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }

    /**
     * <p><code>True</code> if you are able to update you service software version.
     * <code>False</code> if you are not able to update your service software version.
     * </p>
     */
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }

    /**
     * <p><code>True</code> if you are able to update you service software version.
     * <code>False</code> if you are not able to update your service software version.
     * </p>
     */
    inline ServiceSoftwareOptions& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}


    /**
     * <p><code>True</code> if you are able to cancel your service software version
     * update. <code>False</code> if you are not able to cancel your service software
     * version. </p>
     */
    inline bool GetCancellable() const{ return m_cancellable; }

    /**
     * <p><code>True</code> if you are able to cancel your service software version
     * update. <code>False</code> if you are not able to cancel your service software
     * version. </p>
     */
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }

    /**
     * <p><code>True</code> if you are able to cancel your service software version
     * update. <code>False</code> if you are not able to cancel your service software
     * version. </p>
     */
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }

    /**
     * <p><code>True</code> if you are able to cancel your service software version
     * update. <code>False</code> if you are not able to cancel your service software
     * version. </p>
     */
    inline ServiceSoftwareOptions& WithCancellable(bool value) { SetCancellable(value); return *this;}


    /**
     * <p>The status of your service software update. This field can take the following
     * values: <code>ELIGIBLE</code>, <code>PENDING_UPDATE</code>,
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
     * <code>NOT_ELIGIBLE</code>.</p>
     */
    inline const DeploymentStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The status of your service software update. This field can take the following
     * values: <code>ELIGIBLE</code>, <code>PENDING_UPDATE</code>,
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
     * <code>NOT_ELIGIBLE</code>.</p>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The status of your service software update. This field can take the following
     * values: <code>ELIGIBLE</code>, <code>PENDING_UPDATE</code>,
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
     * <code>NOT_ELIGIBLE</code>.</p>
     */
    inline void SetUpdateStatus(const DeploymentStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The status of your service software update. This field can take the following
     * values: <code>ELIGIBLE</code>, <code>PENDING_UPDATE</code>,
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
     * <code>NOT_ELIGIBLE</code>.</p>
     */
    inline void SetUpdateStatus(DeploymentStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The status of your service software update. This field can take the following
     * values: <code>ELIGIBLE</code>, <code>PENDING_UPDATE</code>,
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
     * <code>NOT_ELIGIBLE</code>.</p>
     */
    inline ServiceSoftwareOptions& WithUpdateStatus(const DeploymentStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The status of your service software update. This field can take the following
     * values: <code>ELIGIBLE</code>, <code>PENDING_UPDATE</code>,
     * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, and
     * <code>NOT_ELIGIBLE</code>.</p>
     */
    inline ServiceSoftwareOptions& WithUpdateStatus(DeploymentStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline ServiceSoftwareOptions& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline ServiceSoftwareOptions& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the <code>UpdateStatus</code>.</p>
     */
    inline ServiceSoftwareOptions& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedUpdateDate() const{ return m_automatedUpdateDate; }

    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }

    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline void SetAutomatedUpdateDate(const Aws::Utils::DateTime& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = value; }

    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline void SetAutomatedUpdateDate(Aws::Utils::DateTime&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::move(value); }

    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(const Aws::Utils::DateTime& value) { SetAutomatedUpdateDate(value); return *this;}

    /**
     * <p>Timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(Aws::Utils::DateTime&& value) { SetAutomatedUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet;

    Aws::String m_newVersion;
    bool m_newVersionHasBeenSet;

    bool m_updateAvailable;
    bool m_updateAvailableHasBeenSet;

    bool m_cancellable;
    bool m_cancellableHasBeenSet;

    DeploymentStatus m_updateStatus;
    bool m_updateStatusHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Utils::DateTime m_automatedUpdateDate;
    bool m_automatedUpdateDateHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
