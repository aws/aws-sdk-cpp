/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/PhoneNumber.h>
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
  class GetPhoneNumberResult
  {
  public:
    AWS_CHIME_API GetPhoneNumberResult();
    AWS_CHIME_API GetPhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetPhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The phone number details.</p>
     */
    inline const PhoneNumber& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number details.</p>
     */
    inline void SetPhoneNumber(const PhoneNumber& value) { m_phoneNumber = value; }

    /**
     * <p>The phone number details.</p>
     */
    inline void SetPhoneNumber(PhoneNumber&& value) { m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number details.</p>
     */
    inline GetPhoneNumberResult& WithPhoneNumber(const PhoneNumber& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number details.</p>
     */
    inline GetPhoneNumberResult& WithPhoneNumber(PhoneNumber&& value) { SetPhoneNumber(std::move(value)); return *this;}

  private:

    PhoneNumber m_phoneNumber;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
