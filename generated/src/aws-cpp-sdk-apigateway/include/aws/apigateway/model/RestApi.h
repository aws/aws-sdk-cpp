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
    AWS_APIGATEWAY_API RestApi() = default;
    AWS_APIGATEWAY_API RestApi(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API RestApi& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API's identifier. This identifier is unique across all of your APIs in
     * API Gateway.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RestApi& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RestApi& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RestApi& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    RestApi& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RestApi& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warning messages reported when <code>failonwarnings</code> is turned on
     * during API import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const { return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    template<typename WarningsT = Aws::Vector<Aws::String>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<Aws::String>>
    RestApi& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = Aws::String>
    RestApi& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of binary media types supported by the RestApi. By default, the
     * RestApi supports only UTF-8-encoded text payloads.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const { return m_binaryMediaTypes; }
    inline bool BinaryMediaTypesHasBeenSet() const { return m_binaryMediaTypesHasBeenSet; }
    template<typename BinaryMediaTypesT = Aws::Vector<Aws::String>>
    void SetBinaryMediaTypes(BinaryMediaTypesT&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = std::forward<BinaryMediaTypesT>(value); }
    template<typename BinaryMediaTypesT = Aws::Vector<Aws::String>>
    RestApi& WithBinaryMediaTypes(BinaryMediaTypesT&& value) { SetBinaryMediaTypes(std::forward<BinaryMediaTypesT>(value)); return *this;}
    template<typename BinaryMediaTypesT = Aws::String>
    RestApi& AddBinaryMediaTypes(BinaryMediaTypesT&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.emplace_back(std::forward<BinaryMediaTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A nullable integer that is used to enable compression (with non-negative
     * between 0 and 10485760 (10M) bytes, inclusive) or disable compression (with a
     * null value) on an API. When compression is enabled, compression or decompression
     * is not applied on the payload if the payload size is smaller than this value.
     * Setting it to zero allows compression for any payload size.</p>
     */
    inline int GetMinimumCompressionSize() const { return m_minimumCompressionSize; }
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
    inline ApiKeySourceType GetApiKeySource() const { return m_apiKeySource; }
    inline bool ApiKeySourceHasBeenSet() const { return m_apiKeySourceHasBeenSet; }
    inline void SetApiKeySource(ApiKeySourceType value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = value; }
    inline RestApi& WithApiKeySource(ApiKeySourceType value) { SetApiKeySource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration of this RestApi showing the endpoint types and IP
     * address types of the API. </p>
     */
    inline const EndpointConfiguration& GetEndpointConfiguration() const { return m_endpointConfiguration; }
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }
    template<typename EndpointConfigurationT = EndpointConfiguration>
    void SetEndpointConfiguration(EndpointConfigurationT&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::forward<EndpointConfigurationT>(value); }
    template<typename EndpointConfigurationT = EndpointConfiguration>
    RestApi& WithEndpointConfiguration(EndpointConfigurationT&& value) { SetEndpointConfiguration(std::forward<EndpointConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A stringified JSON policy document that applies to this RestApi regardless of
     * the caller and Method configuration.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    RestApi& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RestApi& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RestApi& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * <code>execute-api</code> endpoint. By default, clients can invoke your API with
     * the default <code>https://{api_id}.execute-api.{region}.amazonaws.com</code>
     * endpoint. To require that clients use a custom domain name to invoke your API,
     * disable the default endpoint.</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const { return m_disableExecuteApiEndpoint; }
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }
    inline RestApi& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API's root resource ID.</p>
     */
    inline const Aws::String& GetRootResourceId() const { return m_rootResourceId; }
    inline bool RootResourceIdHasBeenSet() const { return m_rootResourceIdHasBeenSet; }
    template<typename RootResourceIdT = Aws::String>
    void SetRootResourceId(RootResourceIdT&& value) { m_rootResourceIdHasBeenSet = true; m_rootResourceId = std::forward<RootResourceIdT>(value); }
    template<typename RootResourceIdT = Aws::String>
    RestApi& WithRootResourceId(RootResourceIdT&& value) { SetRootResourceId(std::forward<RootResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestApi& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::Vector<Aws::String> m_binaryMediaTypes;
    bool m_binaryMediaTypesHasBeenSet = false;

    int m_minimumCompressionSize{0};
    bool m_minimumCompressionSizeHasBeenSet = false;

    ApiKeySourceType m_apiKeySource{ApiKeySourceType::NOT_SET};
    bool m_apiKeySourceHasBeenSet = false;

    EndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_disableExecuteApiEndpoint{false};
    bool m_disableExecuteApiEndpointHasBeenSet = false;

    Aws::String m_rootResourceId;
    bool m_rootResourceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
