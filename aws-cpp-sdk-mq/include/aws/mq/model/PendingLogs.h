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
   * The list of information about logs to be enabled for the specified
   * broker.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/PendingLogs">AWS API
   * Reference</a></p>
   */
  class AWS_MQ_API PendingLogs
  {
  public:
    PendingLogs();
    PendingLogs(Aws::Utils::Json::JsonView jsonValue);
    PendingLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PendingLogs& WithAudit(bool value) { SetAudit(value); return *this;}


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
    inline PendingLogs& WithGeneral(bool value) { SetGeneral(value); return *this;}

  private:

    bool m_audit;
    bool m_auditHasBeenSet;

    bool m_general;
    bool m_generalHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
