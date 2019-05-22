/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A resource that can be distributed to callers for executing <a>Method</a>
   * resources that require an API key. API keys can be mapped to any <a>Stage</a> on
   * any <a>RestApi</a>, which indicates that the callers with the API key can make
   * requests to that stage.</p> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-api-keys.html">Use
   * API Keys</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiKey">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetApiKeyResult
  {
  public:
    GetApiKeyResult();
    GetApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the API Key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline GetApiKeyResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline GetApiKeyResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline GetApiKeyResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The value of the API Key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the API Key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_value = value; }

    /**
     * <p>The value of the API Key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }

    /**
     * <p>The value of the API Key.</p>
     */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /**
     * <p>The value of the API Key.</p>
     */
    inline GetApiKeyResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the API Key.</p>
     */
    inline GetApiKeyResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the API Key.</p>
     */
    inline GetApiKeyResult& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The name of the API Key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API Key.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the API Key.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the API Key.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the API Key.</p>
     */
    inline GetApiKeyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API Key.</p>
     */
    inline GetApiKeyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API Key.</p>
     */
    inline GetApiKeyResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline const Aws::String& GetCustomerId() const{ return m_customerId; }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline void SetCustomerId(const Aws::String& value) { m_customerId = value; }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline void SetCustomerId(Aws::String&& value) { m_customerId = std::move(value); }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline void SetCustomerId(const char* value) { m_customerId.assign(value); }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline GetApiKeyResult& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline GetApiKeyResult& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline GetApiKeyResult& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}


    /**
     * <p>The description of the API Key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the API Key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the API Key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the API Key.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the API Key.</p>
     */
    inline GetApiKeyResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API Key.</p>
     */
    inline GetApiKeyResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the API Key.</p>
     */
    inline GetApiKeyResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline GetApiKeyResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline GetApiKeyResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline GetApiKeyResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline GetApiKeyResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline GetApiKeyResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStageKeys() const{ return m_stageKeys; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline void SetStageKeys(const Aws::Vector<Aws::String>& value) { m_stageKeys = value; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline void SetStageKeys(Aws::Vector<Aws::String>&& value) { m_stageKeys = std::move(value); }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline GetApiKeyResult& WithStageKeys(const Aws::Vector<Aws::String>& value) { SetStageKeys(value); return *this;}

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline GetApiKeyResult& WithStageKeys(Aws::Vector<Aws::String>&& value) { SetStageKeys(std::move(value)); return *this;}

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline GetApiKeyResult& AddStageKeys(const Aws::String& value) { m_stageKeys.push_back(value); return *this; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline GetApiKeyResult& AddStageKeys(Aws::String&& value) { m_stageKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline GetApiKeyResult& AddStageKeys(const char* value) { m_stageKeys.push_back(value); return *this; }


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
    inline GetApiKeyResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline GetApiKeyResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;

    Aws::String m_value;

    Aws::String m_name;

    Aws::String m_customerId;

    Aws::String m_description;

    bool m_enabled;

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Vector<Aws::String> m_stageKeys;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
