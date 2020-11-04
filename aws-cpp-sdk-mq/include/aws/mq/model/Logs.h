/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/Logs">AWS API
   * Reference</a></p>
   */
  class AWS_MQ_API Logs
  {
  public:
    Logs();
    Logs(Aws::Utils::Json::JsonView jsonValue);
    Logs& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Does not apply to RabbitMQ brokers.
     */
    inline bool GetAudit() const{ return m_audit; }

    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Does not apply to RabbitMQ brokers.
     */
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }

    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Does not apply to RabbitMQ brokers.
     */
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }

    /**
     * Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged. Does not apply to RabbitMQ brokers.
     */
    inline Logs& WithAudit(bool value) { SetAudit(value); return *this;}


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
    inline Logs& WithGeneral(bool value) { SetGeneral(value); return *this;}

  private:

    bool m_audit;
    bool m_auditHasBeenSet;

    bool m_general;
    bool m_generalHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
