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
  class TransferContactResult
  {
  public:
    AWS_CONNECT_API TransferContactResult();
    AWS_CONNECT_API TransferContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API TransferContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactId.assign(value); }
    inline TransferContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline TransferContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline TransferContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }
    inline void SetContactArn(const Aws::String& value) { m_contactArn = value; }
    inline void SetContactArn(Aws::String&& value) { m_contactArn = std::move(value); }
    inline void SetContactArn(const char* value) { m_contactArn.assign(value); }
    inline TransferContactResult& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}
    inline TransferContactResult& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}
    inline TransferContactResult& WithContactArn(const char* value) { SetContactArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TransferContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TransferContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TransferContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;

    Aws::String m_contactArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
