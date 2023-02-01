/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>A request to get information about the current ApiKey resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetApiKeyRequest">AWS
   * API Reference</a></p>
   */
  class GetApiKeyRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetApiKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApiKey"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the ApiKey resource.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>The identifier of the ApiKey resource.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>The identifier of the ApiKey resource.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>The identifier of the ApiKey resource.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>The identifier of the ApiKey resource.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>The identifier of the ApiKey resource.</p>
     */
    inline GetApiKeyRequest& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>The identifier of the ApiKey resource.</p>
     */
    inline GetApiKeyRequest& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>The identifier of the ApiKey resource.</p>
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
    inline bool IncludeValueHasBeenSet() const { return m_includeValueHasBeenSet; }

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
    bool m_apiKeyHasBeenSet = false;

    bool m_includeValue;
    bool m_includeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
