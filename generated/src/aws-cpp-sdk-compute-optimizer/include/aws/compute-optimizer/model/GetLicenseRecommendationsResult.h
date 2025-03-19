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
    AWS_COMPUTEOPTIMIZER_API GetLicenseRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetLicenseRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetLicenseRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token to use to advance to the next page of license recommendations.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLicenseRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe license recommendations. </p>
     */
    inline const Aws::Vector<LicenseRecommendation>& GetLicenseRecommendations() const { return m_licenseRecommendations; }
    template<typename LicenseRecommendationsT = Aws::Vector<LicenseRecommendation>>
    void SetLicenseRecommendations(LicenseRecommendationsT&& value) { m_licenseRecommendationsHasBeenSet = true; m_licenseRecommendations = std::forward<LicenseRecommendationsT>(value); }
    template<typename LicenseRecommendationsT = Aws::Vector<LicenseRecommendation>>
    GetLicenseRecommendationsResult& WithLicenseRecommendations(LicenseRecommendationsT&& value) { SetLicenseRecommendations(std::forward<LicenseRecommendationsT>(value)); return *this;}
    template<typename LicenseRecommendationsT = LicenseRecommendation>
    GetLicenseRecommendationsResult& AddLicenseRecommendations(LicenseRecommendationsT&& value) { m_licenseRecommendationsHasBeenSet = true; m_licenseRecommendations.emplace_back(std::forward<LicenseRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe errors of the request. </p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    GetLicenseRecommendationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = GetRecommendationError>
    GetLicenseRecommendationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLicenseRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LicenseRecommendation> m_licenseRecommendations;
    bool m_licenseRecommendationsHasBeenSet = false;

    Aws::Vector<GetRecommendationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
