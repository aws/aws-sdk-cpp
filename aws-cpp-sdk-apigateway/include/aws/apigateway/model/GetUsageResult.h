﻿/*
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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Represents the usage data of a usage plan.</p> <div class="remarks"/> <div
   * class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-api-usage-plans.html">Create
   * and Use Usage Plans</a>, <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-create-usage-plans-with-console.html#api-gateway-usage-plan-manage-usage">Manage
   * Usage in a Usage Plan</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Usage">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetUsageResult
  {
  public:
    GetUsageResult();
    GetUsageResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUsageResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanId = value; }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanId = value; }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanId.assign(value); }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline GetUsageResult& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline GetUsageResult& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline GetUsageResult& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDate = value; }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDate = value; }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline void SetStartDate(const char* value) { m_startDate.assign(value); }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline GetUsageResult& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline GetUsageResult& WithStartDate(Aws::String&& value) { SetStartDate(value); return *this;}

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline GetUsageResult& WithStartDate(const char* value) { SetStartDate(value); return *this;}

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDate = value; }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDate = value; }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline void SetEndDate(const char* value) { m_endDate.assign(value); }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline GetUsageResult& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline GetUsageResult& WithEndDate(Aws::String&& value) { SetEndDate(value); return *this;}

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline GetUsageResult& WithEndDate(const char* value) { SetEndDate(value); return *this;}

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = value; }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetUsageResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetUsageResult& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetUsageResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>& GetItems() const{ return m_items; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline void SetItems(const Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>& value) { m_items = value; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline void SetItems(Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>&& value) { m_items = value; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& WithItems(const Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>& value) { SetItems(value); return *this;}

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& WithItems(Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>&& value) { SetItems(value); return *this;}

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const Aws::String& key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items[key] = value; return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(Aws::String&& key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items[key] = value; return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const Aws::String& key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items[key] = value; return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(Aws::String&& key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items[key] = value; return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const char* key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items[key] = value; return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline GetUsageResult& AddItems(const char* key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items[key] = value; return *this; }

  private:
    Aws::String m_usagePlanId;
    Aws::String m_startDate;
    Aws::String m_endDate;
    Aws::String m_position;
    Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
