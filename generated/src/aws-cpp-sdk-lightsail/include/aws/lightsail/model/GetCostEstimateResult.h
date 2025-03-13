/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceBudgetEstimate.h>
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
namespace Lightsail
{
namespace Model
{
  class GetCostEstimateResult
  {
  public:
    AWS_LIGHTSAIL_API GetCostEstimateResult() = default;
    AWS_LIGHTSAIL_API GetCostEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetCostEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the estimate's forecasted cost or usage.</p>
     */
    inline const Aws::Vector<ResourceBudgetEstimate>& GetResourcesBudgetEstimate() const { return m_resourcesBudgetEstimate; }
    template<typename ResourcesBudgetEstimateT = Aws::Vector<ResourceBudgetEstimate>>
    void SetResourcesBudgetEstimate(ResourcesBudgetEstimateT&& value) { m_resourcesBudgetEstimateHasBeenSet = true; m_resourcesBudgetEstimate = std::forward<ResourcesBudgetEstimateT>(value); }
    template<typename ResourcesBudgetEstimateT = Aws::Vector<ResourceBudgetEstimate>>
    GetCostEstimateResult& WithResourcesBudgetEstimate(ResourcesBudgetEstimateT&& value) { SetResourcesBudgetEstimate(std::forward<ResourcesBudgetEstimateT>(value)); return *this;}
    template<typename ResourcesBudgetEstimateT = ResourceBudgetEstimate>
    GetCostEstimateResult& AddResourcesBudgetEstimate(ResourcesBudgetEstimateT&& value) { m_resourcesBudgetEstimateHasBeenSet = true; m_resourcesBudgetEstimate.emplace_back(std::forward<ResourcesBudgetEstimateT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCostEstimateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceBudgetEstimate> m_resourcesBudgetEstimate;
    bool m_resourcesBudgetEstimateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
