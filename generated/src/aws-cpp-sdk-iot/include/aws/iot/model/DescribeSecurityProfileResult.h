/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/MetricsExportConfig.h>
#include <aws/iot/model/Behavior.h>
#include <aws/iot/model/AlertTargetType.h>
#include <aws/iot/model/AlertTarget.h>
#include <aws/iot/model/MetricToRetain.h>
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
namespace IoT
{
namespace Model
{
  class DescribeSecurityProfileResult
  {
  public:
    AWS_IOT_API DescribeSecurityProfileResult();
    AWS_IOT_API DescribeSecurityProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeSecurityProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileName.assign(value); }
    inline DescribeSecurityProfileResult& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline DescribeSecurityProfileResult& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline DescribeSecurityProfileResult& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileArn() const{ return m_securityProfileArn; }
    inline void SetSecurityProfileArn(const Aws::String& value) { m_securityProfileArn = value; }
    inline void SetSecurityProfileArn(Aws::String&& value) { m_securityProfileArn = std::move(value); }
    inline void SetSecurityProfileArn(const char* value) { m_securityProfileArn.assign(value); }
    inline DescribeSecurityProfileResult& WithSecurityProfileArn(const Aws::String& value) { SetSecurityProfileArn(value); return *this;}
    inline DescribeSecurityProfileResult& WithSecurityProfileArn(Aws::String&& value) { SetSecurityProfileArn(std::move(value)); return *this;}
    inline DescribeSecurityProfileResult& WithSecurityProfileArn(const char* value) { SetSecurityProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline const Aws::String& GetSecurityProfileDescription() const{ return m_securityProfileDescription; }
    inline void SetSecurityProfileDescription(const Aws::String& value) { m_securityProfileDescription = value; }
    inline void SetSecurityProfileDescription(Aws::String&& value) { m_securityProfileDescription = std::move(value); }
    inline void SetSecurityProfileDescription(const char* value) { m_securityProfileDescription.assign(value); }
    inline DescribeSecurityProfileResult& WithSecurityProfileDescription(const Aws::String& value) { SetSecurityProfileDescription(value); return *this;}
    inline DescribeSecurityProfileResult& WithSecurityProfileDescription(Aws::String&& value) { SetSecurityProfileDescription(std::move(value)); return *this;}
    inline DescribeSecurityProfileResult& WithSecurityProfileDescription(const char* value) { SetSecurityProfileDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const{ return m_behaviors; }
    inline void SetBehaviors(const Aws::Vector<Behavior>& value) { m_behaviors = value; }
    inline void SetBehaviors(Aws::Vector<Behavior>&& value) { m_behaviors = std::move(value); }
    inline DescribeSecurityProfileResult& WithBehaviors(const Aws::Vector<Behavior>& value) { SetBehaviors(value); return *this;}
    inline DescribeSecurityProfileResult& WithBehaviors(Aws::Vector<Behavior>&& value) { SetBehaviors(std::move(value)); return *this;}
    inline DescribeSecurityProfileResult& AddBehaviors(const Behavior& value) { m_behaviors.push_back(value); return *this; }
    inline DescribeSecurityProfileResult& AddBehaviors(Behavior&& value) { m_behaviors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const{ return m_alertTargets; }
    inline void SetAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { m_alertTargets = value; }
    inline void SetAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { m_alertTargets = std::move(value); }
    inline DescribeSecurityProfileResult& WithAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { SetAlertTargets(value); return *this;}
    inline DescribeSecurityProfileResult& WithAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { SetAlertTargets(std::move(value)); return *this;}
    inline DescribeSecurityProfileResult& AddAlertTargets(const AlertTargetType& key, const AlertTarget& value) { m_alertTargets.emplace(key, value); return *this; }
    inline DescribeSecurityProfileResult& AddAlertTargets(AlertTargetType&& key, const AlertTarget& value) { m_alertTargets.emplace(std::move(key), value); return *this; }
    inline DescribeSecurityProfileResult& AddAlertTargets(const AlertTargetType& key, AlertTarget&& value) { m_alertTargets.emplace(key, std::move(value)); return *this; }
    inline DescribeSecurityProfileResult& AddAlertTargets(AlertTargetType&& key, AlertTarget&& value) { m_alertTargets.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const{ return m_additionalMetricsToRetainV2; }
    inline void SetAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { m_additionalMetricsToRetainV2 = value; }
    inline void SetAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { m_additionalMetricsToRetainV2 = std::move(value); }
    inline DescribeSecurityProfileResult& WithAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { SetAdditionalMetricsToRetainV2(value); return *this;}
    inline DescribeSecurityProfileResult& WithAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { SetAdditionalMetricsToRetainV2(std::move(value)); return *this;}
    inline DescribeSecurityProfileResult& AddAdditionalMetricsToRetainV2(const MetricToRetain& value) { m_additionalMetricsToRetainV2.push_back(value); return *this; }
    inline DescribeSecurityProfileResult& AddAdditionalMetricsToRetainV2(MetricToRetain&& value) { m_additionalMetricsToRetainV2.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the security profile. A new version is generated whenever the
     * security profile is updated.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline void SetVersion(long long value) { m_version = value; }
    inline DescribeSecurityProfileResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the security profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeSecurityProfileResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeSecurityProfileResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the security profile was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline DescribeSecurityProfileResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline DescribeSecurityProfileResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the MQTT topic and role ARN required for metric export.</p>
     */
    inline const MetricsExportConfig& GetMetricsExportConfig() const{ return m_metricsExportConfig; }
    inline void SetMetricsExportConfig(const MetricsExportConfig& value) { m_metricsExportConfig = value; }
    inline void SetMetricsExportConfig(MetricsExportConfig&& value) { m_metricsExportConfig = std::move(value); }
    inline DescribeSecurityProfileResult& WithMetricsExportConfig(const MetricsExportConfig& value) { SetMetricsExportConfig(value); return *this;}
    inline DescribeSecurityProfileResult& WithMetricsExportConfig(MetricsExportConfig&& value) { SetMetricsExportConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSecurityProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSecurityProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSecurityProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;

    Aws::String m_securityProfileArn;

    Aws::String m_securityProfileDescription;

    Aws::Vector<Behavior> m_behaviors;

    Aws::Map<AlertTargetType, AlertTarget> m_alertTargets;

    Aws::Vector<MetricToRetain> m_additionalMetricsToRetainV2;

    long long m_version;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    MetricsExportConfig m_metricsExportConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
