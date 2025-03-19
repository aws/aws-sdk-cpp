/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/RelatedObservations.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeProblemObservationsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsResult() = default;
    AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeProblemObservationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Observations related to the problem.</p>
     */
    inline const RelatedObservations& GetRelatedObservations() const { return m_relatedObservations; }
    template<typename RelatedObservationsT = RelatedObservations>
    void SetRelatedObservations(RelatedObservationsT&& value) { m_relatedObservationsHasBeenSet = true; m_relatedObservations = std::forward<RelatedObservationsT>(value); }
    template<typename RelatedObservationsT = RelatedObservations>
    DescribeProblemObservationsResult& WithRelatedObservations(RelatedObservationsT&& value) { SetRelatedObservations(std::forward<RelatedObservationsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProblemObservationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RelatedObservations m_relatedObservations;
    bool m_relatedObservationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
