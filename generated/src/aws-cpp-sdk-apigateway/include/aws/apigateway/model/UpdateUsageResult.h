/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the usage data of a usage plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Usage">AWS
   * API Reference</a></p>
   */
  class UpdateUsageResult
  {
  public:
    AWS_APIGATEWAY_API UpdateUsageResult();
    AWS_APIGATEWAY_API UpdateUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanId = std::move(value); }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanId.assign(value); }

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline UpdateUsageResult& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline UpdateUsageResult& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}

    /**
     * <p>The plan Id associated with this usage data.</p>
     */
    inline UpdateUsageResult& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}


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
    inline void SetStartDate(Aws::String&& value) { m_startDate = std::move(value); }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline void SetStartDate(const char* value) { m_startDate.assign(value); }

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline UpdateUsageResult& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline UpdateUsageResult& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The starting date of the usage data.</p>
     */
    inline UpdateUsageResult& WithStartDate(const char* value) { SetStartDate(value); return *this;}


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
    inline void SetEndDate(Aws::String&& value) { m_endDate = std::move(value); }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline void SetEndDate(const char* value) { m_endDate.assign(value); }

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline UpdateUsageResult& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline UpdateUsageResult& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The ending date of the usage data.</p>
     */
    inline UpdateUsageResult& WithEndDate(const char* value) { SetEndDate(value); return *this;}


    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline UpdateUsageResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline UpdateUsageResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    
    inline UpdateUsageResult& WithPosition(const char* value) { SetPosition(value); return *this;}


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
    inline void SetItems(Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>&& value) { m_items = std::move(value); }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& WithItems(const Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>& value) { SetItems(value); return *this;}

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& WithItems(Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& AddItems(const Aws::String& key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items.emplace(key, value); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& AddItems(Aws::String&& key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items.emplace(std::move(key), value); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& AddItems(const Aws::String& key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& AddItems(Aws::String&& key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& AddItems(const char* key, Aws::Vector<Aws::Vector<long long>>&& value) { m_items.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The usage data, as daily logs of used and remaining quotas, over the
     * specified time interval indexed over the API keys in a usage plan. For example,
     * <code>{..., "values" : { "{api_key}" : [ [0, 100], [10, 90], [100, 10]]}</code>,
     * where <code>{api_key}</code> stands for an API key value and the daily log entry
     * is of the format <code>[used quota, remaining quota]</code>.</p>
     */
    inline UpdateUsageResult& AddItems(const char* key, const Aws::Vector<Aws::Vector<long long>>& value) { m_items.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_usagePlanId;

    Aws::String m_startDate;

    Aws::String m_endDate;

    Aws::String m_position;

    Aws::Map<Aws::String, Aws::Vector<Aws::Vector<long long>>> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
