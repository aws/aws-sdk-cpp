/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents a usage plan used to specify who can assess associated API stages.
   * Optionally, target request rate and quota limits can be set. In some cases
   * clients can exceed the targets that you set. Don’t rely on usage plans to
   * control costs. Consider using <a
   * href="https://docs.aws.amazon.com/cost-management/latest/userguide/budgets-managing-costs.html">Amazon
   * Web Services Budgets</a> to monitor costs and <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF</a>
   * to manage API requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UsagePlan">AWS
   * API Reference</a></p>
   */
  class CreateUsagePlanResult
  {
  public:
    AWS_APIGATEWAY_API CreateUsagePlanResult();
    AWS_APIGATEWAY_API CreateUsagePlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API CreateUsagePlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateUsagePlanResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateUsagePlanResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateUsagePlanResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a usage plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateUsagePlanResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateUsagePlanResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateUsagePlanResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a usage plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateUsagePlanResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateUsagePlanResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateUsagePlanResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const{ return m_apiStages; }
    inline void SetApiStages(const Aws::Vector<ApiStage>& value) { m_apiStages = value; }
    inline void SetApiStages(Aws::Vector<ApiStage>&& value) { m_apiStages = std::move(value); }
    inline CreateUsagePlanResult& WithApiStages(const Aws::Vector<ApiStage>& value) { SetApiStages(value); return *this;}
    inline CreateUsagePlanResult& WithApiStages(Aws::Vector<ApiStage>&& value) { SetApiStages(std::move(value)); return *this;}
    inline CreateUsagePlanResult& AddApiStages(const ApiStage& value) { m_apiStages.push_back(value); return *this; }
    inline CreateUsagePlanResult& AddApiStages(ApiStage&& value) { m_apiStages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const{ return m_throttle; }
    inline void SetThrottle(const ThrottleSettings& value) { m_throttle = value; }
    inline void SetThrottle(ThrottleSettings&& value) { m_throttle = std::move(value); }
    inline CreateUsagePlanResult& WithThrottle(const ThrottleSettings& value) { SetThrottle(value); return *this;}
    inline CreateUsagePlanResult& WithThrottle(ThrottleSettings&& value) { SetThrottle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline const QuotaSettings& GetQuota() const{ return m_quota; }
    inline void SetQuota(const QuotaSettings& value) { m_quota = value; }
    inline void SetQuota(QuotaSettings&& value) { m_quota = std::move(value); }
    inline CreateUsagePlanResult& WithQuota(const QuotaSettings& value) { SetQuota(value); return *this;}
    inline CreateUsagePlanResult& WithQuota(QuotaSettings&& value) { SetQuota(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }
    inline void SetProductCode(const Aws::String& value) { m_productCode = value; }
    inline void SetProductCode(Aws::String&& value) { m_productCode = std::move(value); }
    inline void SetProductCode(const char* value) { m_productCode.assign(value); }
    inline CreateUsagePlanResult& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}
    inline CreateUsagePlanResult& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}
    inline CreateUsagePlanResult& WithProductCode(const char* value) { SetProductCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateUsagePlanResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateUsagePlanResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateUsagePlanResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateUsagePlanResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateUsagePlanResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateUsagePlanResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateUsagePlanResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateUsagePlanResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateUsagePlanResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUsagePlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUsagePlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUsagePlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<ApiStage> m_apiStages;

    ThrottleSettings m_throttle;

    QuotaSettings m_quota;

    Aws::String m_productCode;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
