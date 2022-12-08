/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/ProtocolAndNotificationEndpoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{
  class GetDatalakeExceptionsSubscriptionResult
  {
  public:
    AWS_SECURITYLAKE_API GetDatalakeExceptionsSubscriptionResult();
    AWS_SECURITYLAKE_API GetDatalakeExceptionsSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDatalakeExceptionsSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Retrieves the exception notification subscription information.</p>
     */
    inline const ProtocolAndNotificationEndpoint& GetProtocolAndNotificationEndpoint() const{ return m_protocolAndNotificationEndpoint; }

    /**
     * <p>Retrieves the exception notification subscription information.</p>
     */
    inline void SetProtocolAndNotificationEndpoint(const ProtocolAndNotificationEndpoint& value) { m_protocolAndNotificationEndpoint = value; }

    /**
     * <p>Retrieves the exception notification subscription information.</p>
     */
    inline void SetProtocolAndNotificationEndpoint(ProtocolAndNotificationEndpoint&& value) { m_protocolAndNotificationEndpoint = std::move(value); }

    /**
     * <p>Retrieves the exception notification subscription information.</p>
     */
    inline GetDatalakeExceptionsSubscriptionResult& WithProtocolAndNotificationEndpoint(const ProtocolAndNotificationEndpoint& value) { SetProtocolAndNotificationEndpoint(value); return *this;}

    /**
     * <p>Retrieves the exception notification subscription information.</p>
     */
    inline GetDatalakeExceptionsSubscriptionResult& WithProtocolAndNotificationEndpoint(ProtocolAndNotificationEndpoint&& value) { SetProtocolAndNotificationEndpoint(std::move(value)); return *this;}

  private:

    ProtocolAndNotificationEndpoint m_protocolAndNotificationEndpoint;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
