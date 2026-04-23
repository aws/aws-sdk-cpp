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
  class AWS_CHIME_API BatchDeletePhoneNumberResult
  {
  public:
    BatchDeletePhoneNumberResult();
    BatchDeletePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDeletePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline BatchDeletePhoneNumberResult& WithPhoneNumberErrors(const Aws::Vector<PhoneNumberError>& value) { SetPhoneNumberErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline BatchDeletePhoneNumberResult& WithPhoneNumberErrors(Aws::Vector<PhoneNumberError>&& value) { SetPhoneNumberErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline BatchDeletePhoneNumberResult& AddPhoneNumberErrors(const PhoneNumberError& value) { m_phoneNumberErrors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the phone numbers in the request, a
     * list of the phone numbers is returned, along with error codes and error
     * messages.</p>
     */
    inline BatchDeletePhoneNumberResult& AddPhoneNumberErrors(PhoneNumberError&& value) { m_phoneNumberErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PhoneNumberError> m_phoneNumberErrors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
