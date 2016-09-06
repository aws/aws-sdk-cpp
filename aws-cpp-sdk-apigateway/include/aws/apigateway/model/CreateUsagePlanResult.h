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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ThrottleSettings.h>
#include <aws/apigateway/model/QuotaSettings.h>
#include <aws/apigateway/model/ApiStage.h>

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
   * <p>Represents a usage plan than can specify who can assess associated API stages
   * with specified request limits and quotas.</p> <div class="remarks"> <p>In a
   * usage plan, you associate an API by specifying the API's Id and a stage name of
   * the specified API. You add plan customers by adding API keys to the plan. </p>
   * </div> <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-api-usage-plans.html">Create
   * and Use Usage Plans</a> </div>
   */
  class AWS_APIGATEWAY_API CreateUsagePlanResult
  {
  public:
    CreateUsagePlanResult();
    CreateUsagePlanResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateUsagePlanResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = value; }

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline CreateUsagePlanResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline CreateUsagePlanResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline CreateUsagePlanResult& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of a usage plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The description of a usage plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const{ return m_apiStages; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline void SetApiStages(const Aws::Vector<ApiStage>& value) { m_apiStages = value; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline void SetApiStages(Aws::Vector<ApiStage>&& value) { m_apiStages = value; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithApiStages(const Aws::Vector<ApiStage>& value) { SetApiStages(value); return *this;}

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithApiStages(Aws::Vector<ApiStage>&& value) { SetApiStages(value); return *this;}

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline CreateUsagePlanResult& AddApiStages(const ApiStage& value) { m_apiStages.push_back(value); return *this; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline CreateUsagePlanResult& AddApiStages(ApiStage&& value) { m_apiStages.push_back(value); return *this; }

    /**
     * <p>The request throttle limits of a usage plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const{ return m_throttle; }

    /**
     * <p>The request throttle limits of a usage plan.</p>
     */
    inline void SetThrottle(const ThrottleSettings& value) { m_throttle = value; }

    /**
     * <p>The request throttle limits of a usage plan.</p>
     */
    inline void SetThrottle(ThrottleSettings&& value) { m_throttle = value; }

    /**
     * <p>The request throttle limits of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithThrottle(const ThrottleSettings& value) { SetThrottle(value); return *this;}

    /**
     * <p>The request throttle limits of a usage plan.</p>
     */
    inline CreateUsagePlanResult& WithThrottle(ThrottleSettings&& value) { SetThrottle(value); return *this;}

    /**
     * <p>The maximum number of permitted requests per a given unit time interval.</p>
     */
    inline const QuotaSettings& GetQuota() const{ return m_quota; }

    /**
     * <p>The maximum number of permitted requests per a given unit time interval.</p>
     */
    inline void SetQuota(const QuotaSettings& value) { m_quota = value; }

    /**
     * <p>The maximum number of permitted requests per a given unit time interval.</p>
     */
    inline void SetQuota(QuotaSettings&& value) { m_quota = value; }

    /**
     * <p>The maximum number of permitted requests per a given unit time interval.</p>
     */
    inline CreateUsagePlanResult& WithQuota(const QuotaSettings& value) { SetQuota(value); return *this;}

    /**
     * <p>The maximum number of permitted requests per a given unit time interval.</p>
     */
    inline CreateUsagePlanResult& WithQuota(QuotaSettings&& value) { SetQuota(value); return *this;}

  private:
    Aws::String m_id;
    Aws::String m_name;
    Aws::String m_description;
    Aws::Vector<ApiStage> m_apiStages;
    ThrottleSettings m_throttle;
    QuotaSettings m_quota;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
