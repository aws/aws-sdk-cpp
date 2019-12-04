/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLCandidate.h>
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
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API ListCandidatesForAutoMLJobResult
  {
  public:
    ListCandidatesForAutoMLJobResult();
    ListCandidatesForAutoMLJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCandidatesForAutoMLJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summaries about the Candidates.</p>
     */
    inline const Aws::Vector<AutoMLCandidate>& GetCandidates() const{ return m_candidates; }

    /**
     * <p>Summaries about the Candidates.</p>
     */
    inline void SetCandidates(const Aws::Vector<AutoMLCandidate>& value) { m_candidates = value; }

    /**
     * <p>Summaries about the Candidates.</p>
     */
    inline void SetCandidates(Aws::Vector<AutoMLCandidate>&& value) { m_candidates = std::move(value); }

    /**
     * <p>Summaries about the Candidates.</p>
     */
    inline ListCandidatesForAutoMLJobResult& WithCandidates(const Aws::Vector<AutoMLCandidate>& value) { SetCandidates(value); return *this;}

    /**
     * <p>Summaries about the Candidates.</p>
     */
    inline ListCandidatesForAutoMLJobResult& WithCandidates(Aws::Vector<AutoMLCandidate>&& value) { SetCandidates(std::move(value)); return *this;}

    /**
     * <p>Summaries about the Candidates.</p>
     */
    inline ListCandidatesForAutoMLJobResult& AddCandidates(const AutoMLCandidate& value) { m_candidates.push_back(value); return *this; }

    /**
     * <p>Summaries about the Candidates.</p>
     */
    inline ListCandidatesForAutoMLJobResult& AddCandidates(AutoMLCandidate&& value) { m_candidates.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListCandidatesForAutoMLJobResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListCandidatesForAutoMLJobResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListCandidatesForAutoMLJobResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AutoMLCandidate> m_candidates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
