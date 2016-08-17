/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the metadata of an offering transaction.</p>
   */
  class AWS_DEVICEFARM_API OfferingTransaction
  {
  public:
    OfferingTransaction();
    OfferingTransaction(const Aws::Utils::Json::JsonValue& jsonValue);
    OfferingTransaction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline const OfferingStatus& GetOfferingStatus() const{ return m_offeringStatus; }

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline void SetOfferingStatus(const OfferingStatus& value) { m_offeringStatusHasBeenSet = true; m_offeringStatus = value; }

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline void SetOfferingStatus(OfferingStatus&& value) { m_offeringStatusHasBeenSet = true; m_offeringStatus = value; }

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline OfferingTransaction& WithOfferingStatus(const OfferingStatus& value) { SetOfferingStatus(value); return *this;}

    /**
     * <p>The status of an offering transaction.</p>
     */
    inline OfferingTransaction& WithOfferingStatus(OfferingStatus&& value) { SetOfferingStatus(value); return *this;}

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

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
    inline OfferingTransaction& WithTransactionId(Aws::String&& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID of the offering transaction.</p>
     */
    inline OfferingTransaction& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline OfferingTransaction& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The date on which an offering transaction was created.</p>
     */
    inline OfferingTransaction& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline const MonetaryAmount& GetCost() const{ return m_cost; }

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline void SetCost(const MonetaryAmount& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline void SetCost(MonetaryAmount&& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline OfferingTransaction& WithCost(const MonetaryAmount& value) { SetCost(value); return *this;}

    /**
     * <p>The cost of an offering transaction.</p>
     */
    inline OfferingTransaction& WithCost(MonetaryAmount&& value) { SetCost(value); return *this;}

  private:
    OfferingStatus m_offeringStatus;
    bool m_offeringStatusHasBeenSet;
    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet;
    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet;
    MonetaryAmount m_cost;
    bool m_costHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
