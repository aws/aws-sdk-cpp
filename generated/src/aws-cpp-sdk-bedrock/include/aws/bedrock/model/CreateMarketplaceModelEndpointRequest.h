/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/EndpointConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/Tag.h>
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
  class CreateMarketplaceModelEndpointRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateMarketplaceModelEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMarketplaceModelEndpoint"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the model from Amazon Bedrock Marketplace that you want to deploy
     * to the endpoint.</p>
     */
    inline const Aws::String& GetModelSourceIdentifier() const{ return m_modelSourceIdentifier; }
    inline bool ModelSourceIdentifierHasBeenSet() const { return m_modelSourceIdentifierHasBeenSet; }
    inline void SetModelSourceIdentifier(const Aws::String& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = value; }
    inline void SetModelSourceIdentifier(Aws::String&& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = std::move(value); }
    inline void SetModelSourceIdentifier(const char* value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier.assign(value); }
    inline CreateMarketplaceModelEndpointRequest& WithModelSourceIdentifier(const Aws::String& value) { SetModelSourceIdentifier(value); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithModelSourceIdentifier(Aws::String&& value) { SetModelSourceIdentifier(std::move(value)); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithModelSourceIdentifier(const char* value) { SetModelSourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the endpoint, including the number and type of
     * instances to use.</p>
     */
    inline const EndpointConfig& GetEndpointConfig() const{ return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    inline void SetEndpointConfig(const EndpointConfig& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = value; }
    inline void SetEndpointConfig(EndpointConfig&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::move(value); }
    inline CreateMarketplaceModelEndpointRequest& WithEndpointConfig(const EndpointConfig& value) { SetEndpointConfig(value); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithEndpointConfig(EndpointConfig&& value) { SetEndpointConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you accept the end-user license agreement (EULA) for the
     * model. Set to <code>true</code> to accept the EULA.</p>
     */
    inline bool GetAcceptEula() const{ return m_acceptEula; }
    inline bool AcceptEulaHasBeenSet() const { return m_acceptEulaHasBeenSet; }
    inline void SetAcceptEula(bool value) { m_acceptEulaHasBeenSet = true; m_acceptEula = value; }
    inline CreateMarketplaceModelEndpointRequest& WithAcceptEula(bool value) { SetAcceptEula(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint. This name must be unique within your Amazon Web
     * Services account and region.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline CreateMarketplaceModelEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
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
    inline CreateMarketplaceModelEndpointRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to the underlying Amazon SageMaker
     * endpoint. You can use these tags to organize and identify your Amazon Web
     * Services resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMarketplaceModelEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateMarketplaceModelEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMarketplaceModelEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateMarketplaceModelEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelSourceIdentifier;
    bool m_modelSourceIdentifierHasBeenSet = false;

    EndpointConfig m_endpointConfig;
    bool m_endpointConfigHasBeenSet = false;

    bool m_acceptEula;
    bool m_acceptEulaHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
