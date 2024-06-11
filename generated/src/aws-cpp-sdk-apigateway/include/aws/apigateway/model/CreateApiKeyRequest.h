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
    AWS_APIGATEWAY_API CreateApiKeyRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateApiKeyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateApiKeyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateApiKeyRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ApiKey.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateApiKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApiKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApiKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the ApiKey can be used by callers.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
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
    inline bool GetGenerateDistinctId() const{ return m_generateDistinctId; }
    inline bool GenerateDistinctIdHasBeenSet() const { return m_generateDistinctIdHasBeenSet; }
    inline void SetGenerateDistinctId(bool value) { m_generateDistinctIdHasBeenSet = true; m_generateDistinctId = value; }
    inline CreateApiKeyRequest& WithGenerateDistinctId(bool value) { SetGenerateDistinctId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline CreateApiKeyRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CreateApiKeyRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CreateApiKeyRequest& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline const Aws::Vector<StageKey>& GetStageKeys() const{ return m_stageKeys; }
    inline bool StageKeysHasBeenSet() const { return m_stageKeysHasBeenSet; }
    inline void SetStageKeys(const Aws::Vector<StageKey>& value) { m_stageKeysHasBeenSet = true; m_stageKeys = value; }
    inline void SetStageKeys(Aws::Vector<StageKey>&& value) { m_stageKeysHasBeenSet = true; m_stageKeys = std::move(value); }
    inline CreateApiKeyRequest& WithStageKeys(const Aws::Vector<StageKey>& value) { SetStageKeys(value); return *this;}
    inline CreateApiKeyRequest& WithStageKeys(Aws::Vector<StageKey>&& value) { SetStageKeys(std::move(value)); return *this;}
    inline CreateApiKeyRequest& AddStageKeys(const StageKey& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(value); return *this; }
    inline CreateApiKeyRequest& AddStageKeys(StageKey&& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Marketplace customer identifier, when integrating with
     * the Amazon Web Services SaaS Marketplace.</p>
     */
    inline const Aws::String& GetCustomerId() const{ return m_customerId; }
    inline bool CustomerIdHasBeenSet() const { return m_customerIdHasBeenSet; }
    inline void SetCustomerId(const Aws::String& value) { m_customerIdHasBeenSet = true; m_customerId = value; }
    inline void SetCustomerId(Aws::String&& value) { m_customerIdHasBeenSet = true; m_customerId = std::move(value); }
    inline void SetCustomerId(const char* value) { m_customerIdHasBeenSet = true; m_customerId.assign(value); }
    inline CreateApiKeyRequest& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}
    inline CreateApiKeyRequest& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}
    inline CreateApiKeyRequest& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}
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
    inline CreateApiKeyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateApiKeyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApiKeyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateApiKeyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApiKeyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApiKeyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApiKeyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApiKeyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApiKeyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_generateDistinctId;
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
