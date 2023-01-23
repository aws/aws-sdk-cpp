/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/PhoneNumberError.h>
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
  class AssociatePhoneNumbersWithVoiceConnectorGroupResult
  {
  public:
    AWS_CHIME_API AssociatePhoneNumbersWithVoiceConnectorGroupResult();
    AWS_CHIME_API AssociatePhoneNumbersWithVoiceConnectorGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API AssociatePhoneNumbersWithVoiceConnectorGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline const Aws::Vector<PhoneNumberError>& GetPhoneNumberErrors() const{ return m_phoneNumberErrors; }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline void SetPhoneNumberErrors(const Aws::Vector<PhoneNumberError>& value) { m_phoneNumberErrors = value; }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline void SetPhoneNumberErrors(Aws::Vector<PhoneNumberError>&& value) { m_phoneNumberErrors = std::move(value); }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupResult& WithPhoneNumberErrors(const Aws::Vector<PhoneNumberError>& value) { SetPhoneNumberErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupResult& WithPhoneNumberErrors(Aws::Vector<PhoneNumberError>&& value) { SetPhoneNumberErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupResult& AddPhoneNumberErrors(const PhoneNumberError& value) { m_phoneNumberErrors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline AssociatePhoneNumbersWithVoiceConnectorGroupResult& AddPhoneNumberErrors(PhoneNumberError&& value) { m_phoneNumberErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PhoneNumberError> m_phoneNumberErrors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
