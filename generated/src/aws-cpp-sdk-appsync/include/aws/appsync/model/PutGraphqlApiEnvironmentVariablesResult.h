﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppSync
{
namespace Model
{
  class PutGraphqlApiEnvironmentVariablesResult
  {
  public:
    AWS_APPSYNC_API PutGraphqlApiEnvironmentVariablesResult();
    AWS_APPSYNC_API PutGraphqlApiEnvironmentVariablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API PutGraphqlApiEnvironmentVariablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The payload containing each environmental variable in the <code>"key" :
     * "value"</code> format.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariables = std::move(value); }
    inline PutGraphqlApiEnvironmentVariablesResult& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline PutGraphqlApiEnvironmentVariablesResult& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariables.emplace(key, value); return *this; }
    inline PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline PutGraphqlApiEnvironmentVariablesResult& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutGraphqlApiEnvironmentVariablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutGraphqlApiEnvironmentVariablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutGraphqlApiEnvironmentVariablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
