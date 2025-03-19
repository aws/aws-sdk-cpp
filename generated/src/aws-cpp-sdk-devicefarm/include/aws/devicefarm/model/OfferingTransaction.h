/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/OfferingStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/MonetaryAmount.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the metadata of an offering transaction.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/OfferingTransaction">AWS
   * API Reference</a></p>
   */
  class OfferingTransaction
  {
  public:
    AWS_DEVICEFARM_API OfferingTransaction() = default;
    AWS_DEVICEFARM_API OfferingTransaction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API OfferingTransaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an offering transaction.</p>
     */
    inline const OfferingStatus& GetOfferingStatus() const { return m_offeringStatus; }
    inline bool OfferingStatusHasBeenSet() const { return m_offeringStatusHasBeenSet; }
    template<typename OfferingStatusT = OfferingStatus>
    void SetOfferingStatus(OfferingStatusT&& value) { m_offeringStatusHasBeenSet = true; m_offeringStatus = std::forward<OfferingStatusT>(value); }
    template<typename OfferingStatusT = OfferingStatus>
    OfferingTransaction& WithOfferingStatus(OfferingStatusT&& value) { SetOfferingStatus(std::forward<OfferingStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    OfferingTransaction& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline const Aws::String& GetOfferingPromotionId() const { return m_offeringPromotionId; }
    inline bool OfferingPromotionIdHasBeenSet() const { return m_offeringPromotionIdHasBeenSet; }
    template<typename OfferingPromotionIdT = Aws::String>
    void SetOfferingPromotionId(OfferingPromotionIdT&& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = std::forward<OfferingPromotionIdT>(value); }
    template<typename OfferingPromotionIdT = Aws::String>
    OfferingTransaction& WithOfferingPromotionId(OfferingPromotionIdT&& value) { SetOfferingPromotionId(std::forward<OfferingPromotionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    OfferingTransaction& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline const MonetaryAmount& GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    template<typename CostT = MonetaryAmount>
    void SetCost(CostT&& value) { m_costHasBeenSet = true; m_cost = std::forward<CostT>(value); }
    template<typename CostT = MonetaryAmount>
    OfferingTransaction& WithCost(CostT&& value) { SetCost(std::forward<CostT>(value)); return *this;}
    ///@}
  private:

    OfferingStatus m_offeringStatus;
    bool m_offeringStatusHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::String m_offeringPromotionId;
    bool m_offeringPromotionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    MonetaryAmount m_cost;
    bool m_costHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
