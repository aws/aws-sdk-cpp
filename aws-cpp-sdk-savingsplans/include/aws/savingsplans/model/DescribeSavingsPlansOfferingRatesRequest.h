/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlanPaymentOption.h>
#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/savingsplans/model/SavingsPlanProductType.h>
#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>
#include <aws/savingsplans/model/SavingsPlanOfferingRateFilterElement.h>
#include <utility>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class DescribeSavingsPlansOfferingRatesRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansOfferingRatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSavingsPlansOfferingRates"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    /**
     * <p>The IDs of the offerings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanOfferingIds() const{ return m_savingsPlanOfferingIds; }

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline bool SavingsPlanOfferingIdsHasBeenSet() const { return m_savingsPlanOfferingIdsHasBeenSet; }

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline void SetSavingsPlanOfferingIds(const Aws::Vector<Aws::String>& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds = value; }

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline void SetSavingsPlanOfferingIds(Aws::Vector<Aws::String>&& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds = std::move(value); }

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanOfferingIds(const Aws::Vector<Aws::String>& value) { SetSavingsPlanOfferingIds(value); return *this;}

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanOfferingIds(Aws::Vector<Aws::String>&& value) { SetSavingsPlanOfferingIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanOfferingIds(const Aws::String& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanOfferingIds(Aws::String&& value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the offerings.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanOfferingIds(const char* value) { m_savingsPlanOfferingIdsHasBeenSet = true; m_savingsPlanOfferingIds.push_back(value); return *this; }


    /**
     * <p>The payment options.</p>
     */
    inline const Aws::Vector<SavingsPlanPaymentOption>& GetSavingsPlanPaymentOptions() const{ return m_savingsPlanPaymentOptions; }

    /**
     * <p>The payment options.</p>
     */
    inline bool SavingsPlanPaymentOptionsHasBeenSet() const { return m_savingsPlanPaymentOptionsHasBeenSet; }

    /**
     * <p>The payment options.</p>
     */
    inline void SetSavingsPlanPaymentOptions(const Aws::Vector<SavingsPlanPaymentOption>& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions = value; }

    /**
     * <p>The payment options.</p>
     */
    inline void SetSavingsPlanPaymentOptions(Aws::Vector<SavingsPlanPaymentOption>&& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions = std::move(value); }

    /**
     * <p>The payment options.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanPaymentOptions(const Aws::Vector<SavingsPlanPaymentOption>& value) { SetSavingsPlanPaymentOptions(value); return *this;}

    /**
     * <p>The payment options.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanPaymentOptions(Aws::Vector<SavingsPlanPaymentOption>&& value) { SetSavingsPlanPaymentOptions(std::move(value)); return *this;}

    /**
     * <p>The payment options.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanPaymentOptions(const SavingsPlanPaymentOption& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions.push_back(value); return *this; }

    /**
     * <p>The payment options.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanPaymentOptions(SavingsPlanPaymentOption&& value) { m_savingsPlanPaymentOptionsHasBeenSet = true; m_savingsPlanPaymentOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The plan types.</p>
     */
    inline const Aws::Vector<SavingsPlanType>& GetSavingsPlanTypes() const{ return m_savingsPlanTypes; }

    /**
     * <p>The plan types.</p>
     */
    inline bool SavingsPlanTypesHasBeenSet() const { return m_savingsPlanTypesHasBeenSet; }

    /**
     * <p>The plan types.</p>
     */
    inline void SetSavingsPlanTypes(const Aws::Vector<SavingsPlanType>& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes = value; }

    /**
     * <p>The plan types.</p>
     */
    inline void SetSavingsPlanTypes(Aws::Vector<SavingsPlanType>&& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes = std::move(value); }

    /**
     * <p>The plan types.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanTypes(const Aws::Vector<SavingsPlanType>& value) { SetSavingsPlanTypes(value); return *this;}

    /**
     * <p>The plan types.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithSavingsPlanTypes(Aws::Vector<SavingsPlanType>&& value) { SetSavingsPlanTypes(std::move(value)); return *this;}

    /**
     * <p>The plan types.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanTypes(const SavingsPlanType& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes.push_back(value); return *this; }

    /**
     * <p>The plan types.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddSavingsPlanTypes(SavingsPlanType&& value) { m_savingsPlanTypesHasBeenSet = true; m_savingsPlanTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The AWS products.</p>
     */
    inline const Aws::Vector<SavingsPlanProductType>& GetProducts() const{ return m_products; }

    /**
     * <p>The AWS products.</p>
     */
    inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }

    /**
     * <p>The AWS products.</p>
     */
    inline void SetProducts(const Aws::Vector<SavingsPlanProductType>& value) { m_productsHasBeenSet = true; m_products = value; }

    /**
     * <p>The AWS products.</p>
     */
    inline void SetProducts(Aws::Vector<SavingsPlanProductType>&& value) { m_productsHasBeenSet = true; m_products = std::move(value); }

    /**
     * <p>The AWS products.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithProducts(const Aws::Vector<SavingsPlanProductType>& value) { SetProducts(value); return *this;}

    /**
     * <p>The AWS products.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithProducts(Aws::Vector<SavingsPlanProductType>&& value) { SetProducts(std::move(value)); return *this;}

    /**
     * <p>The AWS products.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddProducts(const SavingsPlanProductType& value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }

    /**
     * <p>The AWS products.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddProducts(SavingsPlanProductType&& value) { m_productsHasBeenSet = true; m_products.push_back(std::move(value)); return *this; }


    /**
     * <p>The services.</p>
     */
    inline const Aws::Vector<SavingsPlanRateServiceCode>& GetServiceCodes() const{ return m_serviceCodes; }

    /**
     * <p>The services.</p>
     */
    inline bool ServiceCodesHasBeenSet() const { return m_serviceCodesHasBeenSet; }

    /**
     * <p>The services.</p>
     */
    inline void SetServiceCodes(const Aws::Vector<SavingsPlanRateServiceCode>& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = value; }

    /**
     * <p>The services.</p>
     */
    inline void SetServiceCodes(Aws::Vector<SavingsPlanRateServiceCode>&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes = std::move(value); }

    /**
     * <p>The services.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithServiceCodes(const Aws::Vector<SavingsPlanRateServiceCode>& value) { SetServiceCodes(value); return *this;}

    /**
     * <p>The services.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithServiceCodes(Aws::Vector<SavingsPlanRateServiceCode>&& value) { SetServiceCodes(std::move(value)); return *this;}

    /**
     * <p>The services.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddServiceCodes(const SavingsPlanRateServiceCode& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(value); return *this; }

    /**
     * <p>The services.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddServiceCodes(SavingsPlanRateServiceCode&& value) { m_serviceCodesHasBeenSet = true; m_serviceCodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsageTypes() const{ return m_usageTypes; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline bool UsageTypesHasBeenSet() const { return m_usageTypesHasBeenSet; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline void SetUsageTypes(const Aws::Vector<Aws::String>& value) { m_usageTypesHasBeenSet = true; m_usageTypes = value; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline void SetUsageTypes(Aws::Vector<Aws::String>&& value) { m_usageTypesHasBeenSet = true; m_usageTypes = std::move(value); }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithUsageTypes(const Aws::Vector<Aws::String>& value) { SetUsageTypes(value); return *this;}

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithUsageTypes(Aws::Vector<Aws::String>&& value) { SetUsageTypes(std::move(value)); return *this;}

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddUsageTypes(const Aws::String& value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(value); return *this; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddUsageTypes(Aws::String&& value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The usage details of the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddUsageTypes(const char* value) { m_usageTypesHasBeenSet = true; m_usageTypes.push_back(value); return *this; }


    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperations() const{ return m_operations; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline void SetOperations(const Aws::Vector<Aws::String>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline void SetOperations(Aws::Vector<Aws::String>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithOperations(const Aws::Vector<Aws::String>& value) { SetOperations(value); return *this;}

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithOperations(Aws::Vector<Aws::String>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddOperations(const Aws::String& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddOperations(Aws::String&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }

    /**
     * <p>The specific AWS operation for the line item in the billing report.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddOperations(const char* value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }


    /**
     * <p>The filters.</p>
     */
    inline const Aws::Vector<SavingsPlanOfferingRateFilterElement>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p>
     */
    inline void SetFilters(const Aws::Vector<SavingsPlanOfferingRateFilterElement>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p>
     */
    inline void SetFilters(Aws::Vector<SavingsPlanOfferingRateFilterElement>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithFilters(const Aws::Vector<SavingsPlanOfferingRateFilterElement>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithFilters(Aws::Vector<SavingsPlanOfferingRateFilterElement>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddFilters(const SavingsPlanOfferingRateFilterElement& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& AddFilters(SavingsPlanOfferingRateFilterElement&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve
     * additional results, make another call with the returned token value.</p>
     */
    inline DescribeSavingsPlansOfferingRatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_savingsPlanOfferingIds;
    bool m_savingsPlanOfferingIdsHasBeenSet = false;

    Aws::Vector<SavingsPlanPaymentOption> m_savingsPlanPaymentOptions;
    bool m_savingsPlanPaymentOptionsHasBeenSet = false;

    Aws::Vector<SavingsPlanType> m_savingsPlanTypes;
    bool m_savingsPlanTypesHasBeenSet = false;

    Aws::Vector<SavingsPlanProductType> m_products;
    bool m_productsHasBeenSet = false;

    Aws::Vector<SavingsPlanRateServiceCode> m_serviceCodes;
    bool m_serviceCodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_usageTypes;
    bool m_usageTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::Vector<SavingsPlanOfferingRateFilterElement> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
