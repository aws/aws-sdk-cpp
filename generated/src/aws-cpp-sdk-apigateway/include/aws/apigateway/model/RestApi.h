/**
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a REST API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RestApi">AWS
   * API Reference</a></p>
   */
  class RestApi
  {
  public:
    AWS_APIGATEWAY_API RestApi();
    AWS_APIGATEWAY_API RestApi(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API RestApi& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RestApi& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RestApi& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RestApi& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RestApi& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RestApi& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RestApi& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RestApi& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RestApi& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RestApi& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline RestApi& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline RestApi& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
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
    inline RestApi& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline RestApi& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline RestApi& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warningsHasBeenSet = true; m_warnings = value; }
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }
    inline RestApi& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}
    inline RestApi& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}
    inline RestApi& AddWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }
    inline RestApi& AddWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings.push_back(std::move(value)); return *this; }
    inline RestApi& AddWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }
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
    inline RestApi& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}
    inline RestApi& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(std::move(value)); return *this;}
    inline RestApi& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }
    inline RestApi& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(std::move(value)); return *this; }
    inline RestApi& AddBinaryMediaTypes(const char* value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }
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
    inline RestApi& WithMinimumCompressionSize(int value) { SetMinimumCompressionSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the API key for metering requests according to a usage plan.
     * Valid values are: &gt;<code>HEADER</code> to read the API key from the
     * <code>X-API-Key</code> header of a request. <code>AUTHORIZER</code> to read the
     * API key from the <code>UsageIdentifierKey</code> from a custom authorizer.</p>
     */
    inline const ApiKeySourceType& GetApiKeySource() const{ return m_apiKeySource; }
    inline bool ApiKeySourceHasBeenSet() const { return m_apiKeySourceHasBeenSet; }
    inline void SetApiKeySource(const ApiKeySourceType& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = value; }
    inline void SetApiKeySource(ApiKeySourceType&& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = std::move(value); }
    inline RestApi& WithApiKeySource(const ApiKeySourceType& value) { SetApiKeySource(value); return *this;}
    inline RestApi& WithApiKeySource(ApiKeySourceType&& value) { SetApiKeySource(std::move(value)); return *this;}
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
    inline RestApi& WithEndpointConfiguration(const EndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}
    inline RestApi& WithEndpointConfiguration(EndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}
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
    inline RestApi& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline RestApi& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline RestApi& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RestApi& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RestApi& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RestApi& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RestApi& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RestApi& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RestApi& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RestApi& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RestApi& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RestApi& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default <code>https://{api_id}.execute-api.{region}.amazonaws.com</code>
     * endpoint. To require that clients use a custom domain name to invoke your API,
     * disable the default endpoint.</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const{ return m_disableExecuteApiEndpoint; }
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }
    inline RestApi& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API's root resource ID.</p>
     */
    inline const Aws::String& GetRootResourceId() const{ return m_rootResourceId; }
    inline bool RootResourceIdHasBeenSet() const { return m_rootResourceIdHasBeenSet; }
    inline void SetRootResourceId(const Aws::String& value) { m_rootResourceIdHasBeenSet = true; m_rootResourceId = value; }
    inline void SetRootResourceId(Aws::String&& value) { m_rootResourceIdHasBeenSet = true; m_rootResourceId = std::move(value); }
    inline void SetRootResourceId(const char* value) { m_rootResourceIdHasBeenSet = true; m_rootResourceId.assign(value); }
    inline RestApi& WithRootResourceId(const Aws::String& value) { SetRootResourceId(value); return *this;}
    inline RestApi& WithRootResourceId(Aws::String&& value) { SetRootResourceId(std::move(value)); return *this;}
    inline RestApi& WithRootResourceId(const char* value) { SetRootResourceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline RestApi& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RestApi& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RestApi& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_warnings;
    bool m_warningsHasBeenSet = false;

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

    Aws::String m_rootResourceId;
    bool m_rootResourceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
