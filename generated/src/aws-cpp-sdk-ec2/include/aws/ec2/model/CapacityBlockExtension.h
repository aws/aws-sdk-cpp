/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityBlockExtensionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Capacity Block extension. With an extension, you can extend the
   * duration of time for an existing Capacity Block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlockExtension">AWS
   * API Reference</a></p>
   */
  class CapacityBlockExtension
  {
  public:
    AWS_EC2_API CapacityBlockExtension();
    AWS_EC2_API CapacityBlockExtension(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlockExtension& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The reservation ID of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }
    inline CapacityBlockExtension& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}
    inline CapacityBlockExtension& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}
    inline CapacityBlockExtension& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline CapacityBlockExtension& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline CapacityBlockExtension& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline CapacityBlockExtension& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the Capacity Block extension.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CapacityBlockExtension& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CapacityBlockExtension& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CapacityBlockExtension& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CapacityBlockExtension& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline CapacityBlockExtension& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CapacityBlockExtension& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CapacityBlockExtension& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Block extension offering.</p>
     */
    inline const Aws::String& GetCapacityBlockExtensionOfferingId() const{ return m_capacityBlockExtensionOfferingId; }
    inline bool CapacityBlockExtensionOfferingIdHasBeenSet() const { return m_capacityBlockExtensionOfferingIdHasBeenSet; }
    inline void SetCapacityBlockExtensionOfferingId(const Aws::String& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = value; }
    inline void SetCapacityBlockExtensionOfferingId(Aws::String&& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = std::move(value); }
    inline void SetCapacityBlockExtensionOfferingId(const char* value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId.assign(value); }
    inline CapacityBlockExtension& WithCapacityBlockExtensionOfferingId(const Aws::String& value) { SetCapacityBlockExtensionOfferingId(value); return *this;}
    inline CapacityBlockExtension& WithCapacityBlockExtensionOfferingId(Aws::String&& value) { SetCapacityBlockExtensionOfferingId(std::move(value)); return *this;}
    inline CapacityBlockExtension& WithCapacityBlockExtensionOfferingId(const char* value) { SetCapacityBlockExtensionOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the Capacity Block extension in hours.</p>
     */
    inline int GetCapacityBlockExtensionDurationHours() const{ return m_capacityBlockExtensionDurationHours; }
    inline bool CapacityBlockExtensionDurationHoursHasBeenSet() const { return m_capacityBlockExtensionDurationHoursHasBeenSet; }
    inline void SetCapacityBlockExtensionDurationHours(int value) { m_capacityBlockExtensionDurationHoursHasBeenSet = true; m_capacityBlockExtensionDurationHours = value; }
    inline CapacityBlockExtension& WithCapacityBlockExtensionDurationHours(int value) { SetCapacityBlockExtensionDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Capacity Block extension. A Capacity Block extension can
     * have one of the following statuses:</p> <ul> <li> <p>
     * <code>payment-pending</code> - The Capacity Block extension payment is
     * processing. If your payment can't be processed within 12 hours, the Capacity
     * Block extension is failed.</p> </li> <li> <p> <code>payment-failed</code> -
     * Payment for the Capacity Block extension request was not successful.</p> </li>
     * <li> <p> <code>payment-succeeded</code> - Payment for the Capacity Block
     * extension request was successful. You receive an invoice that reflects the
     * one-time upfront payment. In the invoice, you can associate the paid amount with
     * the Capacity Block reservation ID.</p> </li> </ul>
     */
    inline const CapacityBlockExtensionStatus& GetCapacityBlockExtensionStatus() const{ return m_capacityBlockExtensionStatus; }
    inline bool CapacityBlockExtensionStatusHasBeenSet() const { return m_capacityBlockExtensionStatusHasBeenSet; }
    inline void SetCapacityBlockExtensionStatus(const CapacityBlockExtensionStatus& value) { m_capacityBlockExtensionStatusHasBeenSet = true; m_capacityBlockExtensionStatus = value; }
    inline void SetCapacityBlockExtensionStatus(CapacityBlockExtensionStatus&& value) { m_capacityBlockExtensionStatusHasBeenSet = true; m_capacityBlockExtensionStatus = std::move(value); }
    inline CapacityBlockExtension& WithCapacityBlockExtensionStatus(const CapacityBlockExtensionStatus& value) { SetCapacityBlockExtensionStatus(value); return *this;}
    inline CapacityBlockExtension& WithCapacityBlockExtensionStatus(CapacityBlockExtensionStatus&& value) { SetCapacityBlockExtensionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the Capacity Block extension was purchased.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionPurchaseDate() const{ return m_capacityBlockExtensionPurchaseDate; }
    inline bool CapacityBlockExtensionPurchaseDateHasBeenSet() const { return m_capacityBlockExtensionPurchaseDateHasBeenSet; }
    inline void SetCapacityBlockExtensionPurchaseDate(const Aws::Utils::DateTime& value) { m_capacityBlockExtensionPurchaseDateHasBeenSet = true; m_capacityBlockExtensionPurchaseDate = value; }
    inline void SetCapacityBlockExtensionPurchaseDate(Aws::Utils::DateTime&& value) { m_capacityBlockExtensionPurchaseDateHasBeenSet = true; m_capacityBlockExtensionPurchaseDate = std::move(value); }
    inline CapacityBlockExtension& WithCapacityBlockExtensionPurchaseDate(const Aws::Utils::DateTime& value) { SetCapacityBlockExtensionPurchaseDate(value); return *this;}
    inline CapacityBlockExtension& WithCapacityBlockExtensionPurchaseDate(Aws::Utils::DateTime&& value) { SetCapacityBlockExtensionPurchaseDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the Capacity Block extension.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionStartDate() const{ return m_capacityBlockExtensionStartDate; }
    inline bool CapacityBlockExtensionStartDateHasBeenSet() const { return m_capacityBlockExtensionStartDateHasBeenSet; }
    inline void SetCapacityBlockExtensionStartDate(const Aws::Utils::DateTime& value) { m_capacityBlockExtensionStartDateHasBeenSet = true; m_capacityBlockExtensionStartDate = value; }
    inline void SetCapacityBlockExtensionStartDate(Aws::Utils::DateTime&& value) { m_capacityBlockExtensionStartDateHasBeenSet = true; m_capacityBlockExtensionStartDate = std::move(value); }
    inline CapacityBlockExtension& WithCapacityBlockExtensionStartDate(const Aws::Utils::DateTime& value) { SetCapacityBlockExtensionStartDate(value); return *this;}
    inline CapacityBlockExtension& WithCapacityBlockExtensionStartDate(Aws::Utils::DateTime&& value) { SetCapacityBlockExtensionStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the Capacity Block extension.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionEndDate() const{ return m_capacityBlockExtensionEndDate; }
    inline bool CapacityBlockExtensionEndDateHasBeenSet() const { return m_capacityBlockExtensionEndDateHasBeenSet; }
    inline void SetCapacityBlockExtensionEndDate(const Aws::Utils::DateTime& value) { m_capacityBlockExtensionEndDateHasBeenSet = true; m_capacityBlockExtensionEndDate = value; }
    inline void SetCapacityBlockExtensionEndDate(Aws::Utils::DateTime&& value) { m_capacityBlockExtensionEndDateHasBeenSet = true; m_capacityBlockExtensionEndDate = std::move(value); }
    inline CapacityBlockExtension& WithCapacityBlockExtensionEndDate(const Aws::Utils::DateTime& value) { SetCapacityBlockExtensionEndDate(value); return *this;}
    inline CapacityBlockExtension& WithCapacityBlockExtensionEndDate(Aws::Utils::DateTime&& value) { SetCapacityBlockExtensionEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total price to be paid up front.</p>
     */
    inline const Aws::String& GetUpfrontFee() const{ return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    inline void SetUpfrontFee(const Aws::String& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = value; }
    inline void SetUpfrontFee(Aws::String&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::move(value); }
    inline void SetUpfrontFee(const char* value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee.assign(value); }
    inline CapacityBlockExtension& WithUpfrontFee(const Aws::String& value) { SetUpfrontFee(value); return *this;}
    inline CapacityBlockExtension& WithUpfrontFee(Aws::String&& value) { SetUpfrontFee(std::move(value)); return *this;}
    inline CapacityBlockExtension& WithUpfrontFee(const char* value) { SetUpfrontFee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency of the payment for the Capacity Block extension.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline CapacityBlockExtension& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline CapacityBlockExtension& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline CapacityBlockExtension& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_capacityBlockExtensionOfferingId;
    bool m_capacityBlockExtensionOfferingIdHasBeenSet = false;

    int m_capacityBlockExtensionDurationHours;
    bool m_capacityBlockExtensionDurationHoursHasBeenSet = false;

    CapacityBlockExtensionStatus m_capacityBlockExtensionStatus;
    bool m_capacityBlockExtensionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionPurchaseDate;
    bool m_capacityBlockExtensionPurchaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionStartDate;
    bool m_capacityBlockExtensionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionEndDate;
    bool m_capacityBlockExtensionEndDateHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
