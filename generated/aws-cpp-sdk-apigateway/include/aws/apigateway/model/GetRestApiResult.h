﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ApiKeySourceType.h>
#include <aws/apigateway/model/EndpointConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a REST API.</p> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Create
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RestApi">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetRestApiResult
  {
  public:
    GetRestApiResult();
    GetRestApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRestApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline GetRestApiResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline GetRestApiResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline GetRestApiResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The API's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The API's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The API's name.</p>
     */
    inline GetRestApiResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline GetRestApiResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The API's name.</p>
     */
    inline GetRestApiResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The API's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The API's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The API's description.</p>
     */
    inline GetRestApiResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline GetRestApiResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The API's description.</p>
     */
    inline GetRestApiResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline GetRestApiResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline GetRestApiResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline GetRestApiResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline GetRestApiResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline GetRestApiResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = std::move(value); }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline GetRestApiResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline GetRestApiResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline GetRestApiResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline GetRestApiResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(std::move(value)); return *this; }

    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline GetRestApiResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }


    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const{ return m_binaryMediaTypes; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { m_binaryMediaTypes = value; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline void SetBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { m_binaryMediaTypes = std::move(value); }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline GetRestApiResult& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline GetRestApiResult& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(std::move(value)); return *this;}

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline GetRestApiResult& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypes.push_back(value); return *this; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline GetRestApiResult& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of binary media types supported by the <a>RestApi</a>. By default,
     * the <a>RestApi</a> supports only UTF-8-encoded text payloads.</p>
     */
    inline GetRestApiResult& AddBinaryMediaTypes(const char* value) { m_binaryMediaTypes.push_back(value); return *this; }


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
    inline void SetMinimumCompressionSize(int value) { m_minimumCompressionSize = value; }

    /**
     * <p>A nullable integer that is used to enable compression (with non-negative
     * between 0 and 10485760 (10M) bytes, inclusive) or disable compression (with a
     * null value) on an API. When compression is enabled, compression or decompression
     * is not applied on the payload if the payload size is smaller than this value.
     * Setting it to zero allows compression for any payload size.</p>
     */
    inline GetRestApiResult& WithMinimumCompressionSize(int value) { SetMinimumCompressionSize(value); return *this;}


    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul></p>
     */
    inline const ApiKeySourceType& GetApiKeySource() const{ return m_apiKeySource; }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul></p>
     */
    inline void SetApiKeySource(const ApiKeySourceType& value) { m_apiKeySource = value; }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul></p>
     */
    inline void SetApiKeySource(ApiKeySourceType&& value) { m_apiKeySource = std::move(value); }

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul></p>
     */
    inline GetRestApiResult& WithApiKeySource(const ApiKeySourceType& value) { SetApiKeySource(value); return *this;}

    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: <ul><li><code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. </li><li><code>AUTHORIZER</code> to
     * read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</li></ul></p>
     */
    inline GetRestApiResult& WithApiKeySource(ApiKeySourceType&& value) { SetApiKeySource(std::move(value)); return *this;}


    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API.</p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API.</p>
     */
    inline void SetEndpointConfiguration(const EndpointConfiguration& value) { m_endpointConfiguration = value; }

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API.</p>
     */
    inline void SetEndpointConfiguration(EndpointConfiguration&& value) { m_endpointConfiguration = std::move(value); }

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API.</p>
     */
    inline GetRestApiResult& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}

    /**
     * <p>The endpoint configuration of this <a>RestApi</a> showing the endpoint types
     * of the API.</p>
     */
    inline GetRestApiResult& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}


    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.</p>
     */
    inline GetRestApiResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.</p>
     */
    inline GetRestApiResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and <a>Method</a> configuration.</p>
     */
    inline GetRestApiResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetRestApiResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To
     * require that clients use a custom domain name to invoke your API, disable the
     * default endpoint.</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const{ return m_disableExecuteApiEndpoint; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To
     * require that clients use a custom domain name to invoke your API, disable the
     * default endpoint.</p>
     */
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpoint = value; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To
     * require that clients use a custom domain name to invoke your API, disable the
     * default endpoint.</p>
     */
    inline GetRestApiResult& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_version;

    Aws::Vector<Aws::String> m_warnings;

    Aws::Vector<Aws::String> m_binaryMediaTypes;

    int m_minimumCompressionSize;

    ApiKeySourceType m_apiKeySource;

    EndpointConfiguration m_endpointConfiguration;

    Aws::String m_policy;

    Aws::Map<Aws::String, Aws::String> m_tags;

    bool m_disableExecuteApiEndpoint;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
