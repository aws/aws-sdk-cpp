/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/CostCategory.h>
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
  class DescribeCostCategoryDefinitionResult
  {
  public:
    AWS_COSTEXPLORER_API DescribeCostCategoryDefinitionResult();
    AWS_COSTEXPLORER_API DescribeCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API DescribeCostCategoryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const CostCategory& GetCostCategory() const{ return m_costCategory; }

    
    inline void SetCostCategory(const CostCategory& value) { m_costCategory = value; }

    
    inline void SetCostCategory(CostCategory&& value) { m_costCategory = std::move(value); }

    
    inline DescribeCostCategoryDefinitionResult& WithCostCategory(const CostCategory& value) { SetCostCategory(value); return *this;}

    
    inline DescribeCostCategoryDefinitionResult& WithCostCategory(CostCategory&& value) { SetCostCategory(std::move(value)); return *this;}

  private:

    CostCategory m_costCategory;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
