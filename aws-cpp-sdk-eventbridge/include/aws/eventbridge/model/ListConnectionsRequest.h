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
  class AWS_EVENTBRIDGE_API ListConnectionsRequest : public EventBridgeRequest
  {
  public:
    ListConnectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnections"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }

    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }

    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline ListConnectionsRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline ListConnectionsRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}

    /**
     * <p>A name prefix to filter results returned. Only connections with a name that
     * starts with the prefix are returned.</p>
     */
    inline ListConnectionsRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}


    /**
     * <p>The state of the connection.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The state of the connection.</p>
     */
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }

    /**
     * <p>The state of the connection.</p>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>The state of the connection.</p>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    /**
     * <p>The state of the connection.</p>
     */
    inline ListConnectionsRequest& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The state of the connection.</p>
     */
    inline ListConnectionsRequest& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListConnectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListConnectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListConnectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of connections to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of connections to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of connections to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of connections to return.</p>
     */
    inline ListConnectionsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet;

    ConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
