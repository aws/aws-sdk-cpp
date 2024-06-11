﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/SavingsPlansPurchaseRecommendationMetadata.h>
#include <aws/ce/model/SavingsPlansPurchaseRecommendation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetSavingsPlansPurchaseRecommendationResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationResult();
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansPurchaseRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information that regards this specific recommendation set.</p>
     */
    inline const SavingsPlansPurchaseRecommendationMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const SavingsPlansPurchaseRecommendationMetadata& value) { m_metadata = value; }
    inline void SetMetadata(SavingsPlansPurchaseRecommendationMetadata&& value) { m_metadata = std::move(value); }
    inline GetSavingsPlansPurchaseRecommendationResult& WithMetadata(const SavingsPlansPurchaseRecommendationMetadata& value) { SetMetadata(value); return *this;}
    inline GetSavingsPlansPurchaseRecommendationResult& WithMetadata(SavingsPlansPurchaseRecommendationMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains your request parameters, Savings Plan Recommendations Summary, and
     * Details.</p>
     */
    inline const SavingsPlansPurchaseRecommendation& GetSavingsPlansPurchaseRecommendation() const{ return m_savingsPlansPurchaseRecommendation; }
    inline void SetSavingsPlansPurchaseRecommendation(const SavingsPlansPurchaseRecommendation& value) { m_savingsPlansPurchaseRecommendation = value; }
    inline void SetSavingsPlansPurchaseRecommendation(SavingsPlansPurchaseRecommendation&& value) { m_savingsPlansPurchaseRecommendation = std::move(value); }
    inline GetSavingsPlansPurchaseRecommendationResult& WithSavingsPlansPurchaseRecommendation(const SavingsPlansPurchaseRecommendation& value) { SetSavingsPlansPurchaseRecommendation(value); return *this;}
    inline GetSavingsPlansPurchaseRecommendationResult& WithSavingsPlansPurchaseRecommendation(SavingsPlansPurchaseRecommendation&& value) { SetSavingsPlansPurchaseRecommendation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetSavingsPlansPurchaseRecommendationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetSavingsPlansPurchaseRecommendationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetSavingsPlansPurchaseRecommendationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSavingsPlansPurchaseRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSavingsPlansPurchaseRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSavingsPlansPurchaseRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SavingsPlansPurchaseRecommendationMetadata m_metadata;

    SavingsPlansPurchaseRecommendation m_savingsPlansPurchaseRecommendation;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
