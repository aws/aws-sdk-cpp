/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PromptSummary.h>
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
  class ListPromptsResult
  {
  public:
    AWS_CONNECT_API ListPromptsResult();
    AWS_CONNECT_API ListPromptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPromptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the prompts.</p>
     */
    inline const Aws::Vector<PromptSummary>& GetPromptSummaryList() const{ return m_promptSummaryList; }

    /**
     * <p>Information about the prompts.</p>
     */
    inline void SetPromptSummaryList(const Aws::Vector<PromptSummary>& value) { m_promptSummaryList = value; }

    /**
     * <p>Information about the prompts.</p>
     */
    inline void SetPromptSummaryList(Aws::Vector<PromptSummary>&& value) { m_promptSummaryList = std::move(value); }

    /**
     * <p>Information about the prompts.</p>
     */
    inline ListPromptsResult& WithPromptSummaryList(const Aws::Vector<PromptSummary>& value) { SetPromptSummaryList(value); return *this;}

    /**
     * <p>Information about the prompts.</p>
     */
    inline ListPromptsResult& WithPromptSummaryList(Aws::Vector<PromptSummary>&& value) { SetPromptSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the prompts.</p>
     */
    inline ListPromptsResult& AddPromptSummaryList(const PromptSummary& value) { m_promptSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the prompts.</p>
     */
    inline ListPromptsResult& AddPromptSummaryList(PromptSummary&& value) { m_promptSummaryList.push_back(std::move(value)); return *this; }


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
    inline ListPromptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPromptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPromptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PromptSummary> m_promptSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
