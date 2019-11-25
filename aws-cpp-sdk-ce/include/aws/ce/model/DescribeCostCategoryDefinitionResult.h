/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COSTEXPLORER_API DescribeCostCategoryDefinitionResult
  {
  public:
    DescribeCostCategoryDefinitionResult();
    DescribeCostCategoryDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCostCategoryDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
