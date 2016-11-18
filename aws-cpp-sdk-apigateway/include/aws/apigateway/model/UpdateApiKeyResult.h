/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-api-keys.html">Use
   * API Keys</a> </div>
   */
  class AWS_APIGATEWAY_API UpdateApiKeyResult
  {
  public:
    UpdateApiKeyResult();
    UpdateApiKeyResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateApiKeyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetId(Aws::String&& value) { m_id = value; }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithId(const char* value) { SetId(value); return *this;}

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
    inline void SetValue(Aws::String&& value) { m_value = value; }

    /**
     * <p>The value of the API Key.</p>
     */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /**
     * <p>The value of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithValue(const char* value) { SetValue(value); return *this;}

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
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>The name of the API Key.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithName(const char* value) { SetName(value); return *this;}

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
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The description of the API Key.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API Key.</p>
     */
    inline UpdateApiKeyResult& WithDescription(const char* value) { SetDescription(value); return *this;}

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
    inline UpdateApiKeyResult& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = value; }

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateApiKeyResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline UpdateApiKeyResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = value; }

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline UpdateApiKeyResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline UpdateApiKeyResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(value); return *this;}

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
    inline void SetStageKeys(Aws::Vector<Aws::String>&& value) { m_stageKeys = value; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline UpdateApiKeyResult& WithStageKeys(const Aws::Vector<Aws::String>& value) { SetStageKeys(value); return *this;}

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline UpdateApiKeyResult& WithStageKeys(Aws::Vector<Aws::String>&& value) { SetStageKeys(value); return *this;}

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline UpdateApiKeyResult& AddStageKeys(const Aws::String& value) { m_stageKeys.push_back(value); return *this; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline UpdateApiKeyResult& AddStageKeys(Aws::String&& value) { m_stageKeys.push_back(value); return *this; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline UpdateApiKeyResult& AddStageKeys(const char* value) { m_stageKeys.push_back(value); return *this; }

  private:
    Aws::String m_id;
    Aws::String m_value;
    Aws::String m_name;
    Aws::String m_description;
    bool m_enabled;
    Aws::Utils::DateTime m_createdDate;
    Aws::Utils::DateTime m_lastUpdatedDate;
    Aws::Vector<Aws::String> m_stageKeys;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
