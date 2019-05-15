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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/RecurringCharge.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p> This data type is used as a response element in the
   * <code>DescribeReservedDBInstances</code> and
   * <code>PurchaseReservedDBInstancesOffering</code> actions. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReservedDBInstance">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ReservedDBInstance
  {
  public:
    ReservedDBInstance();
    ReservedDBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedDBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedDBInstanceId() const{ return m_reservedDBInstanceId; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline bool ReservedDBInstanceIdHasBeenSet() const { return m_reservedDBInstanceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedDBInstanceId(const Aws::String& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedDBInstanceId(Aws::String&& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = std::move(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedDBInstanceId(const char* value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId.assign(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstanceId(const Aws::String& value) { SetReservedDBInstanceId(value); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstanceId(Aws::String&& value) { SetReservedDBInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstanceId(const char* value) { SetReservedDBInstanceId(value); return *this;}


    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const{ return m_reservedDBInstancesOfferingId; }

    /**
     * <p>The offering identifier.</p>
     */
    inline bool ReservedDBInstancesOfferingIdHasBeenSet() const { return m_reservedDBInstancesOfferingIdHasBeenSet; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedDBInstancesOfferingId(const Aws::String& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedDBInstancesOfferingId(Aws::String&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = std::move(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedDBInstancesOfferingId(const char* value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId.assign(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstancesOfferingId(const Aws::String& value) { SetReservedDBInstancesOfferingId(value); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstancesOfferingId(Aws::String&& value) { SetReservedDBInstancesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstancesOfferingId(const char* value) { SetReservedDBInstancesOfferingId(value); return *this;}


    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The time the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the reservation started.</p>
     */
    inline ReservedDBInstance& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the reservation started.</p>
     */
    inline ReservedDBInstance& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline ReservedDBInstance& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The fixed price charged for this reserved DB instance.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The fixed price charged for this reserved DB instance.</p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The fixed price charged for this reserved DB instance.</p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The fixed price charged for this reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The hourly price charged for this reserved DB instance.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The hourly price charged for this reserved DB instance.</p>
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * <p>The hourly price charged for this reserved DB instance.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The hourly price charged for this reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The number of reserved DB instances.</p>
     */
    inline int GetDBInstanceCount() const{ return m_dBInstanceCount; }

    /**
     * <p>The number of reserved DB instances.</p>
     */
    inline bool DBInstanceCountHasBeenSet() const { return m_dBInstanceCountHasBeenSet; }

    /**
     * <p>The number of reserved DB instances.</p>
     */
    inline void SetDBInstanceCount(int value) { m_dBInstanceCountHasBeenSet = true; m_dBInstanceCount = value; }

    /**
     * <p>The number of reserved DB instances.</p>
     */
    inline ReservedDBInstance& WithDBInstanceCount(int value) { SetDBInstanceCount(value); return *this;}


    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }

    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }

    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }

    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }

    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}


    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }

    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }

    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }

    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}

    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}


    /**
     * <p>Indicates if the reservation applies to Multi-AZ deployments.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Indicates if the reservation applies to Multi-AZ deployments.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>Indicates if the reservation applies to Multi-AZ deployments.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Indicates if the reservation applies to Multi-AZ deployments.</p>
     */
    inline ReservedDBInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline ReservedDBInstance& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline ReservedDBInstance& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline const Aws::String& GetReservedDBInstanceArn() const{ return m_reservedDBInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline bool ReservedDBInstanceArnHasBeenSet() const { return m_reservedDBInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline void SetReservedDBInstanceArn(const Aws::String& value) { m_reservedDBInstanceArnHasBeenSet = true; m_reservedDBInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline void SetReservedDBInstanceArn(Aws::String&& value) { m_reservedDBInstanceArnHasBeenSet = true; m_reservedDBInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline void SetReservedDBInstanceArn(const char* value) { m_reservedDBInstanceArnHasBeenSet = true; m_reservedDBInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstanceArn(const Aws::String& value) { SetReservedDBInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstanceArn(Aws::String&& value) { SetReservedDBInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline ReservedDBInstance& WithReservedDBInstanceArn(const char* value) { SetReservedDBInstanceArn(value); return *this;}

  private:

    Aws::String m_reservedDBInstanceId;
    bool m_reservedDBInstanceIdHasBeenSet;

    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    int m_dBInstanceCount;
    bool m_dBInstanceCountHasBeenSet;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet;

    Aws::String m_reservedDBInstanceArn;
    bool m_reservedDBInstanceArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
