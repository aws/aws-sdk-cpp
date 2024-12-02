/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ConnectionState.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class ListConnectionsRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API ListConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnections"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }
    inline ListConnectionsRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}
    inline ListConnectionsRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}
    inline ListConnectionsRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connection.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(const ConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline void SetConnectionState(ConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }
    inline ListConnectionsRequest& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}
    inline ListConnectionsRequest& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call, which you can use to retrieve the next
     * set of results.</p> <p>The value of <code>nextToken</code> is a unique
     * pagination token for each page. To retrieve the next page of results, make the
     * call again using the returned token. Keep all other arguments unchanged.</p> <p>
     * Using an expired pagination token results in an <code>HTTP 400
     * InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListConnectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConnectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConnectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of connections to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListConnectionsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    ConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
