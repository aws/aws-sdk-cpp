/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/KnowledgeBaseSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class ListKnowledgeBasesResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListKnowledgeBasesResult();
    AWS_CONNECTWISDOMSERVICE_API ListKnowledgeBasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListKnowledgeBasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline const Aws::Vector<KnowledgeBaseSummary>& GetKnowledgeBaseSummaries() const{ return m_knowledgeBaseSummaries; }

    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline void SetKnowledgeBaseSummaries(const Aws::Vector<KnowledgeBaseSummary>& value) { m_knowledgeBaseSummaries = value; }

    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline void SetKnowledgeBaseSummaries(Aws::Vector<KnowledgeBaseSummary>&& value) { m_knowledgeBaseSummaries = std::move(value); }

    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline ListKnowledgeBasesResult& WithKnowledgeBaseSummaries(const Aws::Vector<KnowledgeBaseSummary>& value) { SetKnowledgeBaseSummaries(value); return *this;}

    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline ListKnowledgeBasesResult& WithKnowledgeBaseSummaries(Aws::Vector<KnowledgeBaseSummary>&& value) { SetKnowledgeBaseSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline ListKnowledgeBasesResult& AddKnowledgeBaseSummaries(const KnowledgeBaseSummary& value) { m_knowledgeBaseSummaries.push_back(value); return *this; }

    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline ListKnowledgeBasesResult& AddKnowledgeBaseSummaries(KnowledgeBaseSummary&& value) { m_knowledgeBaseSummaries.push_back(std::move(value)); return *this; }


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
    inline ListKnowledgeBasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListKnowledgeBasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListKnowledgeBasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<KnowledgeBaseSummary> m_knowledgeBaseSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
