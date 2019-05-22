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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ThrottleSettings.h>
#include <aws/apigateway/model/QuotaSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/ApiStage.h>
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
   * <p>Represents a usage plan than can specify who can assess associated API stages
   * with specified request limits and quotas.</p> <div class="remarks"> <p>In a
   * usage plan, you associate an API by specifying the API's Id and a stage name of
   * the specified API. You add plan customers by adding API keys to the plan. </p>
   * </div> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-api-usage-plans.html">Create
   * and Use Usage Plans</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UsagePlan">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateUsagePlanResult
  {
  public:
    UpdateUsagePlanResult();
    UpdateUsagePlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateUsagePlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline UpdateUsagePlanResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline UpdateUsagePlanResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a <a>UsagePlan</a> resource.</p>
     */
    inline UpdateUsagePlanResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithName(const char* value) { SetName(value); return *this;}


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
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline void SetApiStages(Aws::Vector<ApiStage>&& value) { m_apiStages = std::move(value); }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithApiStages(const Aws::Vector<ApiStage>& value) { SetApiStages(value); return *this;}

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithApiStages(Aws::Vector<ApiStage>&& value) { SetApiStages(std::move(value)); return *this;}

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& AddApiStages(const ApiStage& value) { m_apiStages.push_back(value); return *this; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& AddApiStages(ApiStage&& value) { m_apiStages.push_back(std::move(value)); return *this; }


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
    inline void SetThrottle(ThrottleSettings&& value) { m_throttle = std::move(value); }

    /**
     * <p>The request throttle limits of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithThrottle(const ThrottleSettings& value) { SetThrottle(value); return *this;}

    /**
     * <p>The request throttle limits of a usage plan.</p>
     */
    inline UpdateUsagePlanResult& WithThrottle(ThrottleSettings&& value) { SetThrottle(std::move(value)); return *this;}


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
    inline void SetQuota(QuotaSettings&& value) { m_quota = std::move(value); }

    /**
     * <p>The maximum number of permitted requests per a given unit time interval.</p>
     */
    inline UpdateUsagePlanResult& WithQuota(const QuotaSettings& value) { SetQuota(value); return *this;}

    /**
     * <p>The maximum number of permitted requests per a given unit time interval.</p>
     */
    inline UpdateUsagePlanResult& WithQuota(QuotaSettings&& value) { SetQuota(std::move(value)); return *this;}


    /**
     * <p>The AWS Markeplace product identifier to associate with the usage plan as a
     * SaaS product on AWS Marketplace.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>The AWS Markeplace product identifier to associate with the usage plan as a
     * SaaS product on AWS Marketplace.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCode = value; }

    /**
     * <p>The AWS Markeplace product identifier to associate with the usage plan as a
     * SaaS product on AWS Marketplace.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCode = std::move(value); }

    /**
     * <p>The AWS Markeplace product identifier to associate with the usage plan as a
     * SaaS product on AWS Marketplace.</p>
     */
    inline void SetProductCode(const char* value) { m_productCode.assign(value); }

    /**
     * <p>The AWS Markeplace product identifier to associate with the usage plan as a
     * SaaS product on AWS Marketplace.</p>
     */
    inline UpdateUsagePlanResult& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>The AWS Markeplace product identifier to associate with the usage plan as a
     * SaaS product on AWS Marketplace.</p>
     */
    inline UpdateUsagePlanResult& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>The AWS Markeplace product identifier to associate with the usage plan as a
     * SaaS product on AWS Marketplace.</p>
     */
    inline UpdateUsagePlanResult& WithProductCode(const char* value) { SetProductCode(value); return *this;}


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
    inline UpdateUsagePlanResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UpdateUsagePlanResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<ApiStage> m_apiStages;

    ThrottleSettings m_throttle;

    QuotaSettings m_quota;

    Aws::String m_productCode;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
