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


    /**
     * <p>The name of the RestApi.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the RestApi.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the RestApi.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the RestApi.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the RestApi.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the RestApi.</p>
     */
    inline CreateRestApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the RestApi.</p>
     */
    inline CreateRestApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the RestApi.</p>
     */
    inline CreateRestApiRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the RestApi.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the RestApi.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the RestApi.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the RestApi.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the RestApi.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the RestApi.</p>
     */
    inline CreateRestApiRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the RestApi.</p>
     */
    inline CreateRestApiRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the RestApi.</p>
     */
    inline CreateRestApiRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateRestApiRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateRestApiRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateRestApiRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline const Aws::String& GetCloneFrom() const{ return m_cloneFrom; }

    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline bool CloneFromHasBeenSet() const { return m_cloneFromHasBeenSet; }

    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline void SetCloneFrom(const Aws::String& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = value; }

    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline void SetCloneFrom(Aws::String&& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = std::move(value); }

    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline void SetCloneFrom(const char* value) { m_cloneFromHasBeenSet = true; m_cloneFrom.assign(value); }

    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(const Aws::String& value) { SetCloneFrom(value); return *this;}

    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(Aws::String&& value) { SetCloneFrom(std::move(value)); return *this;}

    /**
     * <p>The ID of the RestApi that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(const char* value) { SetCloneFrom(value); return *this;}


    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const{ return m_binaryMediaTypes; }

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline bool BinaryMediaTypesHasBeenSet() const { return m_binaryMediaTypesHasBeenSet; }

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = value; }

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = std::move(value); }

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(std::move(value)); return *this;}

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& AddBinaryMediaTypes(const char* value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }


    /**
     * <p>A nullable integer that is used to enable compression (with non-negative
     * between 0 and 10485760 (10M) bytes, inclusive) or disable compression (with a
     * null value) on an API. When compression is enabled, compression or decompression
     * is not applied on the payload if the payload size is smaller than this value.
     * Setting it to zero allows compression for any payload size.</p>
     */
    inline int GetMinimumCompressionSize() const{ return m_minimumCompressionSize; }

    /**
     * <p>A nullable integer that is used to enable compression (with non-negative
     * between 0 and 10485760 (10M) bytes, inclusive) or disable compression (with a
     * null value) on an API. When compression is enabled, compression or decompression
     * is not applied on the payload if the payload size is smaller than this value.
     * Setting it to zero allows compression for any payload size.</p>
     */
    inline bool MinimumCompressionSizeHasBeenSet() const { return m_minimumCompressionSizeHasBeenSet; }

    /**
     * <p>A nullable integer that is used to enable compression (with non-negative
     * between 0 and 10485760 (10M) bytes, inclusive) or disable compression (with a
     * null value) on an API. When compression is enabled, compression or decompression
     * is not applied on the payload if the payload size is smaller than this value.
     * Setting it to zero allows compression for any payload size.</p>
     */
    inline void SetMinimumCompressionSize(int value) { m_minimumCompressionSizeHasBeenSet = true; m_minimumCompressionSize = value; }

    /**
     * <p>A nullable integer that is used to enable compression (with non-negative
     * between 0 and 10485760 (10M) bytes, inclusive) or disable compression (with a
     * null value) on an API. When compression is enabled, compression or decompression
     * is not applied on the payload if the payload size is smaller than this value.
     * Setting it to zero allows compression for any payload size.</p>
     */
    inline CreateRestApiRequest& WithMinimumCompressionSize(int value) { SetMinimumCompressionSize(value); return *this;}


    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline const ApiKeySourceType& GetApiKeySource() const{ return m_apiKeySource; }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline bool ApiKeySourceHasBeenSet() const { return m_apiKeySourceHasBeenSet; }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline void SetApiKeySource(const ApiKeySourceType& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = value; }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline void SetApiKeySource(ApiKeySourceType&& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = std::move(value); }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline CreateRestApiRequest& WithApiKeySource(const ApiKeySourceType& value) { SetApiKeySource(value); return *this;}

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline CreateRestApiRequest& WithApiKeySource(ApiKeySourceType&& value) { SetApiKeySource(std::move(value)); return *this;}


    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types of the
     * API. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }

    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types of the
     * API. </p>
     */
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }

    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types of the
     * API. </p>
     */
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }

    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types of the
     * API. </p>
     */
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }

    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types of the
     * API. </p>
     */
    inline CreateRestApiRequest& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}

    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types of the
     * API. </p>
     */
    inline CreateRestApiRequest& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}


    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline CreateRestApiRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline CreateRestApiRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline CreateRestApiRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline CreateRestApiRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default <code>https://{api_id}.execute-api.{region}.amazonaws.com</code>
     * endpoint. To require that clients use a custom domain name to invoke your API,
     * disable the default endpoint</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const{ return m_disableExecuteApiEndpoint; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default <code>https://{api_id}.execute-api.{region}.amazonaws.com</code>
     * endpoint. To require that clients use a custom domain name to invoke your API,
     * disable the default endpoint</p>
     */
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default <code>https://{api_id}.execute-api.{region}.amazonaws.com</code>
     * endpoint. To require that clients use a custom domain name to invoke your API,
     * disable the default endpoint</p>
     */
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default <code>https://{api_id}.execute-api.{region}.amazonaws.com</code>
     * endpoint. To require that clients use a custom domain name to invoke your API,
     * disable the default endpoint</p>
     */
    inline CreateRestApiRequest& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}

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
