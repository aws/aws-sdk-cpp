/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DEADLINE_API GetMonitorResult();
    AWS_DEADLINE_API GetMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline GetMonitorResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline GetMonitorResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline GetMonitorResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline GetMonitorResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline GetMonitorResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     */
    inline GetMonitorResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     */
    inline GetMonitorResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name used to identify the monitor on the Deadline Cloud console.</p>
     */
    inline GetMonitorResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const{ return m_identityCenterApplicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline void SetIdentityCenterApplicationArn(const Aws::String& value) { m_identityCenterApplicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline void SetIdentityCenterApplicationArn(Aws::String&& value) { m_identityCenterApplicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline void SetIdentityCenterApplicationArn(const char* value) { m_identityCenterApplicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline GetMonitorResult& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline GetMonitorResult& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline GetMonitorResult& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const{ return m_identityCenterInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline GetMonitorResult& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline GetMonitorResult& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline GetMonitorResult& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}


    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline const Aws::String& GetMonitorId() const{ return m_monitorId; }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline void SetMonitorId(const Aws::String& value) { m_monitorId = value; }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline void SetMonitorId(Aws::String&& value) { m_monitorId = std::move(value); }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline void SetMonitorId(const char* value) { m_monitorId.assign(value); }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorId(const Aws::String& value) { SetMonitorId(value); return *this;}

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorId(Aws::String&& value) { SetMonitorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline GetMonitorResult& WithMonitorId(const char* value) { SetMonitorId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline GetMonitorResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline GetMonitorResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline GetMonitorResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline const Aws::String& GetSubdomain() const{ return m_subdomain; }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(const Aws::String& value) { m_subdomain = value; }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(Aws::String&& value) { m_subdomain = std::move(value); }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(const char* value) { m_subdomain.assign(value); }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline GetMonitorResult& WithSubdomain(const Aws::String& value) { SetSubdomain(value); return *this;}

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline GetMonitorResult& WithSubdomain(Aws::String&& value) { SetSubdomain(std::move(value)); return *this;}

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline GetMonitorResult& WithSubdomain(const char* value) { SetSubdomain(value); return *this;}


    /**
     * <p>The UNIX timestamp of the last date and time that the monitor was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The UNIX timestamp of the last date and time that the monitor was
     * updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The UNIX timestamp of the last date and time that the monitor was
     * updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The UNIX timestamp of the last date and time that the monitor was
     * updated.</p>
     */
    inline GetMonitorResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The UNIX timestamp of the last date and time that the monitor was
     * updated.</p>
     */
    inline GetMonitorResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline GetMonitorResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline GetMonitorResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline GetMonitorResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline GetMonitorResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline GetMonitorResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline GetMonitorResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_displayName;

    Aws::String m_identityCenterApplicationArn;

    Aws::String m_identityCenterInstanceArn;

    Aws::String m_monitorId;

    Aws::String m_roleArn;

    Aws::String m_subdomain;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
