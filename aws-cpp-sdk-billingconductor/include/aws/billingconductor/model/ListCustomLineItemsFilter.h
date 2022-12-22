/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{

  /**
   * <p> A filter that specifies the custom line items and billing groups to retrieve
   * FFLI information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemsFilter">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemsFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsFilter();
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of custom line items to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetBillingGroups() const{ return m_billingGroups; }

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline bool BillingGroupsHasBeenSet() const { return m_billingGroupsHasBeenSet; }

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline void SetBillingGroups(const Aws::Vector<Aws::String>& value) { m_billingGroupsHasBeenSet = true; m_billingGroups = value; }

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline void SetBillingGroups(Aws::Vector<Aws::String>&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups = std::move(value); }

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& WithBillingGroups(const Aws::Vector<Aws::String>& value) { SetBillingGroups(value); return *this;}

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& WithBillingGroups(Aws::Vector<Aws::String>&& value) { SetBillingGroups(std::move(value)); return *this;}

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddBillingGroups(const Aws::String& value) { m_billingGroupsHasBeenSet = true; m_billingGroups.push_back(value); return *this; }

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddBillingGroups(Aws::String&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups.push_back(std::move(value)); return *this; }

    /**
     * <p> The billing group Amazon Resource Names (ARNs) to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddBillingGroups(const char* value) { m_billingGroupsHasBeenSet = true; m_billingGroups.push_back(value); return *this; }


    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const{ return m_arns; }

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline void SetArns(const Aws::Vector<Aws::String>& value) { m_arnsHasBeenSet = true; m_arns = value; }

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline void SetArns(Aws::Vector<Aws::String>&& value) { m_arnsHasBeenSet = true; m_arns = std::move(value); }

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& WithArns(const Aws::Vector<Aws::String>& value) { SetArns(value); return *this;}

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& WithArns(Aws::Vector<Aws::String>&& value) { SetArns(std::move(value)); return *this;}

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddArns(const Aws::String& value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddArns(Aws::String&& value) { m_arnsHasBeenSet = true; m_arns.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of custom line item ARNs to retrieve information. </p>
     */
    inline ListCustomLineItemsFilter& AddArns(const char* value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<Aws::String> m_billingGroups;
    bool m_billingGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
