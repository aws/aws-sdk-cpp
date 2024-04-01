/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class CreateMonitorRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitor"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateMonitorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateMonitorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline CreateMonitorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline CreateMonitorRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline CreateMonitorRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name that you give the monitor that is displayed in the Deadline Cloud
     * console.</p>
     */
    inline CreateMonitorRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline const Aws::String& GetIdentityCenterInstanceArn() const{ return m_identityCenterInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline bool IdentityCenterInstanceArnHasBeenSet() const { return m_identityCenterInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(const Aws::String& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(Aws::String&& value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline void SetIdentityCenterInstanceArn(const char* value) { m_identityCenterInstanceArnHasBeenSet = true; m_identityCenterInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline CreateMonitorRequest& WithIdentityCenterInstanceArn(const Aws::String& value) { SetIdentityCenterInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline CreateMonitorRequest& WithIdentityCenterInstanceArn(Aws::String&& value) { SetIdentityCenterInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center instance that
     * authenticates monitor users.</p>
     */
    inline CreateMonitorRequest& WithIdentityCenterInstanceArn(const char* value) { SetIdentityCenterInstanceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline CreateMonitorRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline CreateMonitorRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the monitor uses to
     * connect to Deadline Cloud. Every user that signs in to the monitor using IAM
     * Identity Center uses this role to access Deadline Cloud resources.</p>
     */
    inline CreateMonitorRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline const Aws::String& GetSubdomain() const{ return m_subdomain; }

    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }

    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(const Aws::String& value) { m_subdomainHasBeenSet = true; m_subdomain = value; }

    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(Aws::String&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::move(value); }

    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline void SetSubdomain(const char* value) { m_subdomainHasBeenSet = true; m_subdomain.assign(value); }

    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline CreateMonitorRequest& WithSubdomain(const Aws::String& value) { SetSubdomain(value); return *this;}

    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline CreateMonitorRequest& WithSubdomain(Aws::String&& value) { SetSubdomain(std::move(value)); return *this;}

    /**
     * <p>The subdomain to use when creating the monitor URL. The full URL of the
     * monitor is subdomain.Region.deadlinecloud.amazonaws.com.</p>
     */
    inline CreateMonitorRequest& WithSubdomain(const char* value) { SetSubdomain(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_identityCenterInstanceArn;
    bool m_identityCenterInstanceArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
