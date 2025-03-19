/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/VolumeRecommendation.h>
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
  class GetEBSVolumeRecommendationsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEBSVolumeRecommendationsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetEBSVolumeRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEBSVolumeRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to advance to the next page of volume recommendations.</p>
     * <p>This value is null when there are no more pages of volume recommendations to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEBSVolumeRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe volume recommendations.</p>
     */
    inline const Aws::Vector<VolumeRecommendation>& GetVolumeRecommendations() const { return m_volumeRecommendations; }
    template<typename VolumeRecommendationsT = Aws::Vector<VolumeRecommendation>>
    void SetVolumeRecommendations(VolumeRecommendationsT&& value) { m_volumeRecommendationsHasBeenSet = true; m_volumeRecommendations = std::forward<VolumeRecommendationsT>(value); }
    template<typename VolumeRecommendationsT = Aws::Vector<VolumeRecommendation>>
    GetEBSVolumeRecommendationsResult& WithVolumeRecommendations(VolumeRecommendationsT&& value) { SetVolumeRecommendations(std::forward<VolumeRecommendationsT>(value)); return *this;}
    template<typename VolumeRecommendationsT = VolumeRecommendation>
    GetEBSVolumeRecommendationsResult& AddVolumeRecommendations(VolumeRecommendationsT&& value) { m_volumeRecommendationsHasBeenSet = true; m_volumeRecommendations.emplace_back(std::forward<VolumeRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe errors of the request.</p> <p>For example,
     * an error is returned if you request recommendations for an unsupported
     * volume.</p>
     */
    inline const Aws::Vector<GetRecommendationError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<GetRecommendationError>>
    GetEBSVolumeRecommendationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = GetRecommendationError>
    GetEBSVolumeRecommendationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEBSVolumeRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VolumeRecommendation> m_volumeRecommendations;
    bool m_volumeRecommendationsHasBeenSet = false;

    Aws::Vector<GetRecommendationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
