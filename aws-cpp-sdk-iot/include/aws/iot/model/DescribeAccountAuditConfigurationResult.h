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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/AuditNotificationType.h>
#include <aws/iot/model/AuditNotificationTarget.h>
#include <aws/iot/model/AuditCheckConfiguration.h>
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
  class AWS_IOT_API DescribeAccountAuditConfigurationResult
  {
  public:
    DescribeAccountAuditConfigurationResult();
    DescribeAccountAuditConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAccountAuditConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code> this parameter is required.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code> this parameter is required.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code> this parameter is required.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code> this parameter is required.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code> this parameter is required.</p>
     */
    inline DescribeAccountAuditConfigurationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code> this parameter is required.</p>
     */
    inline DescribeAccountAuditConfigurationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code> this parameter is required.</p>
     */
    inline DescribeAccountAuditConfigurationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline const Aws::Map<AuditNotificationType, AuditNotificationTarget>& GetAuditNotificationTargetConfigurations() const{ return m_auditNotificationTargetConfigurations; }

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline void SetAuditNotificationTargetConfigurations(const Aws::Map<AuditNotificationType, AuditNotificationTarget>& value) { m_auditNotificationTargetConfigurations = value; }

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline void SetAuditNotificationTargetConfigurations(Aws::Map<AuditNotificationType, AuditNotificationTarget>&& value) { m_auditNotificationTargetConfigurations = std::move(value); }

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& WithAuditNotificationTargetConfigurations(const Aws::Map<AuditNotificationType, AuditNotificationTarget>& value) { SetAuditNotificationTargetConfigurations(value); return *this;}

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& WithAuditNotificationTargetConfigurations(Aws::Map<AuditNotificationType, AuditNotificationTarget>&& value) { SetAuditNotificationTargetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(const AuditNotificationType& key, const AuditNotificationTarget& value) { m_auditNotificationTargetConfigurations.emplace(key, value); return *this; }

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(AuditNotificationType&& key, const AuditNotificationTarget& value) { m_auditNotificationTargetConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(const AuditNotificationType& key, AuditNotificationTarget&& value) { m_auditNotificationTargetConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(AuditNotificationType&& key, AuditNotificationTarget&& value) { m_auditNotificationTargetConfigurations.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline const Aws::Map<Aws::String, AuditCheckConfiguration>& GetAuditCheckConfigurations() const{ return m_auditCheckConfigurations; }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline void SetAuditCheckConfigurations(const Aws::Map<Aws::String, AuditCheckConfiguration>& value) { m_auditCheckConfigurations = value; }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline void SetAuditCheckConfigurations(Aws::Map<Aws::String, AuditCheckConfiguration>&& value) { m_auditCheckConfigurations = std::move(value); }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& WithAuditCheckConfigurations(const Aws::Map<Aws::String, AuditCheckConfiguration>& value) { SetAuditCheckConfigurations(value); return *this;}

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& WithAuditCheckConfigurations(Aws::Map<Aws::String, AuditCheckConfiguration>&& value) { SetAuditCheckConfigurations(std::move(value)); return *this;}

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const Aws::String& key, const AuditCheckConfiguration& value) { m_auditCheckConfigurations.emplace(key, value); return *this; }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(Aws::String&& key, const AuditCheckConfiguration& value) { m_auditCheckConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const Aws::String& key, AuditCheckConfiguration&& value) { m_auditCheckConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(Aws::String&& key, AuditCheckConfiguration&& value) { m_auditCheckConfigurations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const char* key, AuditCheckConfiguration&& value) { m_auditCheckConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const char* key, const AuditCheckConfiguration& value) { m_auditCheckConfigurations.emplace(key, value); return *this; }

  private:

    Aws::String m_roleArn;

    Aws::Map<AuditNotificationType, AuditNotificationTarget> m_auditNotificationTargetConfigurations;

    Aws::Map<Aws::String, AuditCheckConfiguration> m_auditCheckConfigurations;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
