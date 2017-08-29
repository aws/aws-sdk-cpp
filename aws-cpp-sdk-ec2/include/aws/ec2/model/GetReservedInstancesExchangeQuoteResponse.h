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
  class AWS_EC2_API GetReservedInstancesExchangeQuoteResponse
  {
  public:
    GetReservedInstancesExchangeQuoteResponse();
    GetReservedInstancesExchangeQuoteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetReservedInstancesExchangeQuoteResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The currency of the transaction.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency of the transaction.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCode = value; }

    /**
     * <p>The currency of the transaction.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCode = std::move(value); }

    /**
     * <p>The currency of the transaction.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCode.assign(value); }

    /**
     * <p>The currency of the transaction.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency of the transaction.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency of the transaction.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>If <code>true</code>, the exchange is valid. If <code>false</code>, the
     * exchange cannot be completed.</p>
     */
    inline bool GetIsValidExchange() const{ return m_isValidExchange; }

    /**
     * <p>If <code>true</code>, the exchange is valid. If <code>false</code>, the
     * exchange cannot be completed.</p>
     */
    inline void SetIsValidExchange(bool value) { m_isValidExchange = value; }

    /**
     * <p>If <code>true</code>, the exchange is valid. If <code>false</code>, the
     * exchange cannot be completed.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithIsValidExchange(bool value) { SetIsValidExchange(value); return *this;}


    /**
     * <p>The new end date of the reservation term.</p>
     */
    inline const Aws::Utils::DateTime& GetOutputReservedInstancesWillExpireAt() const{ return m_outputReservedInstancesWillExpireAt; }

    /**
     * <p>The new end date of the reservation term.</p>
     */
    inline void SetOutputReservedInstancesWillExpireAt(const Aws::Utils::DateTime& value) { m_outputReservedInstancesWillExpireAt = value; }

    /**
     * <p>The new end date of the reservation term.</p>
     */
    inline void SetOutputReservedInstancesWillExpireAt(Aws::Utils::DateTime&& value) { m_outputReservedInstancesWillExpireAt = std::move(value); }

    /**
     * <p>The new end date of the reservation term.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithOutputReservedInstancesWillExpireAt(const Aws::Utils::DateTime& value) { SetOutputReservedInstancesWillExpireAt(value); return *this;}

    /**
     * <p>The new end date of the reservation term.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithOutputReservedInstancesWillExpireAt(Aws::Utils::DateTime&& value) { SetOutputReservedInstancesWillExpireAt(std::move(value)); return *this;}


    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline const Aws::String& GetPaymentDue() const{ return m_paymentDue; }

    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline void SetPaymentDue(const Aws::String& value) { m_paymentDue = value; }

    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline void SetPaymentDue(Aws::String&& value) { m_paymentDue = std::move(value); }

    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline void SetPaymentDue(const char* value) { m_paymentDue.assign(value); }

    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithPaymentDue(const Aws::String& value) { SetPaymentDue(value); return *this;}

    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithPaymentDue(Aws::String&& value) { SetPaymentDue(std::move(value)); return *this;}

    /**
     * <p>The total true upfront charge for the exchange.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithPaymentDue(const char* value) { SetPaymentDue(value); return *this;}


    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline const ReservationValue& GetReservedInstanceValueRollup() const{ return m_reservedInstanceValueRollup; }

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline void SetReservedInstanceValueRollup(const ReservationValue& value) { m_reservedInstanceValueRollup = value; }

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline void SetReservedInstanceValueRollup(ReservationValue&& value) { m_reservedInstanceValueRollup = std::move(value); }

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithReservedInstanceValueRollup(const ReservationValue& value) { SetReservedInstanceValueRollup(value); return *this;}

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithReservedInstanceValueRollup(ReservationValue&& value) { SetReservedInstanceValueRollup(std::move(value)); return *this;}


    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline const Aws::Vector<ReservedInstanceReservationValue>& GetReservedInstanceValueSet() const{ return m_reservedInstanceValueSet; }

    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline void SetReservedInstanceValueSet(const Aws::Vector<ReservedInstanceReservationValue>& value) { m_reservedInstanceValueSet = value; }

    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline void SetReservedInstanceValueSet(Aws::Vector<ReservedInstanceReservationValue>&& value) { m_reservedInstanceValueSet = std::move(value); }

    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithReservedInstanceValueSet(const Aws::Vector<ReservedInstanceReservationValue>& value) { SetReservedInstanceValueSet(value); return *this;}

    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithReservedInstanceValueSet(Aws::Vector<ReservedInstanceReservationValue>&& value) { SetReservedInstanceValueSet(std::move(value)); return *this;}

    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& AddReservedInstanceValueSet(const ReservedInstanceReservationValue& value) { m_reservedInstanceValueSet.push_back(value); return *this; }

    /**
     * <p>The configuration of your Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& AddReservedInstanceValueSet(ReservedInstanceReservationValue&& value) { m_reservedInstanceValueSet.push_back(std::move(value)); return *this; }


    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline const ReservationValue& GetTargetConfigurationValueRollup() const{ return m_targetConfigurationValueRollup; }

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline void SetTargetConfigurationValueRollup(const ReservationValue& value) { m_targetConfigurationValueRollup = value; }

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline void SetTargetConfigurationValueRollup(ReservationValue&& value) { m_targetConfigurationValueRollup = std::move(value); }

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithTargetConfigurationValueRollup(const ReservationValue& value) { SetTargetConfigurationValueRollup(value); return *this;}

    /**
     * <p>The cost associated with the Reserved Instance.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithTargetConfigurationValueRollup(ReservationValue&& value) { SetTargetConfigurationValueRollup(std::move(value)); return *this;}


    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline const Aws::Vector<TargetReservationValue>& GetTargetConfigurationValueSet() const{ return m_targetConfigurationValueSet; }

    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline void SetTargetConfigurationValueSet(const Aws::Vector<TargetReservationValue>& value) { m_targetConfigurationValueSet = value; }

    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline void SetTargetConfigurationValueSet(Aws::Vector<TargetReservationValue>&& value) { m_targetConfigurationValueSet = std::move(value); }

    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithTargetConfigurationValueSet(const Aws::Vector<TargetReservationValue>& value) { SetTargetConfigurationValueSet(value); return *this;}

    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithTargetConfigurationValueSet(Aws::Vector<TargetReservationValue>&& value) { SetTargetConfigurationValueSet(std::move(value)); return *this;}

    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& AddTargetConfigurationValueSet(const TargetReservationValue& value) { m_targetConfigurationValueSet.push_back(value); return *this; }

    /**
     * <p>The values of the target Convertible Reserved Instances.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& AddTargetConfigurationValueSet(TargetReservationValue&& value) { m_targetConfigurationValueSet.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline const Aws::String& GetValidationFailureReason() const{ return m_validationFailureReason; }

    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline void SetValidationFailureReason(const Aws::String& value) { m_validationFailureReason = value; }

    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline void SetValidationFailureReason(Aws::String&& value) { m_validationFailureReason = std::move(value); }

    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline void SetValidationFailureReason(const char* value) { m_validationFailureReason.assign(value); }

    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithValidationFailureReason(const Aws::String& value) { SetValidationFailureReason(value); return *this;}

    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithValidationFailureReason(Aws::String&& value) { SetValidationFailureReason(std::move(value)); return *this;}

    /**
     * <p>Describes the reason why the exchange cannot be completed.</p>
     */
    inline GetReservedInstancesExchangeQuoteResponse& WithValidationFailureReason(const char* value) { SetValidationFailureReason(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetReservedInstancesExchangeQuoteResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetReservedInstancesExchangeQuoteResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_currencyCode;

    bool m_isValidExchange;

    Aws::Utils::DateTime m_outputReservedInstancesWillExpireAt;

    Aws::String m_paymentDue;

    ReservationValue m_reservedInstanceValueRollup;

    Aws::Vector<ReservedInstanceReservationValue> m_reservedInstanceValueSet;

    ReservationValue m_targetConfigurationValueRollup;

    Aws::Vector<TargetReservationValue> m_targetConfigurationValueSet;

    Aws::String m_validationFailureReason;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
