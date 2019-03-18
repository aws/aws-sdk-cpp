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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/PendingLogs.h>
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
namespace MQ
{
namespace Model
{

  /**
   * The list of information about logs currently enabled and pending to be deployed
   * for the specified broker.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/LogsSummary">AWS API
   * Reference</a></p>
   */
  class AWS_MQ_API LogsSummary
  {
  public:
    LogsSummary();
    LogsSummary(Aws::Utils::Json::JsonView jsonValue);
    LogsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.
     */
    inline bool GetAudit() const{ return m_audit; }

    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.
     */
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }

    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.
     */
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }

    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.
     */
    inline LogsSummary& WithAudit(bool value) { SetAudit(value); return *this;}


    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline const Aws::String& GetAuditLogGroup() const{ return m_auditLogGroup; }

    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline bool AuditLogGroupHasBeenSet() const { return m_auditLogGroupHasBeenSet; }

    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline void SetAuditLogGroup(const Aws::String& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = value; }

    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline void SetAuditLogGroup(Aws::String&& value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup = std::move(value); }

    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline void SetAuditLogGroup(const char* value) { m_auditLogGroupHasBeenSet = true; m_auditLogGroup.assign(value); }

    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline LogsSummary& WithAuditLogGroup(const Aws::String& value) { SetAuditLogGroup(value); return *this;}

    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline LogsSummary& WithAuditLogGroup(Aws::String&& value) { SetAuditLogGroup(std::move(value)); return *this;}

    /**
     * The location of the CloudWatch Logs log group where audit logs are sent.
     */
    inline LogsSummary& WithAuditLogGroup(const char* value) { SetAuditLogGroup(value); return *this;}


    /**
     * Enables general logging.
     */
    inline bool GetGeneral() const{ return m_general; }

    /**
     * Enables general logging.
     */
    inline bool GeneralHasBeenSet() const { return m_generalHasBeenSet; }

    /**
     * Enables general logging.
     */
    inline void SetGeneral(bool value) { m_generalHasBeenSet = true; m_general = value; }

    /**
     * Enables general logging.
     */
    inline LogsSummary& WithGeneral(bool value) { SetGeneral(value); return *this;}


    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline const Aws::String& GetGeneralLogGroup() const{ return m_generalLogGroup; }

    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline bool GeneralLogGroupHasBeenSet() const { return m_generalLogGroupHasBeenSet; }

    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline void SetGeneralLogGroup(const Aws::String& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = value; }

    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline void SetGeneralLogGroup(Aws::String&& value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup = std::move(value); }

    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline void SetGeneralLogGroup(const char* value) { m_generalLogGroupHasBeenSet = true; m_generalLogGroup.assign(value); }

    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline LogsSummary& WithGeneralLogGroup(const Aws::String& value) { SetGeneralLogGroup(value); return *this;}

    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline LogsSummary& WithGeneralLogGroup(Aws::String&& value) { SetGeneralLogGroup(std::move(value)); return *this;}

    /**
     * The location of the CloudWatch Logs log group where general logs are sent.
     */
    inline LogsSummary& WithGeneralLogGroup(const char* value) { SetGeneralLogGroup(value); return *this;}


    /**
     * The list of information about logs pending to be deployed for the specified
     * broker.
     */
    inline const PendingLogs& GetPending() const{ return m_pending; }

    /**
     * The list of information about logs pending to be deployed for the specified
     * broker.
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * The list of information about logs pending to be deployed for the specified
     * broker.
     */
    inline void SetPending(const PendingLogs& value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * The list of information about logs pending to be deployed for the specified
     * broker.
     */
    inline void SetPending(PendingLogs&& value) { m_pendingHasBeenSet = true; m_pending = std::move(value); }

    /**
     * The list of information about logs pending to be deployed for the specified
     * broker.
     */
    inline LogsSummary& WithPending(const PendingLogs& value) { SetPending(value); return *this;}

    /**
     * The list of information about logs pending to be deployed for the specified
     * broker.
     */
    inline LogsSummary& WithPending(PendingLogs&& value) { SetPending(std::move(value)); return *this;}

  private:

    bool m_audit;
    bool m_auditHasBeenSet;

    Aws::String m_auditLogGroup;
    bool m_auditLogGroupHasBeenSet;

    bool m_general;
    bool m_generalHasBeenSet;

    Aws::String m_generalLogGroup;
    bool m_generalLogGroupHasBeenSet;

    PendingLogs m_pending;
    bool m_pendingHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
