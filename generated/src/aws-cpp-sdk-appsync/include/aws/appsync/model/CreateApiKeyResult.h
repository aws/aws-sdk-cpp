/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ApiKey.h>
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
  class CreateApiKeyResult
  {
  public:
    AWS_APPSYNC_API CreateApiKeyResult();
    AWS_APPSYNC_API CreateApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API CreateApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The API key.</p>
     */
    inline const ApiKey& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The API key.</p>
     */
    inline void SetApiKey(const ApiKey& value) { m_apiKey = value; }

    /**
     * <p>The API key.</p>
     */
    inline void SetApiKey(ApiKey&& value) { m_apiKey = std::move(value); }

    /**
     * <p>The API key.</p>
     */
    inline CreateApiKeyResult& WithApiKey(const ApiKey& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key.</p>
     */
    inline CreateApiKeyResult& WithApiKey(ApiKey&& value) { SetApiKey(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateApiKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateApiKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateApiKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ApiKey m_apiKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
