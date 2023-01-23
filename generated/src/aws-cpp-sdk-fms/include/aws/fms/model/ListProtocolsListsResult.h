/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ProtocolsListDataSummary.h>
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
namespace FMS
{
namespace Model
{
  class ListProtocolsListsResult
  {
  public:
    AWS_FMS_API ListProtocolsListsResult();
    AWS_FMS_API ListProtocolsListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListProtocolsListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline const Aws::Vector<ProtocolsListDataSummary>& GetProtocolsLists() const{ return m_protocolsLists; }

    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline void SetProtocolsLists(const Aws::Vector<ProtocolsListDataSummary>& value) { m_protocolsLists = value; }

    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline void SetProtocolsLists(Aws::Vector<ProtocolsListDataSummary>&& value) { m_protocolsLists = std::move(value); }

    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline ListProtocolsListsResult& WithProtocolsLists(const Aws::Vector<ProtocolsListDataSummary>& value) { SetProtocolsLists(value); return *this;}

    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline ListProtocolsListsResult& WithProtocolsLists(Aws::Vector<ProtocolsListDataSummary>&& value) { SetProtocolsLists(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline ListProtocolsListsResult& AddProtocolsLists(const ProtocolsListDataSummary& value) { m_protocolsLists.push_back(value); return *this; }

    /**
     * <p>An array of <code>ProtocolsListDataSummary</code> objects.</p>
     */
    inline ListProtocolsListsResult& AddProtocolsLists(ProtocolsListDataSummary&& value) { m_protocolsLists.push_back(std::move(value)); return *this; }


    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline ListProtocolsListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline ListProtocolsListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify a value for <code>MaxResults</code> in your list request, and
     * you have more objects than the maximum, Firewall Manager returns this token in
     * the response. You can use this token in subsequent requests to retrieve the next
     * batch of objects.</p>
     */
    inline ListProtocolsListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProtocolsListDataSummary> m_protocolsLists;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
