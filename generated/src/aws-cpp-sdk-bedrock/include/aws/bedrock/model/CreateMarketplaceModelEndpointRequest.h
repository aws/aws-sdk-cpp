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
    AWS_BEDROCK_API CreateMarketplaceModelEndpointRequest() = default;

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
    inline const Aws::String& GetModelSourceIdentifier() const { return m_modelSourceIdentifier; }
    inline bool ModelSourceIdentifierHasBeenSet() const { return m_modelSourceIdentifierHasBeenSet; }
    template<typename ModelSourceIdentifierT = Aws::String>
    void SetModelSourceIdentifier(ModelSourceIdentifierT&& value) { m_modelSourceIdentifierHasBeenSet = true; m_modelSourceIdentifier = std::forward<ModelSourceIdentifierT>(value); }
    template<typename ModelSourceIdentifierT = Aws::String>
    CreateMarketplaceModelEndpointRequest& WithModelSourceIdentifier(ModelSourceIdentifierT&& value) { SetModelSourceIdentifier(std::forward<ModelSourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the endpoint, including the number and type of
     * instances to use.</p>
     */
    inline const EndpointConfig& GetEndpointConfig() const { return m_endpointConfig; }
    inline bool EndpointConfigHasBeenSet() const { return m_endpointConfigHasBeenSet; }
    template<typename EndpointConfigT = EndpointConfig>
    void SetEndpointConfig(EndpointConfigT&& value) { m_endpointConfigHasBeenSet = true; m_endpointConfig = std::forward<EndpointConfigT>(value); }
    template<typename EndpointConfigT = EndpointConfig>
    CreateMarketplaceModelEndpointRequest& WithEndpointConfig(EndpointConfigT&& value) { SetEndpointConfig(std::forward<EndpointConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you accept the end-user license agreement (EULA) for the
     * model. Set to <code>true</code> to accept the EULA.</p>
     */
    inline bool GetAcceptEula() const { return m_acceptEula; }
    inline bool AcceptEulaHasBeenSet() const { return m_acceptEulaHasBeenSet; }
    inline void SetAcceptEula(bool value) { m_acceptEulaHasBeenSet = true; m_acceptEula = value; }
    inline CreateMarketplaceModelEndpointRequest& WithAcceptEula(bool value) { SetAcceptEula(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint. This name must be unique within your Amazon Web
     * Services account and region.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    CreateMarketplaceModelEndpointRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This token is listed as not required because Amazon
     * Web Services SDKs automatically generate it for you and set this parameter. If
     * you're not using the Amazon Web Services SDK or the CLI, you must provide this
     * token or the action will fail.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateMarketplaceModelEndpointRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to the underlying Amazon SageMaker
     * endpoint. You can use these tags to organize and identify your Amazon Web
     * Services resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMarketplaceModelEndpointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMarketplaceModelEndpointRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelSourceIdentifier;
    bool m_modelSourceIdentifierHasBeenSet = false;

    EndpointConfig m_endpointConfig;
    bool m_endpointConfigHasBeenSet = false;

    bool m_acceptEula{false};
    bool m_acceptEulaHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
