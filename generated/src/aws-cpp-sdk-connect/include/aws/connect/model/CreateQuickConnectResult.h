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
  class CreateQuickConnectResult
  {
  public:
    AWS_CONNECT_API CreateQuickConnectResult();
    AWS_CONNECT_API CreateQuickConnectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateQuickConnectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the quick connect. </p>
     */
    inline const Aws::String& GetQuickConnectARN() const{ return m_quickConnectARN; }
    inline void SetQuickConnectARN(const Aws::String& value) { m_quickConnectARN = value; }
    inline void SetQuickConnectARN(Aws::String&& value) { m_quickConnectARN = std::move(value); }
    inline void SetQuickConnectARN(const char* value) { m_quickConnectARN.assign(value); }
    inline CreateQuickConnectResult& WithQuickConnectARN(const Aws::String& value) { SetQuickConnectARN(value); return *this;}
    inline CreateQuickConnectResult& WithQuickConnectARN(Aws::String&& value) { SetQuickConnectARN(std::move(value)); return *this;}
    inline CreateQuickConnectResult& WithQuickConnectARN(const char* value) { SetQuickConnectARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the quick connect. </p>
     */
    inline const Aws::String& GetQuickConnectId() const{ return m_quickConnectId; }
    inline void SetQuickConnectId(const Aws::String& value) { m_quickConnectId = value; }
    inline void SetQuickConnectId(Aws::String&& value) { m_quickConnectId = std::move(value); }
    inline void SetQuickConnectId(const char* value) { m_quickConnectId.assign(value); }
    inline CreateQuickConnectResult& WithQuickConnectId(const Aws::String& value) { SetQuickConnectId(value); return *this;}
    inline CreateQuickConnectResult& WithQuickConnectId(Aws::String&& value) { SetQuickConnectId(std::move(value)); return *this;}
    inline CreateQuickConnectResult& WithQuickConnectId(const char* value) { SetQuickConnectId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateQuickConnectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateQuickConnectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateQuickConnectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_quickConnectARN;

    Aws::String m_quickConnectId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
