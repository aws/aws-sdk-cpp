/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Attributes of an Ethereum node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeEthereumAttributes">AWS
   * API Reference</a></p>
   */
  class NodeEthereumAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NodeEthereumAttributes();
    AWS_MANAGEDBLOCKCHAIN_API NodeEthereumAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NodeEthereumAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline const Aws::String& GetHttpEndpoint() const{ return m_httpEndpoint; }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline bool HttpEndpointHasBeenSet() const { return m_httpEndpointHasBeenSet; }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline void SetHttpEndpoint(const Aws::String& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = value; }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline void SetHttpEndpoint(Aws::String&& value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint = std::move(value); }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline void SetHttpEndpoint(const char* value) { m_httpEndpointHasBeenSet = true; m_httpEndpoint.assign(value); }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline NodeEthereumAttributes& WithHttpEndpoint(const Aws::String& value) { SetHttpEndpoint(value); return *this;}

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline NodeEthereumAttributes& WithHttpEndpoint(Aws::String&& value) { SetHttpEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum API methods
     * over HTTP connections from a client. Use this endpoint in client code for smart
     * contracts when using an HTTP connection. Connections to this endpoint are
     * authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline NodeEthereumAttributes& WithHttpEndpoint(const char* value) { SetHttpEndpoint(value); return *this;}


    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline const Aws::String& GetWebSocketEndpoint() const{ return m_webSocketEndpoint; }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline bool WebSocketEndpointHasBeenSet() const { return m_webSocketEndpointHasBeenSet; }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline void SetWebSocketEndpoint(const Aws::String& value) { m_webSocketEndpointHasBeenSet = true; m_webSocketEndpoint = value; }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline void SetWebSocketEndpoint(Aws::String&& value) { m_webSocketEndpointHasBeenSet = true; m_webSocketEndpoint = std::move(value); }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline void SetWebSocketEndpoint(const char* value) { m_webSocketEndpointHasBeenSet = true; m_webSocketEndpoint.assign(value); }

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline NodeEthereumAttributes& WithWebSocketEndpoint(const Aws::String& value) { SetWebSocketEndpoint(value); return *this;}

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline NodeEthereumAttributes& WithWebSocketEndpoint(Aws::String&& value) { SetWebSocketEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint on which the Ethereum node listens to run Ethereum JSON-RPC
     * methods over WebSocket connections from a client. Use this endpoint in client
     * code for smart contracts when using a WebSocket connection. Connections to this
     * endpoint are authenticated using <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4</a>.</p>
     */
    inline NodeEthereumAttributes& WithWebSocketEndpoint(const char* value) { SetWebSocketEndpoint(value); return *this;}

  private:

    Aws::String m_httpEndpoint;
    bool m_httpEndpointHasBeenSet = false;

    Aws::String m_webSocketEndpoint;
    bool m_webSocketEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
