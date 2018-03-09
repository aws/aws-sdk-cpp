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
  class AWS_APPSYNC_API UpdateApiKeyResult
  {
  public:
    UpdateApiKeyResult();
    UpdateApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateApiKeyResult& WithApiKey(const ApiKey& value) { SetApiKey(value); return *this;}

    /**
     * <p>The API key.</p>
     */
    inline UpdateApiKeyResult& WithApiKey(ApiKey&& value) { SetApiKey(std::move(value)); return *this;}

  private:

    ApiKey m_apiKey;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
