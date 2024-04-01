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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{

  /**
   * <p>Provides information about a monitor in Deadline Cloud.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/MonitorSummary">AWS
   * API Reference</a></p>
   */
  class MonitorSummary
  {
  public:
    AWS_DEADLINE_API MonitorSummary();
    AWS_DEADLINE_API MonitorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API MonitorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline MonitorSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was created.</p>
     */
    inline MonitorSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline MonitorSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline MonitorSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user name of the person that created the monitor.</p>
     */
    inline MonitorSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline MonitorSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline MonitorSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor that displays on the Deadline Cloud console.</p>
     */
    inline MonitorSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const{ return m_identityCenterApplicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline bool IdentityCenterApplicationArnHasBeenSet() const { return m_identityCenterApplicationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline void SetIdentityCenterApplicationArn(const Aws::String& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline void SetIdentityCenterApplicationArn(Aws::String&& value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline void SetIdentityCenterApplicationArn(const char* value) { m_identityCenterApplicationArnHasBeenSet = true; m_identityCenterApplicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline MonitorSummary& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline MonitorSummary& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the IAM Identity Center assigned to the
     * monitor when it was created.</p>
     */
    inline MonitorSummary& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const{ return m_identityCenterInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline MonitorSummary& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline MonitorSummary& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance
     * responsible for authenticating monitor users.</p>
     */
    inline MonitorSummary& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}


    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline const Aws::String& GetMonitorId() const{ return m_monitorId; }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline bool MonitorIdHasBeenSet() const { return m_monitorIdHasBeenSet; }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline void SetMonitorId(const Aws::String& value) { m_monitorIdHasBeenSet = true; m_monitorId = value; }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline void SetMonitorId(Aws::String&& value) { m_monitorIdHasBeenSet = true; m_monitorId = std::move(value); }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline void SetMonitorId(const char* value) { m_monitorIdHasBeenSet = true; m_monitorId.assign(value); }

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline MonitorSummary& WithMonitorId(const Aws::String& value) { SetMonitorId(value); return *this;}

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline MonitorSummary& WithMonitorId(Aws::String&& value) { SetMonitorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the monitor.</p>
     */
    inline MonitorSummary& WithMonitorId(const char* value) { SetMonitorId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline MonitorSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline MonitorSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the monitor. Users of the
     * monitor use this role to access Deadline Cloud resources.</p>
     */
    inline MonitorSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline const Aws::String& GetSubdomain() const{ return m_subdomain; }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(const Aws::String& value) { m_subdomainHasBeenSet = true; m_subdomain = value; }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(Aws::String&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::move(value); }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(const char* value) { m_subdomainHasBeenSet = true; m_subdomain.assign(value); }

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline MonitorSummary& WithSubdomain(const Aws::String& value) { SetSubdomain(value); return *this;}

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline MonitorSummary& WithSubdomain(Aws::String&& value) { SetSubdomain(std::move(value)); return *this;}

    /**
     * <p>The subdomain used for the monitor URL. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline MonitorSummary& WithSubdomain(const char* value) { SetSubdomain(value); return *this;}


    /**
     * <p>The UNIX timestamp of the date and time that the monitor was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was last
     * updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was last
     * updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was last
     * updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was last
     * updated.</p>
     */
    inline MonitorSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The UNIX timestamp of the date and time that the monitor was last
     * updated.</p>
     */
    inline MonitorSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline MonitorSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline MonitorSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user name of the person that last updated the monitor.</p>
     */
    inline MonitorSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline MonitorSummary& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline MonitorSummary& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The complete URL of the monitor. The full URL of the monitor is
     * subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline MonitorSummary& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_identityCenterApplicationArn;
    bool m_identityCenterApplicationArnHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;

    Aws::String m_monitorId;
    bool m_monitorIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
