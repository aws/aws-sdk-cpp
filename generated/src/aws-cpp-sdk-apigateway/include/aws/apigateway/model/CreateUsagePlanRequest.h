/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ThrottleSettings.h>
#include <aws/apigateway/model/QuotaSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/ApiStage.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The POST request to create a usage plan with the name, description, throttle
   * limits and quota limits, as well as the associated API stages, specified in the
   * payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateUsagePlanRequest">AWS
   * API Reference</a></p>
   */
  class CreateUsagePlanRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateUsagePlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsagePlan"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the usage plan.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateUsagePlanRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the usage plan.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateUsagePlanRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const { return m_apiStages; }
    inline bool ApiStagesHasBeenSet() const { return m_apiStagesHasBeenSet; }
    template<typename ApiStagesT = Aws::Vector<ApiStage>>
    void SetApiStages(ApiStagesT&& value) { m_apiStagesHasBeenSet = true; m_apiStages = std::forward<ApiStagesT>(value); }
    template<typename ApiStagesT = Aws::Vector<ApiStage>>
    CreateUsagePlanRequest& WithApiStages(ApiStagesT&& value) { SetApiStages(std::forward<ApiStagesT>(value)); return *this;}
    template<typename ApiStagesT = ApiStage>
    CreateUsagePlanRequest& AddApiStages(ApiStagesT&& value) { m_apiStagesHasBeenSet = true; m_apiStages.emplace_back(std::forward<ApiStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The throttling limits of the usage plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const { return m_throttle; }
    inline bool ThrottleHasBeenSet() const { return m_throttleHasBeenSet; }
    template<typename ThrottleT = ThrottleSettings>
    void SetThrottle(ThrottleT&& value) { m_throttleHasBeenSet = true; m_throttle = std::forward<ThrottleT>(value); }
    template<typename ThrottleT = ThrottleSettings>
    CreateUsagePlanRequest& WithThrottle(ThrottleT&& value) { SetThrottle(std::forward<ThrottleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota of the usage plan.</p>
     */
    inline const QuotaSettings& GetQuota() const { return m_quota; }
    inline bool QuotaHasBeenSet() const { return m_quotaHasBeenSet; }
    template<typename QuotaT = QuotaSettings>
    void SetQuota(QuotaT&& value) { m_quotaHasBeenSet = true; m_quota = std::forward<QuotaT>(value); }
    template<typename QuotaT = QuotaSettings>
    CreateUsagePlanRequest& WithQuota(QuotaT&& value) { SetQuota(std::forward<QuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateUsagePlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateUsagePlanRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
