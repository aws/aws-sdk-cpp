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
  class AWS_APIGATEWAY_API ApiKey
  {
  public:
    ApiKey();
    ApiKey(const Aws::Utils::Json::JsonValue& jsonValue);
    ApiKey& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline ApiKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline ApiKey& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the API Key.</p>
     */
    inline ApiKey& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The value of the API Key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the API Key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the API Key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the API Key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the API Key.</p>
     */
    inline ApiKey& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the API Key.</p>
     */
    inline ApiKey& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the API Key.</p>
     */
    inline ApiKey& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>The name of the API Key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API Key.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the API Key.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the API Key.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the API Key.</p>
     */
    inline ApiKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API Key.</p>
     */
    inline ApiKey& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API Key.</p>
     */
    inline ApiKey& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The description of the API Key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the API Key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the API Key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the API Key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the API Key.</p>
     */
    inline ApiKey& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API Key.</p>
     */
    inline ApiKey& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API Key.</p>
     */
    inline ApiKey& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the API Key can be used by callers.</p>
     */
    inline ApiKey& WithEnabled(bool value) { SetEnabled(value); return *this;}

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
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline ApiKey& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the API Key was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline ApiKey& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline ApiKey& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>When the API Key was last updated, in ISO 8601 format.</p>
     */
    inline ApiKey& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStageKeys() const{ return m_stageKeys; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline void SetStageKeys(const Aws::Vector<Aws::String>& value) { m_stageKeysHasBeenSet = true; m_stageKeys = value; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline void SetStageKeys(Aws::Vector<Aws::String>&& value) { m_stageKeysHasBeenSet = true; m_stageKeys = value; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline ApiKey& WithStageKeys(const Aws::Vector<Aws::String>& value) { SetStageKeys(value); return *this;}

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline ApiKey& WithStageKeys(Aws::Vector<Aws::String>&& value) { SetStageKeys(value); return *this;}

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline ApiKey& AddStageKeys(const Aws::String& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(value); return *this; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline ApiKey& AddStageKeys(Aws::String&& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(value); return *this; }

    /**
     * <p>A list of <a>Stage</a> resources that are associated with the <a>ApiKey</a>
     * resource.</p>
     */
    inline ApiKey& AddStageKeys(const char* value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(value); return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet;
    Aws::Vector<Aws::String> m_stageKeys;
    bool m_stageKeysHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
