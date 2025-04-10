﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace deadline
{
namespace Model
{
  class GetMonitorResult
  {
  public:
    AWS_DEADLINE_API GetMonitorResult() = default;
    AWS_DEADLINE_API GetMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline const Aws::String& GetMonitorId() const { return m_monitorId; }
    template<typename MonitorIdT = Aws::String>
    void SetMonitorId(MonitorIdT&& value) { m_monitorIdHasBeenSet = true; m_monitorId = std::forward<MonitorIdT>(value); }
    template<typename MonitorIdT = Aws::String>
    GetMonitorResult& WithMonitorId(MonitorIdT&& value) { SetMonitorId(std::forward<MonitorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     *  <p>This field can store any content. Escape or encode this content
     * before displaying it on a webpage or any other system that might interpret the
     * content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetMonitorResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline const Aws::String& GetSubdomain() const { return m_subdomain; }
    template<typename SubdomainT = Aws::String>
    void SetSubdomain(SubdomainT&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::forward<SubdomainT>(value); }
    template<typename SubdomainT = Aws::String>
    GetMonitorResult& WithSubdomain(SubdomainT&& value) { SetSubdomain(std::forward<SubdomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GetMonitorResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetMonitorResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const { return m_identityCenterInstanceArn; }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    void SetIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::forward<IdentityCenterInstanceArnT>(value); }
    template<typename IdentityCenterInstanceArnT = Aws::String>
    GetMonitorResult& WithIdentityCenterInstanceArn(IdentityCenterInstanceArnT&& value) { SetIdentityCenterInstanceArn(std::forward<IdentityCenterInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const { return m_identityCenterApplicationArn; }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    void SetIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = std::forward<IdentityCenterApplicationArnT>(value); }
    template<typename IdentityCenterApplicationArnT = Aws::String>
    GetMonitorResult& WithIdentityCenterApplicationArn(IdentityCenterApplicationArnT&& value) { SetIdentityCenterApplicationArn(std::forward<IdentityCenterApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetMonitorResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetMonitorResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of the last date and time that the monitor was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetMonitorResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetMonitorResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMonitorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorId;
    bool m_monitorIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
