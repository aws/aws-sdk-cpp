/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/LicenseRecommendation.h>
#include <aws/compute-optimizer/model/GetRecommendationError.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class GetLicenseRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetLicenseRecommendationsResult();
    AWS_COMPUTEOPTIMIZER_API GetLicenseRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetLicenseRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline GetLicenseRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline GetLicenseRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline GetLicenseRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline const Aws::Vector<LicenseRecommendation>& GetLicenseRecommendations() const{ return m_licenseRecommendations; }

    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline void SetLicenseRecommendations(const Aws::Vector<LicenseRecommendation>& value) { m_licenseRecommendations = value; }

    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline void SetLicenseRecommendations(Aws::Vector<LicenseRecommendation>&& value) { m_licenseRecommendations = std::move(value); }

    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline GetLicenseRecommendationsResult& WithLicenseRecommendations(const Aws::Vector<LicenseRecommendation>& value) { SetLicenseRecommendations(value); return *this;}

    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline GetLicenseRecommendationsResult& WithLicenseRecommendations(Aws::Vector<LicenseRecommendation>&& value) { SetLicenseRecommendations(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline GetLicenseRecommendationsResult& AddLicenseRecommendations(const LicenseRecommendation& value) { m_licenseRecommendations.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline GetLicenseRecommendationsResult& AddLicenseRecommendations(LicenseRecommendation&& value) { m_licenseRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const{ return m_errors; }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline void SetErrors(const Aws::Vector<GetRecommendationError>& value) { m_errors = value; }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline void SetErrors(Aws::Vector<GetRecommendationError>&& value) { m_errors = std::move(value); }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetLicenseRecommendationsResult& WithErrors(const Aws::Vector<GetRecommendationError>& value) { SetErrors(value); return *this;}

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetLicenseRecommendationsResult& WithErrors(Aws::Vector<GetRecommendationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetLicenseRecommendationsResult& AddErrors(const GetRecommendationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline GetLicenseRecommendationsResult& AddErrors(GetRecommendationError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLicenseRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLicenseRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLicenseRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<LicenseRecommendation> m_licenseRecommendations;

    Aws::Vector<GetRecommendationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
