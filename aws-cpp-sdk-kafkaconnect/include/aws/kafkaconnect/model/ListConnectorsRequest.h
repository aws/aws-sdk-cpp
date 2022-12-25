/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class ListConnectorsRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API ListConnectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnectors"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;

    AWS_KAFKACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline const Aws::String& GetConnectorNamePrefix() const{ return m_connectorNamePrefix; }

    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline bool ConnectorNamePrefixHasBeenSet() const { return m_connectorNamePrefixHasBeenSet; }

    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline void SetConnectorNamePrefix(const Aws::String& value) { m_connectorNamePrefixHasBeenSet = true; m_connectorNamePrefix = value; }

    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline void SetConnectorNamePrefix(Aws::String&& value) { m_connectorNamePrefixHasBeenSet = true; m_connectorNamePrefix = std::move(value); }

    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline void SetConnectorNamePrefix(const char* value) { m_connectorNamePrefixHasBeenSet = true; m_connectorNamePrefix.assign(value); }

    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline ListConnectorsRequest& WithConnectorNamePrefix(const Aws::String& value) { SetConnectorNamePrefix(value); return *this;}

    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline ListConnectorsRequest& WithConnectorNamePrefix(Aws::String&& value) { SetConnectorNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The name prefix that you want to use to search for and list connectors.</p>
     */
    inline ListConnectorsRequest& WithConnectorNamePrefix(const char* value) { SetConnectorNamePrefix(value); return *this;}


    /**
     * <p>The maximum number of connectors to list in one response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of connectors to list in one response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of connectors to list in one response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of connectors to list in one response.</p>
     */
    inline ListConnectorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline ListConnectorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline ListConnectorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of a ListConnectors operation is truncated, it will include a
     * NextToken. Send this NextToken in a subsequent request to continue listing from
     * where the previous operation left off.</p>
     */
    inline ListConnectorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_connectorNamePrefix;
    bool m_connectorNamePrefixHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
