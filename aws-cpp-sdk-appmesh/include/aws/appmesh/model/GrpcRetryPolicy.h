/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/Duration.h>
#include <aws/appmesh/model/GrpcRetryPolicyEvent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/TcpRetryPolicyEvent.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a retry policy. Specify at least one value for at
   * least one of the types of <code>RetryEvents</code>, a value for
   * <code>maxRetries</code>, and a value for <code>perRetryTimeout</code>. Both
   * <code>server-error</code> and <code>gateway-error</code> under
   * <code>httpRetryEvents</code> include the Envoy <code>reset</code> policy. For
   * more information on the <code>reset</code> policy, see the <a
   * href="https://www.envoyproxy.io/docs/envoy/latest/configuration/http/http_filters/router_filter#x-envoy-retry-on">Envoy
   * documentation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcRetryPolicy">AWS
   * API Reference</a></p>
   */
  class GrpcRetryPolicy
  {
  public:
    AWS_APPMESH_API GrpcRetryPolicy();
    AWS_APPMESH_API GrpcRetryPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcRetryPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline const Aws::Vector<GrpcRetryPolicyEvent>& GetGrpcRetryEvents() const{ return m_grpcRetryEvents; }

    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline bool GrpcRetryEventsHasBeenSet() const { return m_grpcRetryEventsHasBeenSet; }

    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline void SetGrpcRetryEvents(const Aws::Vector<GrpcRetryPolicyEvent>& value) { m_grpcRetryEventsHasBeenSet = true; m_grpcRetryEvents = value; }

    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline void SetGrpcRetryEvents(Aws::Vector<GrpcRetryPolicyEvent>&& value) { m_grpcRetryEventsHasBeenSet = true; m_grpcRetryEvents = std::move(value); }

    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline GrpcRetryPolicy& WithGrpcRetryEvents(const Aws::Vector<GrpcRetryPolicyEvent>& value) { SetGrpcRetryEvents(value); return *this;}

    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline GrpcRetryPolicy& WithGrpcRetryEvents(Aws::Vector<GrpcRetryPolicyEvent>&& value) { SetGrpcRetryEvents(std::move(value)); return *this;}

    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline GrpcRetryPolicy& AddGrpcRetryEvents(const GrpcRetryPolicyEvent& value) { m_grpcRetryEventsHasBeenSet = true; m_grpcRetryEvents.push_back(value); return *this; }

    /**
     * <p>Specify at least one of the valid values.</p>
     */
    inline GrpcRetryPolicy& AddGrpcRetryEvents(GrpcRetryPolicyEvent&& value) { m_grpcRetryEventsHasBeenSet = true; m_grpcRetryEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetHttpRetryEvents() const{ return m_httpRetryEvents; }

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline bool HttpRetryEventsHasBeenSet() const { return m_httpRetryEventsHasBeenSet; }

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline void SetHttpRetryEvents(const Aws::Vector<Aws::String>& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents = value; }

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline void SetHttpRetryEvents(Aws::Vector<Aws::String>&& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents = std::move(value); }

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline GrpcRetryPolicy& WithHttpRetryEvents(const Aws::Vector<Aws::String>& value) { SetHttpRetryEvents(value); return *this;}

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline GrpcRetryPolicy& WithHttpRetryEvents(Aws::Vector<Aws::String>&& value) { SetHttpRetryEvents(std::move(value)); return *this;}

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline GrpcRetryPolicy& AddHttpRetryEvents(const Aws::String& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents.push_back(value); return *this; }

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline GrpcRetryPolicy& AddHttpRetryEvents(Aws::String&& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline GrpcRetryPolicy& AddHttpRetryEvents(const char* value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents.push_back(value); return *this; }


    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline long long GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline void SetMaxRetries(long long value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline GrpcRetryPolicy& WithMaxRetries(long long value) { SetMaxRetries(value); return *this;}


    /**
     * <p>The timeout for each retry attempt.</p>
     */
    inline const Duration& GetPerRetryTimeout() const{ return m_perRetryTimeout; }

    /**
     * <p>The timeout for each retry attempt.</p>
     */
    inline bool PerRetryTimeoutHasBeenSet() const { return m_perRetryTimeoutHasBeenSet; }

    /**
     * <p>The timeout for each retry attempt.</p>
     */
    inline void SetPerRetryTimeout(const Duration& value) { m_perRetryTimeoutHasBeenSet = true; m_perRetryTimeout = value; }

    /**
     * <p>The timeout for each retry attempt.</p>
     */
    inline void SetPerRetryTimeout(Duration&& value) { m_perRetryTimeoutHasBeenSet = true; m_perRetryTimeout = std::move(value); }

    /**
     * <p>The timeout for each retry attempt.</p>
     */
    inline GrpcRetryPolicy& WithPerRetryTimeout(const Duration& value) { SetPerRetryTimeout(value); return *this;}

    /**
     * <p>The timeout for each retry attempt.</p>
     */
    inline GrpcRetryPolicy& WithPerRetryTimeout(Duration&& value) { SetPerRetryTimeout(std::move(value)); return *this;}


    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline const Aws::Vector<TcpRetryPolicyEvent>& GetTcpRetryEvents() const{ return m_tcpRetryEvents; }

    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline bool TcpRetryEventsHasBeenSet() const { return m_tcpRetryEventsHasBeenSet; }

    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline void SetTcpRetryEvents(const Aws::Vector<TcpRetryPolicyEvent>& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents = value; }

    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline void SetTcpRetryEvents(Aws::Vector<TcpRetryPolicyEvent>&& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents = std::move(value); }

    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline GrpcRetryPolicy& WithTcpRetryEvents(const Aws::Vector<TcpRetryPolicyEvent>& value) { SetTcpRetryEvents(value); return *this;}

    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline GrpcRetryPolicy& WithTcpRetryEvents(Aws::Vector<TcpRetryPolicyEvent>&& value) { SetTcpRetryEvents(std::move(value)); return *this;}

    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline GrpcRetryPolicy& AddTcpRetryEvents(const TcpRetryPolicyEvent& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents.push_back(value); return *this; }

    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline GrpcRetryPolicy& AddTcpRetryEvents(TcpRetryPolicyEvent&& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GrpcRetryPolicyEvent> m_grpcRetryEvents;
    bool m_grpcRetryEventsHasBeenSet = false;

    Aws::Vector<Aws::String> m_httpRetryEvents;
    bool m_httpRetryEventsHasBeenSet = false;

    long long m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;

    Duration m_perRetryTimeout;
    bool m_perRetryTimeoutHasBeenSet = false;

    Aws::Vector<TcpRetryPolicyEvent> m_tcpRetryEvents;
    bool m_tcpRetryEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
