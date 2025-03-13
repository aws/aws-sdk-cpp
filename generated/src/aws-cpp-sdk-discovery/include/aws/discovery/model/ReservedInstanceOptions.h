/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/PurchasingOption.h>
#include <aws/discovery/model/OfferingClass.h>
#include <aws/discovery/model/TermLength.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> Used to provide Reserved Instance preferences for the recommendation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ReservedInstanceOptions">AWS
   * API Reference</a></p>
   */
  class ReservedInstanceOptions
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ReservedInstanceOptions() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API ReservedInstanceOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API ReservedInstanceOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The payment plan to use for your Reserved Instance. </p>
     */
    inline PurchasingOption GetPurchasingOption() const { return m_purchasingOption; }
    inline bool PurchasingOptionHasBeenSet() const { return m_purchasingOptionHasBeenSet; }
    inline void SetPurchasingOption(PurchasingOption value) { m_purchasingOptionHasBeenSet = true; m_purchasingOption = value; }
    inline ReservedInstanceOptions& WithPurchasingOption(PurchasingOption value) { SetPurchasingOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The flexibility to change the instance types needed for your Reserved
     * Instance. </p>
     */
    inline OfferingClass GetOfferingClass() const { return m_offeringClass; }
    inline bool OfferingClassHasBeenSet() const { return m_offeringClassHasBeenSet; }
    inline void SetOfferingClass(OfferingClass value) { m_offeringClassHasBeenSet = true; m_offeringClass = value; }
    inline ReservedInstanceOptions& WithOfferingClass(OfferingClass value) { SetOfferingClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The preferred duration of the Reserved Instance term. </p>
     */
    inline TermLength GetTermLength() const { return m_termLength; }
    inline bool TermLengthHasBeenSet() const { return m_termLengthHasBeenSet; }
    inline void SetTermLength(TermLength value) { m_termLengthHasBeenSet = true; m_termLength = value; }
    inline ReservedInstanceOptions& WithTermLength(TermLength value) { SetTermLength(value); return *this;}
    ///@}
  private:

    PurchasingOption m_purchasingOption{PurchasingOption::NOT_SET};
    bool m_purchasingOptionHasBeenSet = false;

    OfferingClass m_offeringClass{OfferingClass::NOT_SET};
    bool m_offeringClassHasBeenSet = false;

    TermLength m_termLength{TermLength::NOT_SET};
    bool m_termLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
