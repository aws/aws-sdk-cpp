/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedConnector.h>
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
namespace Transfer
{
namespace Model
{
  class ListConnectorsResult
  {
  public:
    AWS_TRANSFER_API ListConnectorsResult();
    AWS_TRANSFER_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline ListConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline ListConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListConnectors</code> again
     * and receive additional results, if there are any.</p>
     */
    inline ListConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline const Aws::Vector<ListedConnector>& GetConnectors() const{ return m_connectors; }

    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline void SetConnectors(const Aws::Vector<ListedConnector>& value) { m_connectors = value; }

    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline void SetConnectors(Aws::Vector<ListedConnector>&& value) { m_connectors = std::move(value); }

    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline ListConnectorsResult& WithConnectors(const Aws::Vector<ListedConnector>& value) { SetConnectors(value); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline ListConnectorsResult& WithConnectors(Aws::Vector<ListedConnector>&& value) { SetConnectors(std::move(value)); return *this;}

    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline ListConnectorsResult& AddConnectors(const ListedConnector& value) { m_connectors.push_back(value); return *this; }

    /**
     * <p>Returns an array, where each item contains the details of a connector.</p>
     */
    inline ListConnectorsResult& AddConnectors(ListedConnector&& value) { m_connectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListedConnector> m_connectors;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
