﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ApiKey.h>
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
  class AWS_APPSYNC_API CreateApiKeyResult
  {
  public:
    CreateApiKeyResult();
    CreateApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    ApiKey m_apiKey;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
