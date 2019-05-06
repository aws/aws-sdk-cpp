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
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/marketplace-entitlement/model/GetEntitlementFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MarketplaceEntitlementService
{
namespace Model
{

  /**
   * <p>The GetEntitlementsRequest contains parameters for the GetEntitlements
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/GetEntitlementsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEENTITLEMENTSERVICE_API GetEntitlementsRequest : public MarketplaceEntitlementServiceRequest
  {
  public:
    GetEntitlementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEntitlements"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline GetEntitlementsRequest& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline GetEntitlementsRequest& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>Product code is used to uniquely identify a product in AWS Marketplace. The
     * product code will be provided by AWS Marketplace when the product listing is
     * created.</p>
     */
    inline GetEntitlementsRequest& WithProductCode(const char* value) { SetProductCode(value); return *this;}


    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline const Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>& GetFilter() const{ return m_filter; }

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline void SetFilter(const Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline void SetFilter(Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline GetEntitlementsRequest& WithFilter(const Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>& value) { SetFilter(value); return *this;}

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline GetEntitlementsRequest& WithFilter(Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline GetEntitlementsRequest& AddFilter(const GetEntitlementFilterName& key, const Aws::Vector<Aws::String>& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline GetEntitlementsRequest& AddFilter(GetEntitlementFilterName&& key, const Aws::Vector<Aws::String>& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline GetEntitlementsRequest& AddFilter(const GetEntitlementFilterName& key, Aws::Vector<Aws::String>&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filter is used to return entitlements for a specific customer or for a
     * specific dimension. Filters are described as keys mapped to a lists of values.
     * Filtered requests are <i>unioned</i> for each value in the value list, and then
     * <i>intersected</i> for each filter key.</p>
     */
    inline GetEntitlementsRequest& AddFilter(GetEntitlementFilterName&& key, Aws::Vector<Aws::String>&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline GetEntitlementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline GetEntitlementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For paginated calls to GetEntitlements, pass the NextToken from the previous
     * GetEntitlementsResult.</p>
     */
    inline GetEntitlementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to retrieve from the GetEntitlements operation.
     * For pagination, use the NextToken field in subsequent calls to
     * GetEntitlements.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to retrieve from the GetEntitlements operation.
     * For pagination, use the NextToken field in subsequent calls to
     * GetEntitlements.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to retrieve from the GetEntitlements operation.
     * For pagination, use the NextToken field in subsequent calls to
     * GetEntitlements.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to retrieve from the GetEntitlements operation.
     * For pagination, use the NextToken field in subsequent calls to
     * GetEntitlements.</p>
     */
    inline GetEntitlementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet;

    Aws::Map<GetEntitlementFilterName, Aws::Vector<Aws::String>> m_filter;
    bool m_filterHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
