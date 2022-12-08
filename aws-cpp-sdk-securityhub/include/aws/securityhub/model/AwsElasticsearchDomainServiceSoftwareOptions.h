/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the state of the domain relative to the latest service
   * software.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainServiceSoftwareOptions">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainServiceSoftwareOptions
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainServiceSoftwareOptions();
    AWS_SECURITYHUB_API AwsElasticsearchDomainServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline const Aws::String& GetAutomatedUpdateDate() const{ return m_automatedUpdateDate; }

    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }

    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline void SetAutomatedUpdateDate(const Aws::String& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = value; }

    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline void SetAutomatedUpdateDate(Aws::String&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::move(value); }

    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline void SetAutomatedUpdateDate(const char* value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate.assign(value); }

    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithAutomatedUpdateDate(const Aws::String& value) { SetAutomatedUpdateDate(value); return *this;}

    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithAutomatedUpdateDate(Aws::String&& value) { SetAutomatedUpdateDate(std::move(value)); return *this;}

    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithAutomatedUpdateDate(const char* value) { SetAutomatedUpdateDate(value); return *this;}


    /**
     * <p>Whether a request to update the domain can be canceled.</p>
     */
    inline bool GetCancellable() const{ return m_cancellable; }

    /**
     * <p>Whether a request to update the domain can be canceled.</p>
     */
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }

    /**
     * <p>Whether a request to update the domain can be canceled.</p>
     */
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }

    /**
     * <p>Whether a request to update the domain can be canceled.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithCancellable(bool value) { SetCancellable(value); return *this;}


    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The most recent version of the service software.</p>
     */
    inline const Aws::String& GetNewVersion() const{ return m_newVersion; }

    /**
     * <p>The most recent version of the service software.</p>
     */
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }

    /**
     * <p>The most recent version of the service software.</p>
     */
    inline void SetNewVersion(const Aws::String& value) { m_newVersionHasBeenSet = true; m_newVersion = value; }

    /**
     * <p>The most recent version of the service software.</p>
     */
    inline void SetNewVersion(Aws::String&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::move(value); }

    /**
     * <p>The most recent version of the service software.</p>
     */
    inline void SetNewVersion(const char* value) { m_newVersionHasBeenSet = true; m_newVersion.assign(value); }

    /**
     * <p>The most recent version of the service software.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithNewVersion(const Aws::String& value) { SetNewVersion(value); return *this;}

    /**
     * <p>The most recent version of the service software.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithNewVersion(Aws::String&& value) { SetNewVersion(std::move(value)); return *this;}

    /**
     * <p>The most recent version of the service software.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithNewVersion(const char* value) { SetNewVersion(value); return *this;}


    /**
     * <p>Whether a service software update is available for the domain.</p>
     */
    inline bool GetUpdateAvailable() const{ return m_updateAvailable; }

    /**
     * <p>Whether a service software update is available for the domain.</p>
     */
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }

    /**
     * <p>Whether a service software update is available for the domain.</p>
     */
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }

    /**
     * <p>Whether a service software update is available for the domain.</p>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}


    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline void SetUpdateStatus(const Aws::String& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline void SetUpdateStatus(Aws::String&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline void SetUpdateStatus(const char* value) { m_updateStatusHasBeenSet = true; m_updateStatus.assign(value); }

    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithUpdateStatus(const Aws::String& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithUpdateStatus(Aws::String&& value) { SetUpdateStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithUpdateStatus(const char* value) { SetUpdateStatus(value); return *this;}

  private:

    Aws::String m_automatedUpdateDate;
    bool m_automatedUpdateDateHasBeenSet = false;

    bool m_cancellable;
    bool m_cancellableHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_newVersion;
    bool m_newVersionHasBeenSet = false;

    bool m_updateAvailable;
    bool m_updateAvailableHasBeenSet = false;

    Aws::String m_updateStatus;
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
