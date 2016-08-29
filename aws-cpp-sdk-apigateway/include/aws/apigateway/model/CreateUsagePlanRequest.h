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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ThrottleSettings.h>
#include <aws/apigateway/model/QuotaSettings.h>
#include <aws/apigateway/model/ApiStage.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The POST request to create a usage plan with the name, description, throttle
   * limits and quota limits, as well as the associated API stages, specified in the
   * payload.</p>
   */
  class AWS_APIGATEWAY_API CreateUsagePlanRequest : public APIGatewayRequest
  {
  public:
    CreateUsagePlanRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the usage plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the usage plan.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the usage plan.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the usage plan.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The description of the usage plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the usage plan.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the usage plan.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the usage plan.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline const Aws::Vector<ApiStage>& GetApiStages() const{ return m_apiStages; }

    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline void SetApiStages(const Aws::Vector<ApiStage>& value) { m_apiStagesHasBeenSet = true; m_apiStages = value; }

    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline void SetApiStages(Aws::Vector<ApiStage>&& value) { m_apiStagesHasBeenSet = true; m_apiStages = value; }

    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithApiStages(const Aws::Vector<ApiStage>& value) { SetApiStages(value); return *this;}

    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithApiStages(Aws::Vector<ApiStage>&& value) { SetApiStages(value); return *this;}

    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& AddApiStages(const ApiStage& value) { m_apiStagesHasBeenSet = true; m_apiStages.push_back(value); return *this; }

    /**
     * <p>The associated API stages of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& AddApiStages(ApiStage&& value) { m_apiStagesHasBeenSet = true; m_apiStages.push_back(value); return *this; }

    /**
     * <p>The throttling limits of the usage plan.</p>
     */
    inline const ThrottleSettings& GetThrottle() const{ return m_throttle; }

    /**
     * <p>The throttling limits of the usage plan.</p>
     */
    inline void SetThrottle(const ThrottleSettings& value) { m_throttleHasBeenSet = true; m_throttle = value; }

    /**
     * <p>The throttling limits of the usage plan.</p>
     */
    inline void SetThrottle(ThrottleSettings&& value) { m_throttleHasBeenSet = true; m_throttle = value; }

    /**
     * <p>The throttling limits of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithThrottle(const ThrottleSettings& value) { SetThrottle(value); return *this;}

    /**
     * <p>The throttling limits of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithThrottle(ThrottleSettings&& value) { SetThrottle(value); return *this;}

    /**
     * <p>The quota of the usage plan.</p>
     */
    inline const QuotaSettings& GetQuota() const{ return m_quota; }

    /**
     * <p>The quota of the usage plan.</p>
     */
    inline void SetQuota(const QuotaSettings& value) { m_quotaHasBeenSet = true; m_quota = value; }

    /**
     * <p>The quota of the usage plan.</p>
     */
    inline void SetQuota(QuotaSettings&& value) { m_quotaHasBeenSet = true; m_quota = value; }

    /**
     * <p>The quota of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithQuota(const QuotaSettings& value) { SetQuota(value); return *this;}

    /**
     * <p>The quota of the usage plan.</p>
     */
    inline CreateUsagePlanRequest& WithQuota(QuotaSettings&& value) { SetQuota(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<ApiStage> m_apiStages;
    bool m_apiStagesHasBeenSet;
    ThrottleSettings m_throttle;
    bool m_throttleHasBeenSet;
    QuotaSettings m_quota;
    bool m_quotaHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
