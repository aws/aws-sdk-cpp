/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/StageKey.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to create an ApiKey resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateApiKeyRequest">AWS
   * API Reference</a></p>
   */
  class CreateApiKeyRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateApiKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApiKey"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ApiKey.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApiKeyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ApiKey.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApiKeyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the ApiKey can be used by callers.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateApiKeyRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) the key
     * identifier is distinct from the created API key value. This parameter is
     * deprecated and should not be used.</p>
     */
    inline bool GetGenerateDistinctId() const { return m_generateDistinctId; }
    inline bool GenerateDistinctIdHasBeenSet() const { return m_generateDistinctIdHasBeenSet; }
    inline void SetGenerateDistinctId(bool value) { m_generateDistinctIdHasBeenSet = true; m_generateDistinctId = value; }
    inline CreateApiKeyRequest& WithGenerateDistinctId(bool value) { SetGenerateDistinctId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    CreateApiKeyRequest& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline const Aws::Vector<StageKey>& GetStageKeys() const { return m_stageKeys; }
    inline bool StageKeysHasBeenSet() const { return m_stageKeysHasBeenSet; }
    template<typename StageKeysT = Aws::Vector<StageKey>>
    void SetStageKeys(StageKeysT&& value) { m_stageKeysHasBeenSet = true; m_stageKeys = std::forward<StageKeysT>(value); }
    template<typename StageKeysT = Aws::Vector<StageKey>>
    CreateApiKeyRequest& WithStageKeys(StageKeysT&& value) { SetStageKeys(std::forward<StageKeysT>(value)); return *this;}
    template<typename StageKeysT = StageKey>
    CreateApiKeyRequest& AddStageKeys(StageKeysT&& value) { m_stageKeysHasBeenSet = true; m_stageKeys.emplace_back(std::forward<StageKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Marketplace customer identifier, when integrating with
     * the Amazon Web Services SaaS Marketplace.</p>
     */
    inline const Aws::String& GetCustomerId() const { return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    template<typename CustomerIdT = Aws::String>
    void SetCustomerId(CustomerIdT&& value) { m_customerIdHasBeenSet = true; m_customerId = std::forward<CustomerIdT>(value); }
    template<typename CustomerIdT = Aws::String>
    CreateApiKeyRequest& WithCustomerId(CustomerIdT&& value) { SetCustomerId(std::forward<CustomerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateApiKeyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateApiKeyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_generateDistinctId{false};
    bool m_generateDistinctIdHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<StageKey> m_stageKeys;
    bool m_stageKeysHasBeenSet = false;

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
