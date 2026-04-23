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
  class AWS_DEVICEFARM_API OfferingTransaction
  {
  public:
    OfferingTransaction();
    OfferingTransaction(Aws::Utils::Json::JsonView jsonValue);
    OfferingTransaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of an offering transaction.</p>
     */
    inline const OfferingStatus& GetOfferingStatus() const{ return m_offeringStatus; }

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline bool OfferingStatusHasBeenSet() const { return m_offeringStatusHasBeenSet; }

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline void SetOfferingStatus(const OfferingStatus& value) { m_offeringStatusHasBeenSet = true; m_offeringStatus = value; }

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline void SetOfferingStatus(OfferingStatus&& value) { m_offeringStatusHasBeenSet = true; m_offeringStatus = std::move(value); }

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline OfferingTransaction& WithOfferingStatus(const OfferingStatus& value) { SetOfferingStatus(value); return *this;}

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline OfferingTransaction& WithOfferingStatus(OfferingStatus&& value) { SetOfferingStatus(std::move(value)); return *this;}


    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline OfferingTransaction& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline OfferingTransaction& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline OfferingTransaction& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline const Aws::String& GetOfferingPromotionId() const{ return m_offeringPromotionId; }

    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline bool OfferingPromotionIdHasBeenSet() const { return m_offeringPromotionIdHasBeenSet; }

    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline void SetOfferingPromotionId(const Aws::String& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = value; }

    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline void SetOfferingPromotionId(Aws::String&& value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId = std::move(value); }

    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline void SetOfferingPromotionId(const char* value) { m_offeringPromotionIdHasBeenSet = true; m_offeringPromotionId.assign(value); }

    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline OfferingTransaction& WithOfferingPromotionId(const Aws::String& value) { SetOfferingPromotionId(value); return *this;}

    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline OfferingTransaction& WithOfferingPromotionId(Aws::String&& value) { SetOfferingPromotionId(std::move(value)); return *this;}

    /**
     * <p>The ID that corresponds to a device offering promotion.</p>
     */
    inline OfferingTransaction& WithOfferingPromotionId(const char* value) { SetOfferingPromotionId(value); return *this;}


    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline OfferingTransaction& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline OfferingTransaction& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}


    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline const MonetaryAmount& GetCost() const{ return m_cost; }

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline void SetCost(const MonetaryAmount& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline void SetCost(MonetaryAmount&& value) { m_costHasBeenSet = true; m_cost = std::move(value); }

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline OfferingTransaction& WithCost(const MonetaryAmount& value) { SetCost(value); return *this;}

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline OfferingTransaction& WithCost(MonetaryAmount&& value) { SetCost(std::move(value)); return *this;}

  private:

    OfferingStatus m_offeringStatus;
    bool m_offeringStatusHasBeenSet;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet;

    Aws::String m_offeringPromotionId;
    bool m_offeringPromotionIdHasBeenSet;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet;

    MonetaryAmount m_cost;
    bool m_costHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
