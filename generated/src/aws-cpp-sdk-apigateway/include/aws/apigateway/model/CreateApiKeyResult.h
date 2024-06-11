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
   * <p>A resource that can be distributed to callers for executing Method resources
   * that require an API key. API keys can be mapped to any Stage on any RestApi,
   * which indicates that the callers with the API key can make requests to that
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiKey">AWS
   * API Reference</a></p>
   */
  class CreateApiKeyResult
  {
  public:
    AWS_APIGATEWAY_API CreateApiKeyResult();
    AWS_APIGATEWAY_API CreateApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API CreateApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the API Key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateApiKeyResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateApiKeyResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateApiKeyResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the API Key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline void SetValue(const Aws::String& value) { m_value = value; }
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }
    inline void SetValue(const char* value) { m_value.assign(value); }
    inline CreateApiKeyResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CreateApiKeyResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CreateApiKeyResult& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API Key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateApiKeyResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateApiKeyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateApiKeyResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services Marketplace customer identifier, when integrating with
     * the Amazon Web Services SaaS Marketplace.</p>
     */
    inline const Aws::String& GetCustomerId() const{ return m_customerId; }
    inline void SetCustomerId(const Aws::String& value) { m_customerId = value; }
    inline void SetCustomerId(Aws::String&& value) { m_customerId = std::move(value); }
    inline void SetCustomerId(const char* value) { m_customerId.assign(value); }
    inline CreateApiKeyResult& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}
    inline CreateApiKeyResult& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}
    inline CreateApiKeyResult& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the API Key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateApiKeyResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateApiKeyResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateApiKeyResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline void SetEnabled(bool value) { m_enabled = value; }
    inline CreateApiKeyResult& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API Key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline CreateApiKeyResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CreateApiKeyResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API Key was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }
    inline CreateApiKeyResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}
    inline CreateApiKeyResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Stage resources that are associated with the ApiKey resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStageKeys() const{ return m_stageKeys; }
    inline void SetStageKeys(const Aws::Vector<Aws::String>& value) { m_stageKeys = value; }
    inline void SetStageKeys(Aws::Vector<Aws::String>&& value) { m_stageKeys = std::move(value); }
    inline CreateApiKeyResult& WithStageKeys(const Aws::Vector<Aws::String>& value) { SetStageKeys(value); return *this;}
    inline CreateApiKeyResult& WithStageKeys(Aws::Vector<Aws::String>&& value) { SetStageKeys(std::move(value)); return *this;}
    inline CreateApiKeyResult& AddStageKeys(const Aws::String& value) { m_stageKeys.push_back(value); return *this; }
    inline CreateApiKeyResult& AddStageKeys(Aws::String&& value) { m_stageKeys.push_back(std::move(value)); return *this; }
    inline CreateApiKeyResult& AddStageKeys(const char* value) { m_stageKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateApiKeyResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateApiKeyResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApiKeyResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateApiKeyResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApiKeyResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApiKeyResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateApiKeyResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateApiKeyResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateApiKeyResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateApiKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateApiKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateApiKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
