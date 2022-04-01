﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OutboundConnectionStatusCode.h>
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
   * <p>The connection status of an outbound cross-cluster connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/OutboundConnectionStatus">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API OutboundConnectionStatus
  {
  public:
    OutboundConnectionStatus();
    OutboundConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    OutboundConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state code for the outbound connection. Can be one of the following:</p>
     * <ul> <li>VALIDATING: The outbound connection request is being validated.</li>
     * <li>VALIDATION_FAILED: Validation failed for the connection request.</li>
     * <li>PENDING_ACCEPTANCE: Outbound connection request is validated and is not yet
     * accepted by the remote domain owner. </li> <li>APPROVED: Outbound connection has
     * been approved by the remote domain owner for getting provisioned.</li>
     * <li>PROVISIONING: Outbound connection request is in process.</li> <li>ACTIVE:
     * Outbound connection is active and ready to use.</li> <li>REJECTING: Outbound
     * connection rejection by remote domain owner is in progress.</li> <li>REJECTED:
     * Outbound connection request is rejected by remote domain owner.</li>
     * <li>DELETING: Outbound connection deletion is in progress.</li> <li>DELETED:
     * Outbound connection is deleted and can no longer be used.</li> </ul>
     */
    inline const OutboundConnectionStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The state code for the outbound connection. Can be one of the following:</p>
     * <ul> <li>VALIDATING: The outbound connection request is being validated.</li>
     * <li>VALIDATION_FAILED: Validation failed for the connection request.</li>
     * <li>PENDING_ACCEPTANCE: Outbound connection request is validated and is not yet
     * accepted by the remote domain owner. </li> <li>APPROVED: Outbound connection has
     * been approved by the remote domain owner for getting provisioned.</li>
     * <li>PROVISIONING: Outbound connection request is in process.</li> <li>ACTIVE:
     * Outbound connection is active and ready to use.</li> <li>REJECTING: Outbound
     * connection rejection by remote domain owner is in progress.</li> <li>REJECTED:
     * Outbound connection request is rejected by remote domain owner.</li>
     * <li>DELETING: Outbound connection deletion is in progress.</li> <li>DELETED:
     * Outbound connection is deleted and can no longer be used.</li> </ul>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The state code for the outbound connection. Can be one of the following:</p>
     * <ul> <li>VALIDATING: The outbound connection request is being validated.</li>
     * <li>VALIDATION_FAILED: Validation failed for the connection request.</li>
     * <li>PENDING_ACCEPTANCE: Outbound connection request is validated and is not yet
     * accepted by the remote domain owner. </li> <li>APPROVED: Outbound connection has
     * been approved by the remote domain owner for getting provisioned.</li>
     * <li>PROVISIONING: Outbound connection request is in process.</li> <li>ACTIVE:
     * Outbound connection is active and ready to use.</li> <li>REJECTING: Outbound
     * connection rejection by remote domain owner is in progress.</li> <li>REJECTED:
     * Outbound connection request is rejected by remote domain owner.</li>
     * <li>DELETING: Outbound connection deletion is in progress.</li> <li>DELETED:
     * Outbound connection is deleted and can no longer be used.</li> </ul>
     */
    inline void SetStatusCode(const OutboundConnectionStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The state code for the outbound connection. Can be one of the following:</p>
     * <ul> <li>VALIDATING: The outbound connection request is being validated.</li>
     * <li>VALIDATION_FAILED: Validation failed for the connection request.</li>
     * <li>PENDING_ACCEPTANCE: Outbound connection request is validated and is not yet
     * accepted by the remote domain owner. </li> <li>APPROVED: Outbound connection has
     * been approved by the remote domain owner for getting provisioned.</li>
     * <li>PROVISIONING: Outbound connection request is in process.</li> <li>ACTIVE:
     * Outbound connection is active and ready to use.</li> <li>REJECTING: Outbound
     * connection rejection by remote domain owner is in progress.</li> <li>REJECTED:
     * Outbound connection request is rejected by remote domain owner.</li>
     * <li>DELETING: Outbound connection deletion is in progress.</li> <li>DELETED:
     * Outbound connection is deleted and can no longer be used.</li> </ul>
     */
    inline void SetStatusCode(OutboundConnectionStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The state code for the outbound connection. Can be one of the following:</p>
     * <ul> <li>VALIDATING: The outbound connection request is being validated.</li>
     * <li>VALIDATION_FAILED: Validation failed for the connection request.</li>
     * <li>PENDING_ACCEPTANCE: Outbound connection request is validated and is not yet
     * accepted by the remote domain owner. </li> <li>APPROVED: Outbound connection has
     * been approved by the remote domain owner for getting provisioned.</li>
     * <li>PROVISIONING: Outbound connection request is in process.</li> <li>ACTIVE:
     * Outbound connection is active and ready to use.</li> <li>REJECTING: Outbound
     * connection rejection by remote domain owner is in progress.</li> <li>REJECTED:
     * Outbound connection request is rejected by remote domain owner.</li>
     * <li>DELETING: Outbound connection deletion is in progress.</li> <li>DELETED:
     * Outbound connection is deleted and can no longer be used.</li> </ul>
     */
    inline OutboundConnectionStatus& WithStatusCode(const OutboundConnectionStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The state code for the outbound connection. Can be one of the following:</p>
     * <ul> <li>VALIDATING: The outbound connection request is being validated.</li>
     * <li>VALIDATION_FAILED: Validation failed for the connection request.</li>
     * <li>PENDING_ACCEPTANCE: Outbound connection request is validated and is not yet
     * accepted by the remote domain owner. </li> <li>APPROVED: Outbound connection has
     * been approved by the remote domain owner for getting provisioned.</li>
     * <li>PROVISIONING: Outbound connection request is in process.</li> <li>ACTIVE:
     * Outbound connection is active and ready to use.</li> <li>REJECTING: Outbound
     * connection rejection by remote domain owner is in progress.</li> <li>REJECTED:
     * Outbound connection request is rejected by remote domain owner.</li>
     * <li>DELETING: Outbound connection deletion is in progress.</li> <li>DELETED:
     * Outbound connection is deleted and can no longer be used.</li> </ul>
     */
    inline OutboundConnectionStatus& WithStatusCode(OutboundConnectionStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline OutboundConnectionStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline OutboundConnectionStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Verbose information for the outbound connection status.</p>
     */
    inline OutboundConnectionStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    OutboundConnectionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
