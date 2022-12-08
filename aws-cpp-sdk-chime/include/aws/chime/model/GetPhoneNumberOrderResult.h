/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/PhoneNumberOrder.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class GetPhoneNumberOrderResult
  {
  public:
    AWS_CHIME_API GetPhoneNumberOrderResult();
    AWS_CHIME_API GetPhoneNumberOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetPhoneNumberOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The phone number order details.</p>
     */
    inline const PhoneNumberOrder& GetPhoneNumberOrder() const{ return m_phoneNumberOrder; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrder(const PhoneNumberOrder& value) { m_phoneNumberOrder = value; }

    /**
     * <p>The phone number order details.</p>
     */
    inline void SetPhoneNumberOrder(PhoneNumberOrder&& value) { m_phoneNumberOrder = std::move(value); }

    /**
     * <p>The phone number order details.</p>
     */
    inline GetPhoneNumberOrderResult& WithPhoneNumberOrder(const PhoneNumberOrder& value) { SetPhoneNumberOrder(value); return *this;}

    /**
     * <p>The phone number order details.</p>
     */
    inline GetPhoneNumberOrderResult& WithPhoneNumberOrder(PhoneNumberOrder&& value) { SetPhoneNumberOrder(std::move(value)); return *this;}

  private:

    PhoneNumberOrder m_phoneNumberOrder;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
