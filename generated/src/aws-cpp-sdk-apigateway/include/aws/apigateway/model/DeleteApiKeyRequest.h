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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to delete the ApiKey resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteApiKeyRequest">AWS
   * API Reference</a></p>
   */
  class DeleteApiKeyRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API DeleteApiKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApiKey"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the ApiKey resource to be deleted.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    DeleteApiKeyRequest& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
