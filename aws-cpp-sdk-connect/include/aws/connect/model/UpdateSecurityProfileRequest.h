/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API UpdateSecurityProfileRequest : public ConnectRequest
  {
  public:
    UpdateSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The description of the security profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the security profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the security profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the security profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the security profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& AddPermissions(const Aws::String& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& AddPermissions(Aws::String&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& AddPermissions(const char* value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }


    /**
     * <p>The identifier for the security profle.</p>
     */
    inline const Aws::String& GetSecurityProfileId() const{ return m_securityProfileId; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline bool SecurityProfileIdHasBeenSet() const { return m_securityProfileIdHasBeenSet; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(const Aws::String& value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId = value; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(Aws::String&& value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId = std::move(value); }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(const char* value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId.assign(value); }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileId(const Aws::String& value) { SetSecurityProfileId(value); return *this;}

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileId(Aws::String&& value) { SetSecurityProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileId(const char* value) { SetSecurityProfileId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateSecurityProfileRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateSecurityProfileRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateSecurityProfileRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_securityProfileId;
    bool m_securityProfileIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
