﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SecurityKey.h>
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
  class ListSecurityKeysResult
  {
  public:
    AWS_CONNECT_API ListSecurityKeysResult();
    AWS_CONNECT_API ListSecurityKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListSecurityKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The security keys.</p>
     */
    inline const Aws::Vector<SecurityKey>& GetSecurityKeys() const{ return m_securityKeys; }
    inline void SetSecurityKeys(const Aws::Vector<SecurityKey>& value) { m_securityKeys = value; }
    inline void SetSecurityKeys(Aws::Vector<SecurityKey>&& value) { m_securityKeys = std::move(value); }
    inline ListSecurityKeysResult& WithSecurityKeys(const Aws::Vector<SecurityKey>& value) { SetSecurityKeys(value); return *this;}
    inline ListSecurityKeysResult& WithSecurityKeys(Aws::Vector<SecurityKey>&& value) { SetSecurityKeys(std::move(value)); return *this;}
    inline ListSecurityKeysResult& AddSecurityKeys(const SecurityKey& value) { m_securityKeys.push_back(value); return *this; }
    inline ListSecurityKeysResult& AddSecurityKeys(SecurityKey&& value) { m_securityKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSecurityKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSecurityKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSecurityKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSecurityKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSecurityKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSecurityKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityKey> m_securityKeys;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
