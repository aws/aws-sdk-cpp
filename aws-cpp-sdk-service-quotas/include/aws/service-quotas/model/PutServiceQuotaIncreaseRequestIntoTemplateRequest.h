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
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

  /**
   */
  class AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateRequest : public ServiceQuotasRequest
  {
  public:
    PutServiceQuotaIncreaseRequestIntoTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutServiceQuotaIncreaseRequestIntoTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>Specifies the service quota that you want to use.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>Specifies the AWS Region for the quota. </p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>Specifies the new, increased value for the quota. </p>
     */
    inline double GetDesiredValue() const{ return m_desiredValue; }

    /**
     * <p>Specifies the new, increased value for the quota. </p>
     */
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }

    /**
     * <p>Specifies the new, increased value for the quota. </p>
     */
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }

    /**
     * <p>Specifies the new, increased value for the quota. </p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateRequest& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}

  private:

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;

    double m_desiredValue;
    bool m_desiredValueHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
