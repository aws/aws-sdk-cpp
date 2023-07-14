﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/HIT.h>
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
namespace MTurk
{
namespace Model
{
  class AWS_MTURK_API ListReviewableHITsResult
  {
  public:
    ListReviewableHITsResult();
    ListReviewableHITsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListReviewableHITsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListReviewableHITsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListReviewableHITsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListReviewableHITsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The number of HITs on this page in the filtered results list, equivalent to
     * the number of HITs being returned by this call. </p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p> The number of HITs on this page in the filtered results list, equivalent to
     * the number of HITs being returned by this call. </p>
     */
    inline void SetNumResults(int value) { m_numResults = value; }

    /**
     * <p> The number of HITs on this page in the filtered results list, equivalent to
     * the number of HITs being returned by this call. </p>
     */
    inline ListReviewableHITsResult& WithNumResults(int value) { SetNumResults(value); return *this;}


    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline const Aws::Vector<HIT>& GetHITs() const{ return m_hITs; }

    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline void SetHITs(const Aws::Vector<HIT>& value) { m_hITs = value; }

    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline void SetHITs(Aws::Vector<HIT>&& value) { m_hITs = std::move(value); }

    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline ListReviewableHITsResult& WithHITs(const Aws::Vector<HIT>& value) { SetHITs(value); return *this;}

    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline ListReviewableHITsResult& WithHITs(Aws::Vector<HIT>&& value) { SetHITs(std::move(value)); return *this;}

    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline ListReviewableHITsResult& AddHITs(const HIT& value) { m_hITs.push_back(value); return *this; }

    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline ListReviewableHITsResult& AddHITs(HIT&& value) { m_hITs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_numResults;

    Aws::Vector<HIT> m_hITs;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
