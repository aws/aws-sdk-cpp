/**
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
    AWS_IOT_API DescribeAccountAuditConfigurationResult() = default;
    AWS_IOT_API DescribeAccountAuditConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAccountAuditConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the role that grants permission to IoT to access information about
     * your devices, policies, certificates, and other items as required when
     * performing an audit.</p> <p>On the first call to
     * <code>UpdateAccountAuditConfiguration</code>, this parameter is required.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeAccountAuditConfigurationResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the targets to which audit notifications are sent for this
     * account.</p>
     */
    inline const Aws::Map<AuditNotificationType, AuditNotificationTarget>& GetAuditNotificationTargetConfigurations() const { return m_auditNotificationTargetConfigurations; }
    template<typename AuditNotificationTargetConfigurationsT = Aws::Map<AuditNotificationType, AuditNotificationTarget>>
    void SetAuditNotificationTargetConfigurations(AuditNotificationTargetConfigurationsT&& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations = std::forward<AuditNotificationTargetConfigurationsT>(value); }
    template<typename AuditNotificationTargetConfigurationsT = Aws::Map<AuditNotificationType, AuditNotificationTarget>>
    DescribeAccountAuditConfigurationResult& WithAuditNotificationTargetConfigurations(AuditNotificationTargetConfigurationsT&& value) { SetAuditNotificationTargetConfigurations(std::forward<AuditNotificationTargetConfigurationsT>(value)); return *this;}
    inline DescribeAccountAuditConfigurationResult& AddAuditNotificationTargetConfigurations(AuditNotificationType key, AuditNotificationTarget value) {
      m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Which audit checks are enabled and disabled for this account.</p>
     */
    inline const Aws::Map<Aws::String, AuditCheckConfiguration>& GetAuditCheckConfigurations() const { return m_auditCheckConfigurations; }
    template<typename AuditCheckConfigurationsT = Aws::Map<Aws::String, AuditCheckConfiguration>>
    void SetAuditCheckConfigurations(AuditCheckConfigurationsT&& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations = std::forward<AuditCheckConfigurationsT>(value); }
    template<typename AuditCheckConfigurationsT = Aws::Map<Aws::String, AuditCheckConfiguration>>
    DescribeAccountAuditConfigurationResult& WithAuditCheckConfigurations(AuditCheckConfigurationsT&& value) { SetAuditCheckConfigurations(std::forward<AuditCheckConfigurationsT>(value)); return *this;}
    template<typename AuditCheckConfigurationsKeyT = Aws::String, typename AuditCheckConfigurationsValueT = AuditCheckConfiguration>
    DescribeAccountAuditConfigurationResult& AddAuditCheckConfigurations(AuditCheckConfigurationsKeyT&& key, AuditCheckConfigurationsValueT&& value) {
      m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(std::forward<AuditCheckConfigurationsKeyT>(key), std::forward<AuditCheckConfigurationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountAuditConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<AuditNotificationType, AuditNotificationTarget> m_auditNotificationTargetConfigurations;
    bool m_auditNotificationTargetConfigurationsHasBeenSet = false;

    Aws::Map<Aws::String, AuditCheckConfiguration> m_auditCheckConfigurations;
    bool m_auditCheckConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
