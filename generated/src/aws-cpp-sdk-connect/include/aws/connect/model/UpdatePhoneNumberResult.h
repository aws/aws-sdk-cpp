﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class UpdatePhoneNumberResult
  {
  public:
    AWS_CONNECT_API UpdatePhoneNumberResult();
    AWS_CONNECT_API UpdatePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API UpdatePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberId = value; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberId = std::move(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberId.assign(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline UpdatePhoneNumberResult& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline UpdatePhoneNumberResult& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline UpdatePhoneNumberResult& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const{ return m_phoneNumberArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetPhoneNumberArn(const Aws::String& value) { m_phoneNumberArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetPhoneNumberArn(Aws::String&& value) { m_phoneNumberArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetPhoneNumberArn(const char* value) { m_phoneNumberArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline UpdatePhoneNumberResult& WithPhoneNumberArn(const Aws::String& value) { SetPhoneNumberArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline UpdatePhoneNumberResult& WithPhoneNumberArn(Aws::String&& value) { SetPhoneNumberArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline UpdatePhoneNumberResult& WithPhoneNumberArn(const char* value) { SetPhoneNumberArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_phoneNumberId;

    Aws::String m_phoneNumberArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
