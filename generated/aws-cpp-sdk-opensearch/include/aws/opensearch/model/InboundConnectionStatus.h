/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InboundConnectionStatusCode.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The connection status of an inbound cross-cluster connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InboundConnectionStatus">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API InboundConnectionStatus
  {
  public:
    InboundConnectionStatus();
    InboundConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    InboundConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state code for the inbound connection. Can be one of the following:</p>
     * <ul> <li>PENDING_ACCEPTANCE: Inbound connection is not yet accepted by the
     * remote domain owner.</li> <li>APPROVED: Inbound connection is pending acceptance
     * by the remote domain owner.</li> <li>PROVISIONING: Inbound connection
     * provisioning is in progress.</li> <li>ACTIVE: Inbound connection is active and
     * ready to use.</li> <li>REJECTING: Inbound connection rejection is in
     * process.</li> <li>REJECTED: Inbound connection is rejected.</li> <li>DELETING:
     * Inbound connection deletion is in progress.</li> <li>DELETED: Inbound connection
     * is deleted and can no longer be used.</li> </ul>
     */
    inline const InboundConnectionStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The state code for the inbound connection. Can be one of the following:</p>
     * <ul> <li>PENDING_ACCEPTANCE: Inbound connection is not yet accepted by the
     * remote domain owner.</li> <li>APPROVED: Inbound connection is pending acceptance
     * by the remote domain owner.</li> <li>PROVISIONING: Inbound connection
     * provisioning is in progress.</li> <li>ACTIVE: Inbound connection is active and
     * ready to use.</li> <li>REJECTING: Inbound connection rejection is in
     * process.</li> <li>REJECTED: Inbound connection is rejected.</li> <li>DELETING:
     * Inbound connection deletion is in progress.</li> <li>DELETED: Inbound connection
     * is deleted and can no longer be used.</li> </ul>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The state code for the inbound connection. Can be one of the following:</p>
     * <ul> <li>PENDING_ACCEPTANCE: Inbound connection is not yet accepted by the
     * remote domain owner.</li> <li>APPROVED: Inbound connection is pending acceptance
     * by the remote domain owner.</li> <li>PROVISIONING: Inbound connection
     * provisioning is in progress.</li> <li>ACTIVE: Inbound connection is active and
     * ready to use.</li> <li>REJECTING: Inbound connection rejection is in
     * process.</li> <li>REJECTED: Inbound connection is rejected.</li> <li>DELETING:
     * Inbound connection deletion is in progress.</li> <li>DELETED: Inbound connection
     * is deleted and can no longer be used.</li> </ul>
     */
    inline void SetStatusCode(const InboundConnectionStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The state code for the inbound connection. Can be one of the following:</p>
     * <ul> <li>PENDING_ACCEPTANCE: Inbound connection is not yet accepted by the
     * remote domain owner.</li> <li>APPROVED: Inbound connection is pending acceptance
     * by the remote domain owner.</li> <li>PROVISIONING: Inbound connection
     * provisioning is in progress.</li> <li>ACTIVE: Inbound connection is active and
     * ready to use.</li> <li>REJECTING: Inbound connection rejection is in
     * process.</li> <li>REJECTED: Inbound connection is rejected.</li> <li>DELETING:
     * Inbound connection deletion is in progress.</li> <li>DELETED: Inbound connection
     * is deleted and can no longer be used.</li> </ul>
     */
    inline void SetStatusCode(InboundConnectionStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The state code for the inbound connection. Can be one of the following:</p>
     * <ul> <li>PENDING_ACCEPTANCE: Inbound connection is not yet accepted by the
     * remote domain owner.</li> <li>APPROVED: Inbound connection is pending acceptance
     * by the remote domain owner.</li> <li>PROVISIONING: Inbound connection
     * provisioning is in progress.</li> <li>ACTIVE: Inbound connection is active and
     * ready to use.</li> <li>REJECTING: Inbound connection rejection is in
     * process.</li> <li>REJECTED: Inbound connection is rejected.</li> <li>DELETING:
     * Inbound connection deletion is in progress.</li> <li>DELETED: Inbound connection
     * is deleted and can no longer be used.</li> </ul>
     */
    inline InboundConnectionStatus& WithStatusCode(const InboundConnectionStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The state code for the inbound connection. Can be one of the following:</p>
     * <ul> <li>PENDING_ACCEPTANCE: Inbound connection is not yet accepted by the
     * remote domain owner.</li> <li>APPROVED: Inbound connection is pending acceptance
     * by the remote domain owner.</li> <li>PROVISIONING: Inbound connection
     * provisioning is in progress.</li> <li>ACTIVE: Inbound connection is active and
     * ready to use.</li> <li>REJECTING: Inbound connection rejection is in
     * process.</li> <li>REJECTED: Inbound connection is rejected.</li> <li>DELETING:
     * Inbound connection deletion is in progress.</li> <li>DELETED: Inbound connection
     * is deleted and can no longer be used.</li> </ul>
     */
    inline InboundConnectionStatus& WithStatusCode(InboundConnectionStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline InboundConnectionStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline InboundConnectionStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Verbose information for the inbound connection status.</p>
     */
    inline InboundConnectionStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    InboundConnectionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
