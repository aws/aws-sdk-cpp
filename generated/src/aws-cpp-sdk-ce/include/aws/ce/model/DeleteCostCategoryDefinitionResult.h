/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
  class DeleteCostCategoryDefinitionResult
  {
  public:
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult() = default;
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
    template<typename CostCategoryArnT = Aws::String>
    void SetCostCategoryArn(CostCategoryArnT&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::forward<CostCategoryArnT>(value); }
    template<typename CostCategoryArnT = Aws::String>
    DeleteCostCategoryDefinitionResult& WithCostCategoryArn(CostCategoryArnT&& value) { SetCostCategoryArn(std::forward<CostCategoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective end date of the Cost Category as a result of deleting it. No
     * costs after this date is categorized by the deleted Cost Category. </p>
     */
    inline const Aws::String& GetEffectiveEnd() const { return m_effectiveEnd; }
    template<typename EffectiveEndT = Aws::String>
    void SetEffectiveEnd(EffectiveEndT&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::forward<EffectiveEndT>(value); }
    template<typename EffectiveEndT = Aws::String>
    DeleteCostCategoryDefinitionResult& WithEffectiveEnd(EffectiveEndT&& value) { SetEffectiveEnd(std::forward<EffectiveEndT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteCostCategoryDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_effectiveEnd;
    bool m_effectiveEndHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
