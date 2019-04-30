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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningArtifact.h>
#include <aws/servicecatalog/model/BudgetDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribeProductResult
  {
  public:
    DescribeProductResult();
    DescribeProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const{ return m_productViewSummary; }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline void SetProductViewSummary(const ProductViewSummary& value) { m_productViewSummary = value; }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline void SetProductViewSummary(ProductViewSummary&& value) { m_productViewSummary = std::move(value); }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline DescribeProductResult& WithProductViewSummary(const ProductViewSummary& value) { SetProductViewSummary(value); return *this;}

    /**
     * <p>Summary information about the product view.</p>
     */
    inline DescribeProductResult& WithProductViewSummary(ProductViewSummary&& value) { SetProductViewSummary(std::move(value)); return *this;}


    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifact>& GetProvisioningArtifacts() const{ return m_provisioningArtifacts; }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline void SetProvisioningArtifacts(const Aws::Vector<ProvisioningArtifact>& value) { m_provisioningArtifacts = value; }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline void SetProvisioningArtifacts(Aws::Vector<ProvisioningArtifact>&& value) { m_provisioningArtifacts = std::move(value); }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& WithProvisioningArtifacts(const Aws::Vector<ProvisioningArtifact>& value) { SetProvisioningArtifacts(value); return *this;}

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& WithProvisioningArtifacts(Aws::Vector<ProvisioningArtifact>&& value) { SetProvisioningArtifacts(std::move(value)); return *this;}

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& AddProvisioningArtifacts(const ProvisioningArtifact& value) { m_provisioningArtifacts.push_back(value); return *this; }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& AddProvisioningArtifacts(ProvisioningArtifact&& value) { m_provisioningArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const{ return m_budgets; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline void SetBudgets(const Aws::Vector<BudgetDetail>& value) { m_budgets = value; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline void SetBudgets(Aws::Vector<BudgetDetail>&& value) { m_budgets = std::move(value); }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& WithBudgets(const Aws::Vector<BudgetDetail>& value) { SetBudgets(value); return *this;}

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& WithBudgets(Aws::Vector<BudgetDetail>&& value) { SetBudgets(std::move(value)); return *this;}

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& AddBudgets(const BudgetDetail& value) { m_budgets.push_back(value); return *this; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& AddBudgets(BudgetDetail&& value) { m_budgets.push_back(std::move(value)); return *this; }

  private:

    ProductViewSummary m_productViewSummary;

    Aws::Vector<ProvisioningArtifact> m_provisioningArtifacts;

    Aws::Vector<BudgetDetail> m_budgets;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
