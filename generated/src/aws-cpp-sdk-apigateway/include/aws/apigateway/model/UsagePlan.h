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
    AWS_APIGATEWAY_API UsagePlan();
    AWS_APIGATEWAY_API UsagePlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API UsagePlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline UsagePlan& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline UsagePlan& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a UsagePlan resource.</p>
     */
    inline UsagePlan& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of a usage plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a usage plan.</p>
     */
    inline UsagePlan& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a usage plan.</p>
     */
    inline UsagePlan& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a usage plan.</p>
     */
    inline UsagePlan& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of a usage plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a usage plan.</p>
     */
    inline UsagePlan& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a usage plan.</p>
     */
    inline UsagePlan& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a usage plan.</p>
     */
    inline UsagePlan& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const{ return m_apiStages; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline bool ApiStagesHasBeenSet() const { return m_apiStagesHasBeenSet; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline void SetApiStages(const Aws::Vector<ApiStage>& value) { m_apiStagesHasBeenSet = true; m_apiStages = value; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline void SetApiStages(Aws::Vector<ApiStage>&& value) { m_apiStagesHasBeenSet = true; m_apiStages = std::move(value); }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UsagePlan& WithApiStages(const Aws::Vector<ApiStage>& value) { SetApiStages(value); return *this;}

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UsagePlan& WithApiStages(Aws::Vector<ApiStage>&& value) { SetApiStages(std::move(value)); return *this;}

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UsagePlan& AddApiStages(const ApiStage& value) { m_apiStagesHasBeenSet = true; m_apiStages.push_back(value); return *this; }

    /**
     * <p>The associated API stages of a usage plan.</p>
     */
    inline UsagePlan& AddApiStages(ApiStage&& value) { m_apiStagesHasBeenSet = true; m_apiStages.push_back(std::move(value)); return *this; }


    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const{ return m_throttle; }

    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline bool ThrottleHasBeenSet() const { return m_throttleHasBeenSet; }

    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline void SetThrottle(const ThrottleSettings& value) { m_throttleHasBeenSet = true; m_throttle = value; }

    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline void SetThrottle(ThrottleSettings&& value) { m_throttleHasBeenSet = true; m_throttle = std::move(value); }

    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline UsagePlan& WithThrottle(const ThrottleSettings& value) { SetThrottle(value); return *this;}

    /**
     * <p>A map containing method level throttling information for API stage in a usage
     * plan.</p>
     */
    inline UsagePlan& WithThrottle(ThrottleSettings&& value) { SetThrottle(std::move(value)); return *this;}


    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline const QuotaSettings& GetQuota() const{ return m_quota; }

    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline bool QuotaHasBeenSet() const { return m_quotaHasBeenSet; }

    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline void SetQuota(const QuotaSettings& value) { m_quotaHasBeenSet = true; m_quota = value; }

    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline void SetQuota(QuotaSettings&& value) { m_quotaHasBeenSet = true; m_quota = std::move(value); }

    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline UsagePlan& WithQuota(const QuotaSettings& value) { SetQuota(value); return *this;}

    /**
     * <p>The target maximum number of permitted requests per a given unit time
     * interval.</p>
     */
    inline UsagePlan& WithQuota(QuotaSettings&& value) { SetQuota(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }

    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }

    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }

    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }

    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }

    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline UsagePlan& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}

    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline UsagePlan& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Marketplace product identifier to associate with the
     * usage plan as a SaaS product on the Amazon Web Services Marketplace.</p>
     */
    inline UsagePlan& WithProductCode(const char* value) { SetProductCode(value); return *this;}


    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline UsagePlan& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline UsagePlan& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UsagePlan& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UsagePlan& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
