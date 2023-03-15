﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class BatchDeletePhoneNumberResult
  {
  public:
    AWS_CHIME_API BatchDeletePhoneNumberResult();
    AWS_CHIME_API BatchDeletePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API BatchDeletePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDeletePhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDeletePhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDeletePhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PhoneNumberError> m_phoneNumberErrors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
