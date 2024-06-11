﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeAccountAuditConfigurationResult
  {
  public:
    AWS_IOT_API DescribeAccountAuditConfigurationResult();
    AWS_IOT_API DescribeAccountAuditConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAccountAuditConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the role that grants permission to IoT to access information about
     * your devices, policies, certificates, and other items as required when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code>, this parameter is required.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeAccountAuditConfigurationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeAccountAuditConfigurationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeAccountAuditConfigurationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline const Aws::Map<AuditNotificationType, AuditNotificationTarget>& GetAuditNotificationTargetConfigurations() const{ return m_auditNotificationTargetConfigurations; }
    inline void SetAuditNotificationTargetConfigurations(const Aws::Map<AuditNotificationType, AuditNotificationTarget>& value) { m_auditNotificationTargetConfigurations = value; }
    inline void SetAuditNotificationTargetConfigurations(Aws::Map<AuditNotificationType, AuditNotificationTarget>&& value) { m_auditNotificationTargetConfigurations = std::move(value); }
    inline DescribeAccountAuditConfigurationResult& WithAuditNotificationTargetConfigurations(const Aws::Map<AuditNotificationType, AuditNotificationTarget>& value) { SetAuditNotificationTargetConfigurations(value); return *this;}
    inline DescribeAccountAuditConfigurationResult& WithAuditNotificationTargetConfigurations(Aws::Map<AuditNotificationType, AuditNotificationTarget>&& value) { SetAuditNotificationTargetConfigurations(std::move(value)); return *this;}
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(const AuditNotificationType& key, const AuditNotificationTarget& value) { m_auditNotificationTargetConfigurations.emplace(key, value); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(AuditNotificationType&& key, const AuditNotificationTarget& value) { m_auditNotificationTargetConfigurations.emplace(std::move(key), value); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(const AuditNotificationType& key, AuditNotificationTarget&& value) { m_auditNotificationTargetConfigurations.emplace(key, std::move(value)); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(AuditNotificationType&& key, AuditNotificationTarget&& value) { m_auditNotificationTargetConfigurations.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline const Aws::Map<Aws::String, AuditCheckConfiguration>& GetAuditCheckConfigurations() const{ return m_auditCheckConfigurations; }
    inline void SetAuditCheckConfigurations(const Aws::Map<Aws::String, AuditCheckConfiguration>& value) { m_auditCheckConfigurations = value; }
    inline void SetAuditCheckConfigurations(Aws::Map<Aws::String, AuditCheckConfiguration>&& value) { m_auditCheckConfigurations = std::move(value); }
    inline DescribeAccountAuditConfigurationResult& WithAuditCheckConfigurations(const Aws::Map<Aws::String, AuditCheckConfiguration>& value) { SetAuditCheckConfigurations(value); return *this;}
    inline DescribeAccountAuditConfigurationResult& WithAuditCheckConfigurations(Aws::Map<Aws::String, AuditCheckConfiguration>&& value) { SetAuditCheckConfigurations(std::move(value)); return *this;}
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const Aws::String& key, const AuditCheckConfiguration& value) { m_auditCheckConfigurations.emplace(key, value); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(Aws::String&& key, const AuditCheckConfiguration& value) { m_auditCheckConfigurations.emplace(std::move(key), value); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const Aws::String& key, AuditCheckConfiguration&& value) { m_auditCheckConfigurations.emplace(key, std::move(value)); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(Aws::String&& key, AuditCheckConfiguration&& value) { m_auditCheckConfigurations.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const char* key, AuditCheckConfiguration&& value) { m_auditCheckConfigurations.emplace(key, std::move(value)); return *this; }
    inline DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(const char* key, const AuditCheckConfiguration& value) { m_auditCheckConfigurations.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccountAuditConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccountAuditConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccountAuditConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;

    Aws::Map<AuditNotificationType, AuditNotificationTarget> m_auditNotificationTargetConfigurations;

    Aws::Map<Aws::String, AuditCheckConfiguration> m_auditCheckConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
