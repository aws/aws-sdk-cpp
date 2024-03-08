/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ConfigChangeStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/InitiatedBy.h>
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
   * <p>Specifies change details of the domain configuration change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ChangeProgressDetails">AWS
   * API Reference</a></p>
   */
  class ChangeProgressDetails
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressDetails();
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ChangeProgressDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline const Aws::String& GetChangeId() const{ return m_changeId; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(const Aws::String& value) { m_changeIdHasBeenSet = true; m_changeId = value; }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(Aws::String&& value) { m_changeIdHasBeenSet = true; m_changeId = std::move(value); }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline void SetChangeId(const char* value) { m_changeIdHasBeenSet = true; m_changeId.assign(value); }

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(const Aws::String& value) { SetChangeId(value); return *this;}

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(Aws::String&& value) { SetChangeId(std::move(value)); return *this;}

    /**
     * <p>The unique change identifier associated with a specific domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithChangeId(const char* value) { SetChangeId(value); return *this;}


    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Contains an optional message associated with the domain configuration
     * change.</p>
     */
    inline ChangeProgressDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The current status of the configuration change.</p>
     */
    inline const ConfigChangeStatus& GetConfigChangeStatus() const{ return m_configChangeStatus; }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline bool ConfigChangeStatusHasBeenSet() const { return m_configChangeStatusHasBeenSet; }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline void SetConfigChangeStatus(const ConfigChangeStatus& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = value; }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline void SetConfigChangeStatus(ConfigChangeStatus&& value) { m_configChangeStatusHasBeenSet = true; m_configChangeStatus = std::move(value); }

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithConfigChangeStatus(const ConfigChangeStatus& value) { SetConfigChangeStatus(value); return *this;}

    /**
     * <p>The current status of the configuration change.</p>
     */
    inline ChangeProgressDetails& WithConfigChangeStatus(ConfigChangeStatus&& value) { SetConfigChangeStatus(std::move(value)); return *this;}


    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ChangeProgressDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the configuration change was initiated, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ChangeProgressDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline ChangeProgressDetails& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time that the configuration change was updated.</p>
     */
    inline ChangeProgressDetails& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline const InitiatedBy& GetInitiatedBy() const{ return m_initiatedBy; }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline void SetInitiatedBy(const InitiatedBy& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline void SetInitiatedBy(InitiatedBy&& value) { m_initiatedByHasBeenSet = true; m_initiatedBy = std::move(value); }

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline ChangeProgressDetails& WithInitiatedBy(const InitiatedBy& value) { SetInitiatedBy(value); return *this;}

    /**
     * <p>The IAM principal who initiated the configuration change.</p>
     */
    inline ChangeProgressDetails& WithInitiatedBy(InitiatedBy&& value) { SetInitiatedBy(std::move(value)); return *this;}

  private:

    Aws::String m_changeId;
    bool m_changeIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ConfigChangeStatus m_configChangeStatus;
    bool m_configChangeStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    InitiatedBy m_initiatedBy;
    bool m_initiatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
