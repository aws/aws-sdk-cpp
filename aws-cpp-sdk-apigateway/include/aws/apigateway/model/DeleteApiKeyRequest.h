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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to delete the <a>ApiKey</a> resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteApiKeyRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API DeleteApiKeyRequest : public APIGatewayRequest
  {
  public:
    DeleteApiKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApiKey"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline DeleteApiKeyRequest& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline DeleteApiKeyRequest& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the <a>ApiKey</a> resource to be deleted.</p>
     */
    inline DeleteApiKeyRequest& WithApiKey(const char* value) { SetApiKey(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
