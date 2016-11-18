/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to get information about the current <a>ApiKey</a> resource.</p>
   */
  class AWS_APIGATEWAY_API GetApiKeyRequest : public APIGatewayRequest
  {
  public:
    GetApiKeyRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The identifier of the <a>ApiKey</a> resource.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The identifier of the <a>ApiKey</a> resource.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The identifier of the <a>ApiKey</a> resource.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The identifier of the <a>ApiKey</a> resource.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The identifier of the <a>ApiKey</a> resource.</p>
     */
    inline GetApiKeyRequest& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The identifier of the <a>ApiKey</a> resource.</p>
     */
    inline GetApiKeyRequest& WithApiKey(Aws::String&& value) { SetApiKey(value); return *this;}

    /**
     * <p>The identifier of the <a>ApiKey</a> resource.</p>
     */
    inline GetApiKeyRequest& WithApiKey(const char* value) { SetApiKey(value); return *this;}

    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains the key value.</p>
     */
    inline bool GetIncludeValue() const{ return m_includeValue; }

    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains the key value.</p>
     */
    inline void SetIncludeValue(bool value) { m_includeValueHasBeenSet = true; m_includeValue = value; }

    /**
     * <p>A boolean flag to specify whether (<code>true</code>) or not
     * (<code>false</code>) the result contains the key value.</p>
     */
    inline GetApiKeyRequest& WithIncludeValue(bool value) { SetIncludeValue(value); return *this;}

  private:
    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet;
    bool m_includeValue;
    bool m_includeValueHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
