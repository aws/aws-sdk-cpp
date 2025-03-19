/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/Duration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpRetryPolicy">AWS
   * API Reference</a></p>
   */
  class HttpRetryPolicy
  {
  public:
    AWS_APPMESH_API HttpRetryPolicy() = default;
    AWS_APPMESH_API HttpRetryPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpRetryPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify at least one of the following values.</p> <ul> <li> <p>
     * <b>server-error</b> – HTTP status codes 500, 501, 502, 503, 504, 505, 506, 507,
     * 508, 510, and 511</p> </li> <li> <p> <b>gateway-error</b> – HTTP status codes
     * 502, 503, and 504</p> </li> <li> <p> <b>client-error</b> – HTTP status code
     * 409</p> </li> <li> <p> <b>stream-error</b> – Retry on refused stream</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetHttpRetryEvents() const { return m_httpRetryEvents; }
    inline bool HttpRetryEventsHasBeenSet() const { return m_httpRetryEventsHasBeenSet; }
    template<typename HttpRetryEventsT = Aws::Vector<Aws::String>>
    void SetHttpRetryEvents(HttpRetryEventsT&& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents = std::forward<HttpRetryEventsT>(value); }
    template<typename HttpRetryEventsT = Aws::Vector<Aws::String>>
    HttpRetryPolicy& WithHttpRetryEvents(HttpRetryEventsT&& value) { SetHttpRetryEvents(std::forward<HttpRetryEventsT>(value)); return *this;}
    template<typename HttpRetryEventsT = Aws::String>
    HttpRetryPolicy& AddHttpRetryEvents(HttpRetryEventsT&& value) { m_httpRetryEventsHasBeenSet = true; m_httpRetryEvents.emplace_back(std::forward<HttpRetryEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of retry attempts.</p>
     */
    inline long long GetMaxRetries() const { return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(long long value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline HttpRetryPolicy& WithMaxRetries(long long value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for each retry attempt.</p>
     */
    inline const Duration& GetPerRetryTimeout() const { return m_perRetryTimeout; }
    inline bool PerRetryTimeoutHasBeenSet() const { return m_perRetryTimeoutHasBeenSet; }
    template<typename PerRetryTimeoutT = Duration>
    void SetPerRetryTimeout(PerRetryTimeoutT&& value) { m_perRetryTimeoutHasBeenSet = true; m_perRetryTimeout = std::forward<PerRetryTimeoutT>(value); }
    template<typename PerRetryTimeoutT = Duration>
    HttpRetryPolicy& WithPerRetryTimeout(PerRetryTimeoutT&& value) { SetPerRetryTimeout(std::forward<PerRetryTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a valid value. The event occurs before any processing of a request
     * has started and is encountered when the upstream is temporarily or permanently
     * unavailable.</p>
     */
    inline const Aws::Vector<TcpRetryPolicyEvent>& GetTcpRetryEvents() const { return m_tcpRetryEvents; }
    inline bool TcpRetryEventsHasBeenSet() const { return m_tcpRetryEventsHasBeenSet; }
    template<typename TcpRetryEventsT = Aws::Vector<TcpRetryPolicyEvent>>
    void SetTcpRetryEvents(TcpRetryEventsT&& value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents = std::forward<TcpRetryEventsT>(value); }
    template<typename TcpRetryEventsT = Aws::Vector<TcpRetryPolicyEvent>>
    HttpRetryPolicy& WithTcpRetryEvents(TcpRetryEventsT&& value) { SetTcpRetryEvents(std::forward<TcpRetryEventsT>(value)); return *this;}
    inline HttpRetryPolicy& AddTcpRetryEvents(TcpRetryPolicyEvent value) { m_tcpRetryEventsHasBeenSet = true; m_tcpRetryEvents.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_httpRetryEvents;
    bool m_httpRetryEventsHasBeenSet = false;

    long long m_maxRetries{0};
    bool m_maxRetriesHasBeenSet = false;

    Duration m_perRetryTimeout;
    bool m_perRetryTimeoutHasBeenSet = false;

    Aws::Vector<TcpRetryPolicyEvent> m_tcpRetryEvents;
    bool m_tcpRetryEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
