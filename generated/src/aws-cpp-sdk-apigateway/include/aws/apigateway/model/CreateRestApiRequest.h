/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ApiKeySourceType.h>
#include <aws/apigateway/model/EndpointConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The POST Request to add a new RestApi resource to your
   * collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRestApiRequest">AWS
   * API Reference</a></p>
   */
  class CreateRestApiRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateRestApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRestApi"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the RestApi.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRestApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRestApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRestApiRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the RestApi.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateRestApiRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateRestApiRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateRestApiRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CreateRestApiRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateRestApiRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateRestApiRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline const Aws::String& GetCloneFrom() const{ return m_cloneFrom; }
    inline bool CloneFromHasBeenSet() const { return m_cloneFromHasBeenSet; }
    inline void SetCloneFrom(const Aws::String& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = value; }
    inline void SetCloneFrom(Aws::String&& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = std::move(value); }
    inline void SetCloneFrom(const char* value) { m_cloneFromHasBeenSet = true; m_cloneFrom.assign(value); }
    inline CreateRestApiRequest& WithCloneFrom(const Aws::String& value) { SetCloneFrom(value); return *this;}
    inline CreateRestApiRequest& WithCloneFrom(Aws::String&& value) { SetCloneFrom(std::move(value)); return *this;}
    inline CreateRestApiRequest& WithCloneFrom(const char* value) { SetCloneFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const{ return m_binaryMediaTypes; }
    inline bool BinaryMediaTypesHasBeenSet() const { return m_binaryMediaTypesHasBeenSet; }
    inline void SetBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = value; }
    inline void SetBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = std::move(value); }
    inline CreateRestApiRequest& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}
    inline CreateRestApiRequest& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(std::move(value)); return *this;}
    inline CreateRestApiRequest& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }
    inline CreateRestApiRequest& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(std::move(value)); return *this; }
    inline CreateRestApiRequest& AddBinaryMediaTypes(const char* value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A nullable integer that is used to enable compression (with non-negative
     * between 0 and 10485760 (10M) bytes, inclusive) or disable compression (with a
     * null value) on an API. When compression is enabled, compression or decompression
     * is not applied on the payload if the payload size is smaller than this value.
     * Setting it to zero allows compression for any payload size.</p>
     */
    inline int GetMinimumCompressionSize() const{ return m_minimumCompressionSize; }
    inline bool MinimumCompressionSizeHasBeenSet() const { return m_minimumCompressionSizeHasBeenSet; }
    inline void SetMinimumCompressionSize(int value) { m_minimumCompressionSizeHasBeenSet = true; m_minimumCompressionSize = value; }
    inline CreateRestApiRequest& WithMinimumCompressionSize(int value) { SetMinimumCompressionSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline const ApiKeySourceType& GetApiKeySource() const{ return m_apiKeySource; }
    inline bool ApiKeySourceHasBeenSet() const { return m_apiKeySourceHasBeenSet; }
    inline void SetApiKeySource(const ApiKeySourceType& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = value; }
    inline void SetApiKeySource(ApiKeySourceType&& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = std::move(value); }
    inline CreateRestApiRequest& WithApiKeySource(const ApiKeySourceType& value) { SetApiKeySource(value); return *this;}
    inline CreateRestApiRequest& WithApiKeySource(ApiKeySourceType&& value) { SetApiKeySource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types of the
     * API. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }
    inline CreateRestApiRequest& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}
    inline CreateRestApiRequest& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline CreateRestApiRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline CreateRestApiRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline CreateRestApiRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRestApiRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateRestApiRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRestApiRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateRestApiRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRestApiRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRestApiRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateRestApiRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRestApiRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRestApiRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default <code>https://{api_id}.execute-api.{region}.amazonaws.com</code>
     * endpoint. To require that clients use a custom domain name to invoke your API,
     * disable the default endpoint</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const{ return m_disableExecuteApiEndpoint; }
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }
    inline CreateRestApiRequest& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_cloneFrom;
    bool m_cloneFromHasBeenSet = false;

    Aws::Vector<Aws::String> m_binaryMediaTypes;
    bool m_binaryMediaTypesHasBeenSet = false;

    int m_minimumCompressionSize;
    bool m_minimumCompressionSizeHasBeenSet = false;

    ApiKeySourceType m_apiKeySource;
    bool m_apiKeySourceHasBeenSet = false;

    EndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_disableExecuteApiEndpoint;
    bool m_disableExecuteApiEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
