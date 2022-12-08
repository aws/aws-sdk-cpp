/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/OcsfEventClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/LogsStatus.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Security Lake can collect logs and events from supported Amazon Web Services
   * services and custom sources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/AccountSources">AWS
   * API Reference</a></p>
   */
  class AccountSources
  {
  public:
    AWS_SECURITYLAKE_API AccountSources();
    AWS_SECURITYLAKE_API AccountSources(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API AccountSources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline AccountSources& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline AccountSources& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>Account ID of the Security Lake account for which logs are collected.</p>
     */
    inline AccountSources& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>Initializes a new instance of the Event class.</p>
     */
    inline const OcsfEventClass& GetEventClass() const{ return m_eventClass; }

    /**
     * <p>Initializes a new instance of the Event class.</p>
     */
    inline bool EventClassHasBeenSet() const { return m_eventClassHasBeenSet; }

    /**
     * <p>Initializes a new instance of the Event class.</p>
     */
    inline void SetEventClass(const OcsfEventClass& value) { m_eventClassHasBeenSet = true; m_eventClass = value; }

    /**
     * <p>Initializes a new instance of the Event class.</p>
     */
    inline void SetEventClass(OcsfEventClass&& value) { m_eventClassHasBeenSet = true; m_eventClass = std::move(value); }

    /**
     * <p>Initializes a new instance of the Event class.</p>
     */
    inline AccountSources& WithEventClass(const OcsfEventClass& value) { SetEventClass(value); return *this;}

    /**
     * <p>Initializes a new instance of the Event class.</p>
     */
    inline AccountSources& WithEventClass(OcsfEventClass&& value) { SetEventClass(std::move(value)); return *this;}


    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline const Aws::Vector<LogsStatus>& GetLogsStatus() const{ return m_logsStatus; }

    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline bool LogsStatusHasBeenSet() const { return m_logsStatusHasBeenSet; }

    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline void SetLogsStatus(const Aws::Vector<LogsStatus>& value) { m_logsStatusHasBeenSet = true; m_logsStatus = value; }

    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline void SetLogsStatus(Aws::Vector<LogsStatus>&& value) { m_logsStatusHasBeenSet = true; m_logsStatus = std::move(value); }

    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline AccountSources& WithLogsStatus(const Aws::Vector<LogsStatus>& value) { SetLogsStatus(value); return *this;}

    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline AccountSources& WithLogsStatus(Aws::Vector<LogsStatus>&& value) { SetLogsStatus(std::move(value)); return *this;}

    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline AccountSources& AddLogsStatus(const LogsStatus& value) { m_logsStatusHasBeenSet = true; m_logsStatus.push_back(value); return *this; }

    /**
     * <p>Log status for the Security Lake account.</p>
     */
    inline AccountSources& AddLogsStatus(LogsStatus&& value) { m_logsStatusHasBeenSet = true; m_logsStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline AccountSources& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline AccountSources& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The supported Amazon Web Services services from which logs and events are
     * collected. Amazon Security Lake supports logs and events collection for
     * natively-supported Amazon Web Services services. For more information, see the
     * Amazon Security Lake User Guide. </p>
     */
    inline AccountSources& WithSourceType(const char* value) { SetSourceType(value); return *this;}

  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    OcsfEventClass m_eventClass;
    bool m_eventClassHasBeenSet = false;

    Aws::Vector<LogsStatus> m_logsStatus;
    bool m_logsStatusHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
