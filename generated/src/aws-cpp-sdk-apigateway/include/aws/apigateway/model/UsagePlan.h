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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
  class UsagePlan
  {
  public:
    AWS_APIGATEWAY_API UsagePlan() = default;
    AWS_APIGATEWAY_API UsagePlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API UsagePlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UsagePlan& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a usage plan.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UsagePlan& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a usage plan.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UsagePlan& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const { return m_apiStages; }
    inline bool ApiStagesHasBeenSet() const { return m_apiStagesHasBeenSet; }
    template<typename ApiStagesT = Aws::Vector<ApiStage>>
    void SetApiStages(ApiStagesT&& value) { m_apiStagesHasBeenSet = true; m_apiStages = std::forward<ApiStagesT>(value); }
    template<typename ApiStagesT = Aws::Vector<ApiStage>>
    UsagePlan& WithApiStages(ApiStagesT&& value) { SetApiStages(std::forward<ApiStagesT>(value)); return *this;}
    template<typename ApiStagesT = ApiStage>
    UsagePlan& AddApiStages(ApiStagesT&& value) { m_apiStagesHasBeenSet = true; m_apiStages.emplace_back(std::forward<ApiStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const { return m_throttle; }
    inline bool ThrottleHasBeenSet() const { return m_throttleHasBeenSet; }
    template<typename ThrottleT = ThrottleSettings>
    void SetThrottle(ThrottleT&& value) { m_throttleHasBeenSet = true; m_throttle = std::forward<ThrottleT>(value); }
    template<typename ThrottleT = ThrottleSettings>
    UsagePlan& WithThrottle(ThrottleT&& value) { SetThrottle(std::forward<ThrottleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline const QuotaSettings& GetQuota() const { return m_quota; }
    inline bool QuotaHasBeenSet() const { return m_quotaHasBeenSet; }
    template<typename QuotaT = QuotaSettings>
    void SetQuota(QuotaT&& value) { m_quotaHasBeenSet = true; m_quota = std::forward<QuotaT>(value); }
    template<typename QuotaT = QuotaSettings>
    UsagePlan& WithQuota(QuotaT&& value) { SetQuota(std::forward<QuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    UsagePlan& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UsagePlan& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UsagePlan& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UsagePlan& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
