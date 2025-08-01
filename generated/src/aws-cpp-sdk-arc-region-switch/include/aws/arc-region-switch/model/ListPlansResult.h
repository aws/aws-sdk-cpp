/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/AbbreviatedPlan.h>
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
namespace ARCRegionswitch
{
namespace Model
{
  class ListPlansResult
  {
  public:
    AWS_ARCREGIONSWITCH_API ListPlansResult() = default;
    AWS_ARCREGIONSWITCH_API ListPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARCREGIONSWITCH_API ListPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The plans that were requested.</p>
     */
    inline const Aws::Vector<AbbreviatedPlan>& GetPlans() const { return m_plans; }
    template<typename PlansT = Aws::Vector<AbbreviatedPlan>>
    void SetPlans(PlansT&& value) { m_plansHasBeenSet = true; m_plans = std::forward<PlansT>(value); }
    template<typename PlansT = Aws::Vector<AbbreviatedPlan>>
    ListPlansResult& WithPlans(PlansT&& value) { SetPlans(std::forward<PlansT>(value)); return *this;}
    template<typename PlansT = AbbreviatedPlan>
    ListPlansResult& AddPlans(PlansT&& value) { m_plansHasBeenSet = true; m_plans.emplace_back(std::forward<PlansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>nextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>nextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AbbreviatedPlan> m_plans;
    bool m_plansHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
