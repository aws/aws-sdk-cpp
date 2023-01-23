/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/QuickConnectSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListQueueQuickConnectsResult
  {
  public:
    AWS_CONNECT_API ListQueueQuickConnectsResult();
    AWS_CONNECT_API ListQueueQuickConnectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListQueueQuickConnectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListQueueQuickConnectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListQueueQuickConnectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListQueueQuickConnectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the quick connects.</p>
     */
    inline const Aws::Vector<QuickConnectSummary>& GetQuickConnectSummaryList() const{ return m_quickConnectSummaryList; }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline void SetQuickConnectSummaryList(const Aws::Vector<QuickConnectSummary>& value) { m_quickConnectSummaryList = value; }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline void SetQuickConnectSummaryList(Aws::Vector<QuickConnectSummary>&& value) { m_quickConnectSummaryList = std::move(value); }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline ListQueueQuickConnectsResult& WithQuickConnectSummaryList(const Aws::Vector<QuickConnectSummary>& value) { SetQuickConnectSummaryList(value); return *this;}

    /**
     * <p>Information about the quick connects.</p>
     */
    inline ListQueueQuickConnectsResult& WithQuickConnectSummaryList(Aws::Vector<QuickConnectSummary>&& value) { SetQuickConnectSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the quick connects.</p>
     */
    inline ListQueueQuickConnectsResult& AddQuickConnectSummaryList(const QuickConnectSummary& value) { m_quickConnectSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the quick connects.</p>
     */
    inline ListQueueQuickConnectsResult& AddQuickConnectSummaryList(QuickConnectSummary&& value) { m_quickConnectSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<QuickConnectSummary> m_quickConnectSummaryList;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
