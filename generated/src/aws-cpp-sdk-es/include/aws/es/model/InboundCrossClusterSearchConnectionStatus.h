﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/InboundCrossClusterSearchConnectionStatusCode.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the coonection status of an inbound cross-cluster search
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/InboundCrossClusterSearchConnectionStatus">AWS
   * API Reference</a></p>
   */
  class InboundCrossClusterSearchConnectionStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnectionStatus() = default;
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API InboundCrossClusterSearchConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state code for inbound connection. This can be one of the following:</p>
     * <ul> <li>PENDING_ACCEPTANCE: Inbound connection is not yet accepted by
     * destination domain owner.</li> <li>APPROVED: Inbound connection is pending
     * acceptance by destination domain owner.</li> <li>REJECTING: Inbound connection
     * rejection is in process.</li> <li>REJECTED: Inbound connection is rejected.</li>
     * <li>DELETING: Inbound connection deletion is in progress.</li> <li>DELETED:
     * Inbound connection is deleted and cannot be used further.</li> </ul>
     */
    inline InboundCrossClusterSearchConnectionStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(InboundCrossClusterSearchConnectionStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline InboundCrossClusterSearchConnectionStatus& WithStatusCode(InboundCrossClusterSearchConnectionStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies verbose information for the inbound connection status.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InboundCrossClusterSearchConnectionStatus& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    InboundCrossClusterSearchConnectionStatusCode m_statusCode{InboundCrossClusterSearchConnectionStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
