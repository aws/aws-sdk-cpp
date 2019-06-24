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
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>A structure that contains information about one service quota increase
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ServiceQuotaIncreaseRequestInTemplate">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEQUOTAS_API ServiceQuotaIncreaseRequestInTemplate
  {
  public:
    ServiceQuotaIncreaseRequestInTemplate();
    ServiceQuotaIncreaseRequestInTemplate(Aws::Utils::Json::JsonView jsonValue);
    ServiceQuotaIncreaseRequestInTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code identifier for the AWS service specified in the increase
     * request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The code identifier for the service quota specified in the increase
     * request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline const Aws::String& GetQuotaName() const{ return m_quotaName; }

    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }

    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline void SetQuotaName(const Aws::String& value) { m_quotaNameHasBeenSet = true; m_quotaName = value; }

    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline void SetQuotaName(Aws::String&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::move(value); }

    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline void SetQuotaName(const char* value) { m_quotaNameHasBeenSet = true; m_quotaName.assign(value); }

    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithQuotaName(const Aws::String& value) { SetQuotaName(value); return *this;}

    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithQuotaName(Aws::String&& value) { SetQuotaName(std::move(value)); return *this;}

    /**
     * <p>The name of the service quota in the increase request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithQuotaName(const char* value) { SetQuotaName(value); return *this;}


    /**
     * <p>Identifies the new, increased value of the service quota in the increase
     * request. </p>
     */
    inline double GetDesiredValue() const{ return m_desiredValue; }

    /**
     * <p>Identifies the new, increased value of the service quota in the increase
     * request. </p>
     */
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }

    /**
     * <p>Identifies the new, increased value of the service quota in the increase
     * request. </p>
     */
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }

    /**
     * <p>Identifies the new, increased value of the service quota in the increase
     * request. </p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}


    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the increase request occurs.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of measure for the increase request.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>Specifies if the quota is a global quota.</p>
     */
    inline bool GetGlobalQuota() const{ return m_globalQuota; }

    /**
     * <p>Specifies if the quota is a global quota.</p>
     */
    inline bool GlobalQuotaHasBeenSet() const { return m_globalQuotaHasBeenSet; }

    /**
     * <p>Specifies if the quota is a global quota.</p>
     */
    inline void SetGlobalQuota(bool value) { m_globalQuotaHasBeenSet = true; m_globalQuota = value; }

    /**
     * <p>Specifies if the quota is a global quota.</p>
     */
    inline ServiceQuotaIncreaseRequestInTemplate& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet;

    double m_desiredValue;
    bool m_desiredValueHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;

    Aws::String m_unit;
    bool m_unitHasBeenSet;

    bool m_globalQuota;
    bool m_globalQuotaHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
