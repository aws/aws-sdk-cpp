/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/AssistantAssociationSummary.h>
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
  class ListAssistantAssociationsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListAssistantAssociationsResult();
    AWS_CONNECTWISDOMSERVICE_API ListAssistantAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListAssistantAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline const Aws::Vector<AssistantAssociationSummary>& GetAssistantAssociationSummaries() const{ return m_assistantAssociationSummaries; }

    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline void SetAssistantAssociationSummaries(const Aws::Vector<AssistantAssociationSummary>& value) { m_assistantAssociationSummaries = value; }

    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline void SetAssistantAssociationSummaries(Aws::Vector<AssistantAssociationSummary>&& value) { m_assistantAssociationSummaries = std::move(value); }

    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline ListAssistantAssociationsResult& WithAssistantAssociationSummaries(const Aws::Vector<AssistantAssociationSummary>& value) { SetAssistantAssociationSummaries(value); return *this;}

    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline ListAssistantAssociationsResult& WithAssistantAssociationSummaries(Aws::Vector<AssistantAssociationSummary>&& value) { SetAssistantAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline ListAssistantAssociationsResult& AddAssistantAssociationSummaries(const AssistantAssociationSummary& value) { m_assistantAssociationSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline ListAssistantAssociationsResult& AddAssistantAssociationSummaries(AssistantAssociationSummary&& value) { m_assistantAssociationSummaries.push_back(std::move(value)); return *this; }


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
    inline ListAssistantAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAssistantAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAssistantAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssistantAssociationSummary> m_assistantAssociationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
