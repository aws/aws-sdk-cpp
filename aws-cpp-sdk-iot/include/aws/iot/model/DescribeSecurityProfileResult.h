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


    /**
     * <p>The name of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name of the security profile.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileName = value; }

    /**
     * <p>The name of the security profile.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileName = std::move(value); }

    /**
     * <p>The name of the security profile.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileName.assign(value); }

    /**
     * <p>The name of the security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name of the security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>The ARN of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileArn() const{ return m_securityProfileArn; }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline void SetSecurityProfileArn(const Aws::String& value) { m_securityProfileArn = value; }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline void SetSecurityProfileArn(Aws::String&& value) { m_securityProfileArn = std::move(value); }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline void SetSecurityProfileArn(const char* value) { m_securityProfileArn.assign(value); }

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileArn(const Aws::String& value) { SetSecurityProfileArn(value); return *this;}

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileArn(Aws::String&& value) { SetSecurityProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the security profile.</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileArn(const char* value) { SetSecurityProfileArn(value); return *this;}


    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline const Aws::String& GetSecurityProfileDescription() const{ return m_securityProfileDescription; }

    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline void SetSecurityProfileDescription(const Aws::String& value) { m_securityProfileDescription = value; }

    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline void SetSecurityProfileDescription(Aws::String&& value) { m_securityProfileDescription = std::move(value); }

    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline void SetSecurityProfileDescription(const char* value) { m_securityProfileDescription.assign(value); }

    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileDescription(const Aws::String& value) { SetSecurityProfileDescription(value); return *this;}

    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileDescription(Aws::String&& value) { SetSecurityProfileDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the security profile (associated with the security profile
     * when it was created or updated).</p>
     */
    inline DescribeSecurityProfileResult& WithSecurityProfileDescription(const char* value) { SetSecurityProfileDescription(value); return *this;}


    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const{ return m_behaviors; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline void SetBehaviors(const Aws::Vector<Behavior>& value) { m_behaviors = value; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline void SetBehaviors(Aws::Vector<Behavior>&& value) { m_behaviors = std::move(value); }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline DescribeSecurityProfileResult& WithBehaviors(const Aws::Vector<Behavior>& value) { SetBehaviors(value); return *this;}

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline DescribeSecurityProfileResult& WithBehaviors(Aws::Vector<Behavior>&& value) { SetBehaviors(std::move(value)); return *this;}

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline DescribeSecurityProfileResult& AddBehaviors(const Behavior& value) { m_behaviors.push_back(value); return *this; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline DescribeSecurityProfileResult& AddBehaviors(Behavior&& value) { m_behaviors.push_back(std::move(value)); return *this; }


    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const{ return m_alertTargets; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline void SetAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { m_alertTargets = value; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline void SetAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { m_alertTargets = std::move(value); }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline DescribeSecurityProfileResult& WithAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { SetAlertTargets(value); return *this;}

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline DescribeSecurityProfileResult& WithAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { SetAlertTargets(std::move(value)); return *this;}

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline DescribeSecurityProfileResult& AddAlertTargets(const AlertTargetType& key, const AlertTarget& value) { m_alertTargets.emplace(key, value); return *this; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline DescribeSecurityProfileResult& AddAlertTargets(AlertTargetType&& key, const AlertTarget& value) { m_alertTargets.emplace(std::move(key), value); return *this; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline DescribeSecurityProfileResult& AddAlertTargets(const AlertTargetType& key, AlertTarget&& value) { m_alertTargets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline DescribeSecurityProfileResult& AddAlertTargets(AlertTargetType&& key, AlertTarget&& value) { m_alertTargets.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const{ return m_additionalMetricsToRetainV2; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline void SetAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { m_additionalMetricsToRetainV2 = value; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline void SetAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { m_additionalMetricsToRetainV2 = std::move(value); }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline DescribeSecurityProfileResult& WithAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { SetAdditionalMetricsToRetainV2(value); return *this;}

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline DescribeSecurityProfileResult& WithAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { SetAdditionalMetricsToRetainV2(std::move(value)); return *this;}

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline DescribeSecurityProfileResult& AddAdditionalMetricsToRetainV2(const MetricToRetain& value) { m_additionalMetricsToRetainV2.push_back(value); return *this; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here.</p>
     */
    inline DescribeSecurityProfileResult& AddAdditionalMetricsToRetainV2(MetricToRetain&& value) { m_additionalMetricsToRetainV2.push_back(std::move(value)); return *this; }


    /**
     * <p>The version of the security profile. A new version is generated whenever the
     * security profile is updated.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the security profile. A new version is generated whenever the
     * security profile is updated.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The version of the security profile. A new version is generated whenever the
     * security profile is updated.</p>
     */
    inline DescribeSecurityProfileResult& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The time the security profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The time the security profile was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The time the security profile was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The time the security profile was created.</p>
     */
    inline DescribeSecurityProfileResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The time the security profile was created.</p>
     */
    inline DescribeSecurityProfileResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The time the security profile was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The time the security profile was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The time the security profile was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The time the security profile was last modified.</p>
     */
    inline DescribeSecurityProfileResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The time the security profile was last modified.</p>
     */
    inline DescribeSecurityProfileResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
