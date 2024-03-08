/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline ListQueueQuickConnectsResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline ListQueueQuickConnectsResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegion = value; }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline ListQueueQuickConnectsResult& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline ListQueueQuickConnectsResult& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline ListQueueQuickConnectsResult& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListQueueQuickConnectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListQueueQuickConnectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListQueueQuickConnectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<QuickConnectSummary> m_quickConnectSummaryList;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_lastModifiedRegion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
