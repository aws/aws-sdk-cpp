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
    AWS_APIGATEWAY_API CreateUsagePlanResult() = default;
    AWS_APIGATEWAY_API CreateUsagePlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API CreateUsagePlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateUsagePlanResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a usage plan.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateUsagePlanResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a usage plan.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateUsagePlanResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const { return m_apiStages; }
    template<typename ApiStagesT = Aws::Vector<ApiStage>>
    void SetApiStages(ApiStagesT&& value) { m_apiStagesHasBeenSet = true; m_apiStages = std::forward<ApiStagesT>(value); }
    template<typename ApiStagesT = Aws::Vector<ApiStage>>
    CreateUsagePlanResult& WithApiStages(ApiStagesT&& value) { SetApiStages(std::forward<ApiStagesT>(value)); return *this;}
    template<typename ApiStagesT = ApiStage>
    CreateUsagePlanResult& AddApiStages(ApiStagesT&& value) { m_apiStagesHasBeenSet = true; m_apiStages.emplace_back(std::forward<ApiStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const { return m_throttle; }
    template<typename ThrottleT = ThrottleSettings>
    void SetThrottle(ThrottleT&& value) { m_throttleHasBeenSet = true; m_throttle = std::forward<ThrottleT>(value); }
    template<typename ThrottleT = ThrottleSettings>
    CreateUsagePlanResult& WithThrottle(ThrottleT&& value) { SetThrottle(std::forward<ThrottleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline const QuotaSettings& GetQuota() const { return m_quota; }
    template<typename QuotaT = QuotaSettings>
    void SetQuota(QuotaT&& value) { m_quotaHasBeenSet = true; m_quota = std::forward<QuotaT>(value); }
    template<typename QuotaT = QuotaSettings>
    CreateUsagePlanResult& WithQuota(QuotaT&& value) { SetQuota(std::forward<QuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    CreateUsagePlanResult& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateUsagePlanResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateUsagePlanResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateUsagePlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ApiStage> m_apiStages;
    bool m_apiStagesHasBeenSet = false;

    ThrottleSettings m_throttle;
    bool m_throttleHasBeenSet = false;

    QuotaSettings m_quota;
    bool m_quotaHasBeenSet = false;

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
