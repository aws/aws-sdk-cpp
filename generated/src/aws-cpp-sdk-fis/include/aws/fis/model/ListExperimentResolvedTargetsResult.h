/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ResolvedTarget.h>
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
namespace FIS
{
namespace Model
{
  class ListExperimentResolvedTargetsResult
  {
  public:
    AWS_FIS_API ListExperimentResolvedTargetsResult();
    AWS_FIS_API ListExperimentResolvedTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListExperimentResolvedTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resolved targets.</p>
     */
    inline const Aws::Vector<ResolvedTarget>& GetResolvedTargets() const{ return m_resolvedTargets; }

    /**
     * <p>The resolved targets.</p>
     */
    inline void SetResolvedTargets(const Aws::Vector<ResolvedTarget>& value) { m_resolvedTargets = value; }

    /**
     * <p>The resolved targets.</p>
     */
    inline void SetResolvedTargets(Aws::Vector<ResolvedTarget>&& value) { m_resolvedTargets = std::move(value); }

    /**
     * <p>The resolved targets.</p>
     */
    inline ListExperimentResolvedTargetsResult& WithResolvedTargets(const Aws::Vector<ResolvedTarget>& value) { SetResolvedTargets(value); return *this;}

    /**
     * <p>The resolved targets.</p>
     */
    inline ListExperimentResolvedTargetsResult& WithResolvedTargets(Aws::Vector<ResolvedTarget>&& value) { SetResolvedTargets(std::move(value)); return *this;}

    /**
     * <p>The resolved targets.</p>
     */
    inline ListExperimentResolvedTargetsResult& AddResolvedTargets(const ResolvedTarget& value) { m_resolvedTargets.push_back(value); return *this; }

    /**
     * <p>The resolved targets.</p>
     */
    inline ListExperimentResolvedTargetsResult& AddResolvedTargets(ResolvedTarget&& value) { m_resolvedTargets.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListExperimentResolvedTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListExperimentResolvedTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListExperimentResolvedTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExperimentResolvedTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExperimentResolvedTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExperimentResolvedTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResolvedTarget> m_resolvedTargets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
