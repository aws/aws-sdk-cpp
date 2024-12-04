/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EndpointConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class UpdateMarketplaceModelEndpointRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API UpdateMarketplaceModelEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMarketplaceModelEndpoint"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint you want to update.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }
    inline UpdateMarketplaceModelEndpointRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline UpdateMarketplaceModelEndpointRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline UpdateMarketplaceModelEndpointRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new configuration for the endpoint, including the number and type of
     * instances to use.</p>
     */
    inline const EndpointConfig& GetEndpointConfig() const{ return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    inline void SetEndpointConfig(const EndpointConfig& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = value; }
    inline void SetEndpointConfig(EndpointConfig&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::move(value); }
    inline UpdateMarketplaceModelEndpointRequest& WithEndpointConfig(const EndpointConfig& value) { SetEndpointConfig(value); return *this;}
    inline UpdateMarketplaceModelEndpointRequest& WithEndpointConfig(EndpointConfig&& value) { SetEndpointConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This token is listed as not required because Amazon
     * Web Services SDKs automatically generate it for you and set this parameter. If
     * you're not using the Amazon Web Services SDK or the CLI, you must provide this
     * token or the action will fail.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline UpdateMarketplaceModelEndpointRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline UpdateMarketplaceModelEndpointRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline UpdateMarketplaceModelEndpointRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    EndpointConfig m_endpointConfig;
    bool m_endpointConfigHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
