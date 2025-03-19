/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/LandingZoneOperationSummary.h>
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
namespace ControlTower
{
namespace Model
{
  class ListLandingZoneOperationsResult
  {
  public:
    AWS_CONTROLTOWER_API ListLandingZoneOperationsResult() = default;
    AWS_CONTROLTOWER_API ListLandingZoneOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListLandingZoneOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists landing zone operations.</p>
     */
    inline const Aws::Vector<LandingZoneOperationSummary>& GetLandingZoneOperations() const { return m_landingZoneOperations; }
    template<typename LandingZoneOperationsT = Aws::Vector<LandingZoneOperationSummary>>
    void SetLandingZoneOperations(LandingZoneOperationsT&& value) { m_landingZoneOperationsHasBeenSet = true; m_landingZoneOperations = std::forward<LandingZoneOperationsT>(value); }
    template<typename LandingZoneOperationsT = Aws::Vector<LandingZoneOperationSummary>>
    ListLandingZoneOperationsResult& WithLandingZoneOperations(LandingZoneOperationsT&& value) { SetLandingZoneOperations(std::forward<LandingZoneOperationsT>(value)); return *this;}
    template<typename LandingZoneOperationsT = LandingZoneOperationSummary>
    ListLandingZoneOperationsResult& AddLandingZoneOperations(LandingZoneOperationsT&& value) { m_landingZoneOperationsHasBeenSet = true; m_landingZoneOperations.emplace_back(std::forward<LandingZoneOperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLandingZoneOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLandingZoneOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LandingZoneOperationSummary> m_landingZoneOperations;
    bool m_landingZoneOperationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
