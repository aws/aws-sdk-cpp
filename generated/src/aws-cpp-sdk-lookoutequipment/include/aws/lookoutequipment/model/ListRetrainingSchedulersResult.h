/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/RetrainingSchedulerSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListRetrainingSchedulersResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersResult();
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListRetrainingSchedulersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline const Aws::Vector<RetrainingSchedulerSummary>& GetRetrainingSchedulerSummaries() const{ return m_retrainingSchedulerSummaries; }

    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline void SetRetrainingSchedulerSummaries(const Aws::Vector<RetrainingSchedulerSummary>& value) { m_retrainingSchedulerSummaries = value; }

    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline void SetRetrainingSchedulerSummaries(Aws::Vector<RetrainingSchedulerSummary>&& value) { m_retrainingSchedulerSummaries = std::move(value); }

    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline ListRetrainingSchedulersResult& WithRetrainingSchedulerSummaries(const Aws::Vector<RetrainingSchedulerSummary>& value) { SetRetrainingSchedulerSummaries(value); return *this;}

    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline ListRetrainingSchedulersResult& WithRetrainingSchedulerSummaries(Aws::Vector<RetrainingSchedulerSummary>&& value) { SetRetrainingSchedulerSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline ListRetrainingSchedulersResult& AddRetrainingSchedulerSummaries(const RetrainingSchedulerSummary& value) { m_retrainingSchedulerSummaries.push_back(value); return *this; }

    /**
     * <p>Provides information on the specified retraining scheduler, including the
     * model name, model ARN, status, and start date. </p>
     */
    inline ListRetrainingSchedulersResult& AddRetrainingSchedulerSummaries(RetrainingSchedulerSummary&& value) { m_retrainingSchedulerSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline ListRetrainingSchedulersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline ListRetrainingSchedulersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of results exceeds the maximum, this pagination token is
     * returned. Use this token in the request to show the next page of retraining
     * schedulers.</p>
     */
    inline ListRetrainingSchedulersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRetrainingSchedulersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRetrainingSchedulersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRetrainingSchedulersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RetrainingSchedulerSummary> m_retrainingSchedulerSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
