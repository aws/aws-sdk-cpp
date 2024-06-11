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
    AWS_APIGATEWAY_API CreateUsagePlanRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateUsagePlanRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateUsagePlanRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateUsagePlanRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the usage plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateUsagePlanRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateUsagePlanRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateUsagePlanRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const{ return m_apiStages; }
    inline bool ApiStagesHasBeenSet() const { return m_apiStagesHasBeenSet; }
    inline void SetApiStages(const Aws::Vector<ApiStage>& value) { m_apiStagesHasBeenSet = true; m_apiStages = value; }
    inline void SetApiStages(Aws::Vector<ApiStage>&& value) { m_apiStagesHasBeenSet = true; m_apiStages = std::move(value); }
    inline CreateUsagePlanRequest& WithApiStages(const Aws::Vector<ApiStage>& value) { SetApiStages(value); return *this;}
    inline CreateUsagePlanRequest& WithApiStages(Aws::Vector<ApiStage>&& value) { SetApiStages(std::move(value)); return *this;}
    inline CreateUsagePlanRequest& AddApiStages(const ApiStage& value) { m_apiStagesHasBeenSet = true; m_apiStages.push_back(value); return *this; }
    inline CreateUsagePlanRequest& AddApiStages(ApiStage&& value) { m_apiStagesHasBeenSet = true; m_apiStages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The throttling limits of the usage plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const{ return m_throttle; }
    inline bool ThrottleHasBeenSet() const { return m_throttleHasBeenSet; }
    inline void SetThrottle(const ThrottleSettings& value) { m_throttleHasBeenSet = true; m_throttle = value; }
    inline void SetThrottle(ThrottleSettings&& value) { m_throttleHasBeenSet = true; m_throttle = std::move(value); }
    inline CreateUsagePlanRequest& WithThrottle(const ThrottleSettings& value) { SetThrottle(value); return *this;}
    inline CreateUsagePlanRequest& WithThrottle(ThrottleSettings&& value) { SetThrottle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota of the usage plan.</p>
     */
    inline const QuotaSettings& GetQuota() const{ return m_quota; }
    inline bool QuotaHasBeenSet() const { return m_quotaHasBeenSet; }
    inline void SetQuota(const QuotaSettings& value) { m_quotaHasBeenSet = true; m_quota = value; }
    inline void SetQuota(QuotaSettings&& value) { m_quotaHasBeenSet = true; m_quota = std::move(value); }
    inline CreateUsagePlanRequest& WithQuota(const QuotaSettings& value) { SetQuota(value); return *this;}
    inline CreateUsagePlanRequest& WithQuota(QuotaSettings&& value) { SetQuota(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with <code>aws:</code>.
     * The tag value can be up to 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateUsagePlanRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateUsagePlanRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateUsagePlanRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateUsagePlanRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateUsagePlanRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateUsagePlanRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateUsagePlanRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateUsagePlanRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateUsagePlanRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
