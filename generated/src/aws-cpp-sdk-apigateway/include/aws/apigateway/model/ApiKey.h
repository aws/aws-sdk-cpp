/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A resource that can be distributed to callers for executing Method resources
   * that require an API key. API keys can be mapped to any Stage on any RestApi,
   * which indicates that the callers with the API key can make requests to that
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiKey">AWS
   * API Reference</a></p>
   */
  class ApiKey
  {
  public:
    AWS_APIGATEWAY_API ApiKey();
    AWS_APIGATEWAY_API ApiKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API ApiKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the API Key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ApiKey& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ApiKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ApiKey& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the API Key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ApiKey& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ApiKey& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ApiKey& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API Key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ApiKey& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ApiKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ApiKey& WithName(const char* value) { SetName(value); return *this;}
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
    inline ApiKey& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}
    inline ApiKey& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}
    inline ApiKey& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the API Key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ApiKey& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ApiKey& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ApiKey& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ApiKey& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline ApiKey& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline ApiKey& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline ApiKey& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline ApiKey& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Stage resources that are associated with the ApiKey resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStageKeys() const{ return m_stageKeys; }
    inline bool StageKeysHasBeenSet() const { return m_stageKeysHasBeenSet; }
    inline void SetStageKeys(const Aws::Vector<Aws::String>& value) { m_stageKeysHasBeenSet = true; m_stageKeys = value; }
    inline void SetStageKeys(Aws::Vector<Aws::String>&& value) { m_stageKeysHasBeenSet = true; m_stageKeys = std::move(value); }
    inline ApiKey& WithStageKeys(const Aws::Vector<Aws::String>& value) { SetStageKeys(value); return *this;}
    inline ApiKey& WithStageKeys(Aws::Vector<Aws::String>&& value) { SetStageKeys(std::move(value)); return *this;}
    inline ApiKey& AddStageKeys(const Aws::String& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(value); return *this; }
    inline ApiKey& AddStageKeys(Aws::String&& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(std::move(value)); return *this; }
    inline ApiKey& AddStageKeys(const char* value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(value); return *this; }
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
    inline ApiKey& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ApiKey& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ApiKey& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ApiKey& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ApiKey& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ApiKey& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ApiKey& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ApiKey& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ApiKey& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline ApiKey& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ApiKey& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ApiKey& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_customerId;
    bool m_customerIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_stageKeys;
    bool m_stageKeysHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
