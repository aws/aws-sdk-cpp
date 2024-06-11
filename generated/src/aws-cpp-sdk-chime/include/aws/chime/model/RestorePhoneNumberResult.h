﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/PhoneNumber.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class RestorePhoneNumberResult
  {
  public:
    AWS_CHIME_API RestorePhoneNumberResult();
    AWS_CHIME_API RestorePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API RestorePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The phone number details.</p>
     */
    inline const PhoneNumber& GetPhoneNumber() const{ return m_phoneNumber; }
    inline void SetPhoneNumber(const PhoneNumber& value) { m_phoneNumber = value; }
    inline void SetPhoneNumber(PhoneNumber&& value) { m_phoneNumber = std::move(value); }
    inline RestorePhoneNumberResult& WithPhoneNumber(const PhoneNumber& value) { SetPhoneNumber(value); return *this;}
    inline RestorePhoneNumberResult& WithPhoneNumber(PhoneNumber&& value) { SetPhoneNumber(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RestorePhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RestorePhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RestorePhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PhoneNumber m_phoneNumber;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
