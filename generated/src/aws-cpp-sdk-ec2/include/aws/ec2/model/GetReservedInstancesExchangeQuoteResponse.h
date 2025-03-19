/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ReservationValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstanceReservationValue.h>
#include <aws/ec2/model/TargetReservationValue.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of GetReservedInstancesExchangeQuote.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/GetReservedInstancesExchangeQuoteResult">AWS
   * API Reference</a></p>
   */
  class GetReservedInstancesExchangeQuoteResponse
  {
  public:
    AWS_EC2_API GetReservedInstancesExchangeQuoteResponse() = default;
    AWS_EC2_API GetReservedInstancesExchangeQuoteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetReservedInstancesExchangeQuoteResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The currency of the transaction.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    GetReservedInstancesExchangeQuoteResponse& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, the exchange is valid. If <code>false</code>, the
     * exchange cannot be completed.</p>
     */
    inline bool GetIsValidExchange() const { return m_isValidExchange; }
    inline void SetIsValidExchange(bool value) { m_isValidExchangeHasBeenSet = true; m_isValidExchange = value; }
    inline GetReservedInstancesExchangeQuoteResponse& WithIsValidExchange(bool value) { SetIsValidExchange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new end date of the reservation term.</p>
     */
    inline const Aws::Utils::DateTime& GetOutputReservedInstancesWillExpireAt() const { return m_outputReservedInstancesWillExpireAt; }
    template<typename OutputReservedInstancesWillExpireAtT = Aws::Utils::DateTime>
    void SetOutputReservedInstancesWillExpireAt(OutputReservedInstancesWillExpireAtT&& value) { m_outputReservedInstancesWillExpireAtHasBeenSet = true; m_outputReservedInstancesWillExpireAt = std::forward<OutputReservedInstancesWillExpireAtT>(value); }
    template<typename OutputReservedInstancesWillExpireAtT = Aws::Utils::DateTime>
    GetReservedInstancesExchangeQuoteResponse& WithOutputReservedInstancesWillExpireAt(OutputReservedInstancesWillExpireAtT&& value) { SetOutputReservedInstancesWillExpireAt(std::forward<OutputReservedInstancesWillExpireAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline const Aws::String& GetPaymentDue() const { return m_paymentDue; }
    template<typename PaymentDueT = Aws::String>
    void SetPaymentDue(PaymentDueT&& value) { m_paymentDueHasBeenSet = true; m_paymentDue = std::forward<PaymentDueT>(value); }
    template<typename PaymentDueT = Aws::String>
    GetReservedInstancesExchangeQuoteResponse& WithPaymentDue(PaymentDueT&& value) { SetPaymentDue(std::forward<PaymentDueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline const ReservationValue& GetReservedInstanceValueRollup() const { return m_reservedInstanceValueRollup; }
    template<typename ReservedInstanceValueRollupT = ReservationValue>
    void SetReservedInstanceValueRollup(ReservedInstanceValueRollupT&& value) { m_reservedInstanceValueRollupHasBeenSet = true; m_reservedInstanceValueRollup = std::forward<ReservedInstanceValueRollupT>(value); }
    template<typename ReservedInstanceValueRollupT = ReservationValue>
    GetReservedInstancesExchangeQuoteResponse& WithReservedInstanceValueRollup(ReservedInstanceValueRollupT&& value) { SetReservedInstanceValueRollup(std::forward<ReservedInstanceValueRollupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline const Aws::Vector<ReservedInstanceReservationValue>& GetReservedInstanceValueSet() const { return m_reservedInstanceValueSet; }
    template<typename ReservedInstanceValueSetT = Aws::Vector<ReservedInstanceReservationValue>>
    void SetReservedInstanceValueSet(ReservedInstanceValueSetT&& value) { m_reservedInstanceValueSetHasBeenSet = true; m_reservedInstanceValueSet = std::forward<ReservedInstanceValueSetT>(value); }
    template<typename ReservedInstanceValueSetT = Aws::Vector<ReservedInstanceReservationValue>>
    GetReservedInstancesExchangeQuoteResponse& WithReservedInstanceValueSet(ReservedInstanceValueSetT&& value) { SetReservedInstanceValueSet(std::forward<ReservedInstanceValueSetT>(value)); return *this;}
    template<typename ReservedInstanceValueSetT = ReservedInstanceReservationValue>
    GetReservedInstancesExchangeQuoteResponse& AddReservedInstanceValueSet(ReservedInstanceValueSetT&& value) { m_reservedInstanceValueSetHasBeenSet = true; m_reservedInstanceValueSet.emplace_back(std::forward<ReservedInstanceValueSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline const ReservationValue& GetTargetConfigurationValueRollup() const { return m_targetConfigurationValueRollup; }
    template<typename TargetConfigurationValueRollupT = ReservationValue>
    void SetTargetConfigurationValueRollup(TargetConfigurationValueRollupT&& value) { m_targetConfigurationValueRollupHasBeenSet = true; m_targetConfigurationValueRollup = std::forward<TargetConfigurationValueRollupT>(value); }
    template<typename TargetConfigurationValueRollupT = ReservationValue>
    GetReservedInstancesExchangeQuoteResponse& WithTargetConfigurationValueRollup(TargetConfigurationValueRollupT&& value) { SetTargetConfigurationValueRollup(std::forward<TargetConfigurationValueRollupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline const Aws::Vector<TargetReservationValue>& GetTargetConfigurationValueSet() const { return m_targetConfigurationValueSet; }
    template<typename TargetConfigurationValueSetT = Aws::Vector<TargetReservationValue>>
    void SetTargetConfigurationValueSet(TargetConfigurationValueSetT&& value) { m_targetConfigurationValueSetHasBeenSet = true; m_targetConfigurationValueSet = std::forward<TargetConfigurationValueSetT>(value); }
    template<typename TargetConfigurationValueSetT = Aws::Vector<TargetReservationValue>>
    GetReservedInstancesExchangeQuoteResponse& WithTargetConfigurationValueSet(TargetConfigurationValueSetT&& value) { SetTargetConfigurationValueSet(std::forward<TargetConfigurationValueSetT>(value)); return *this;}
    template<typename TargetConfigurationValueSetT = TargetReservationValue>
    GetReservedInstancesExchangeQuoteResponse& AddTargetConfigurationValueSet(TargetConfigurationValueSetT&& value) { m_targetConfigurationValueSetHasBeenSet = true; m_targetConfigurationValueSet.emplace_back(std::forward<TargetConfigurationValueSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline const Aws::String& GetValidationFailureReason() const { return m_validationFailureReason; }
    template<typename ValidationFailureReasonT = Aws::String>
    void SetValidationFailureReason(ValidationFailureReasonT&& value) { m_validationFailureReasonHasBeenSet = true; m_validationFailureReason = std::forward<ValidationFailureReasonT>(value); }
    template<typename ValidationFailureReasonT = Aws::String>
    GetReservedInstancesExchangeQuoteResponse& WithValidationFailureReason(ValidationFailureReasonT&& value) { SetValidationFailureReason(std::forward<ValidationFailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetReservedInstancesExchangeQuoteResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    bool m_isValidExchange{false};
    bool m_isValidExchangeHasBeenSet = false;

    Aws::Utils::DateTime m_outputReservedInstancesWillExpireAt{};
    bool m_outputReservedInstancesWillExpireAtHasBeenSet = false;

    Aws::String m_paymentDue;
    bool m_paymentDueHasBeenSet = false;

    ReservationValue m_reservedInstanceValueRollup;
    bool m_reservedInstanceValueRollupHasBeenSet = false;

    Aws::Vector<ReservedInstanceReservationValue> m_reservedInstanceValueSet;
    bool m_reservedInstanceValueSetHasBeenSet = false;

    ReservationValue m_targetConfigurationValueRollup;
    bool m_targetConfigurationValueRollupHasBeenSet = false;

    Aws::Vector<TargetReservationValue> m_targetConfigurationValueSet;
    bool m_targetConfigurationValueSetHasBeenSet = false;

    Aws::String m_validationFailureReason;
    bool m_validationFailureReasonHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
