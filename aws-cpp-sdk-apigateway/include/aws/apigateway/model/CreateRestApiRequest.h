﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ApiKeySourceType.h>
#include <aws/apigateway/model/EndpointConfiguration.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The POST Request to add a new <a>RestApi</a> resource to your
   * collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateRestApiRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateRestApiRequest : public APIGatewayRequest
  {
  public:
    CreateRestApiRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRestApi"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The name of the <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>[Required] The name of the <a>RestApi</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>[Required] The name of the <a>RestApi</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>[Required] The name of the <a>RestApi</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>[Required] The name of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>[Required] The name of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the <a>RestApi</a>.</p>
     */
    inline CreateRestApiRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

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
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline const Aws::String& GetCloneFrom() const{ return m_cloneFrom; }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline void SetCloneFrom(const Aws::String& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = value; }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline void SetCloneFrom(Aws::String&& value) { m_cloneFromHasBeenSet = true; m_cloneFrom = std::move(value); }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline void SetCloneFrom(const char* value) { m_cloneFromHasBeenSet = true; m_cloneFrom.assign(value); }

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(const Aws::String& value) { SetCloneFrom(value); return *this;}

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(Aws::String&& value) { SetCloneFrom(std::move(value)); return *this;}

    /**
     * <p>The ID of the <a>RestApi</a> that you want to clone from.</p>
     */
    inline CreateRestApiRequest& WithCloneFrom(const char* value) { SetCloneFrom(value); return *this;}


    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const{ return m_binaryMediaTypes; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = value; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = std::move(value); }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(std::move(value)); return *this;}

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline CreateRestApiRequest& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
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
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul> </p>
     */
    inline const ApiKeySourceType& GetApiKeySource() const{ return m_apiKeySource; }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul> </p>
     */
    inline void SetApiKeySource(const ApiKeySourceType& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = value; }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul> </p>
     */
    inline void SetApiKeySource(ApiKeySourceType&& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = std::move(value); }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul> </p>
     */
    inline CreateRestApiRequest& WithApiKeySource(const ApiKeySourceType& value) { SetApiKeySource(value); return *this;}

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul> </p>
     */
    inline CreateRestApiRequest& WithApiKeySource(ApiKeySourceType&& value) { SetApiKeySource(std::move(value)); return *this;}


    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API. </p>
     */
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API. </p>
     */
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API. </p>
     */
    inline CreateRestApiRequest& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API. </p>
     */
    inline CreateRestApiRequest& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}


    /**
     * A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.
     */
    inline CreateRestApiRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.
     */
    inline CreateRestApiRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.
     */
    inline CreateRestApiRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_cloneFrom;
    bool m_cloneFromHasBeenSet;

    Aws::Vector<Aws::String> m_binaryMediaTypes;
    bool m_binaryMediaTypesHasBeenSet;

    int m_minimumCompressionSize;
    bool m_minimumCompressionSizeHasBeenSet;

    ApiKeySourceType m_apiKeySource;
    bool m_apiKeySourceHasBeenSet;

    EndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
