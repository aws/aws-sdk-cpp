/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/OutboundCrossClusterSearchConnectionStatusCode.h>
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
   * <p>Specifies the connection status of an outbound cross-cluster search
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/OutboundCrossClusterSearchConnectionStatus">AWS
   * API Reference</a></p>
   */
  class OutboundCrossClusterSearchConnectionStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnectionStatus() = default;
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API OutboundCrossClusterSearchConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state code for outbound connection. This can be one of the following:</p>
     * <ul> <li>VALIDATING: The outbound connection request is being validated.</li>
     * <li>VALIDATION_FAILED: Validation failed for the connection request.</li>
     * <li>PENDING_ACCEPTANCE: Outbound connection request is validated and is not yet
     * accepted by destination domain owner.</li> <li>PROVISIONING: Outbound connection
     * request is in process.</li> <li>ACTIVE: Outbound connection is active and ready
     * to use.</li> <li>REJECTED: Outbound connection request is rejected by
     * destination domain owner.</li> <li>DELETING: Outbound connection deletion is in
     * progress.</li> <li>DELETED: Outbound connection is deleted and cannot be used
     * further.</li> </ul>
     */
    inline OutboundCrossClusterSearchConnectionStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(OutboundCrossClusterSearchConnectionStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline OutboundCrossClusterSearchConnectionStatus& WithStatusCode(OutboundCrossClusterSearchConnectionStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies verbose information for the outbound connection status.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    OutboundCrossClusterSearchConnectionStatus& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    OutboundCrossClusterSearchConnectionStatusCode m_statusCode{OutboundCrossClusterSearchConnectionStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
