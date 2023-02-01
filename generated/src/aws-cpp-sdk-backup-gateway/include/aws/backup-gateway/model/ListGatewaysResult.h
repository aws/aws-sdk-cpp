/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/Gateway.h>
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
namespace BackupGateway
{
namespace Model
{
  class ListGatewaysResult
  {
  public:
    AWS_BACKUPGATEWAY_API ListGatewaysResult();
    AWS_BACKUPGATEWAY_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of your gateways.</p>
     */
    inline const Aws::Vector<Gateway>& GetGateways() const{ return m_gateways; }

    /**
     * <p>A list of your gateways.</p>
     */
    inline void SetGateways(const Aws::Vector<Gateway>& value) { m_gateways = value; }

    /**
     * <p>A list of your gateways.</p>
     */
    inline void SetGateways(Aws::Vector<Gateway>&& value) { m_gateways = std::move(value); }

    /**
     * <p>A list of your gateways.</p>
     */
    inline ListGatewaysResult& WithGateways(const Aws::Vector<Gateway>& value) { SetGateways(value); return *this;}

    /**
     * <p>A list of your gateways.</p>
     */
    inline ListGatewaysResult& WithGateways(Aws::Vector<Gateway>&& value) { SetGateways(std::move(value)); return *this;}

    /**
     * <p>A list of your gateways.</p>
     */
    inline ListGatewaysResult& AddGateways(const Gateway& value) { m_gateways.push_back(value); return *this; }

    /**
     * <p>A list of your gateways.</p>
     */
    inline ListGatewaysResult& AddGateways(Gateway&& value) { m_gateways.push_back(std::move(value)); return *this; }


    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>maxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Gateway> m_gateways;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
