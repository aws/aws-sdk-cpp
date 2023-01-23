/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/UserGroupResolutionMode.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to fetch access levels of groups and
   * users from an IAM Identity Center (successor to Single Sign-On) identity source.
   * This is useful for user context filtering, where search results are filtered
   * based on the user or their group access to documents. You can also use the <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_PutPrincipalMapping.html">PutPrincipalMapping</a>
   * API to map users to their groups so that you only need to provide the user ID
   * when you issue the query.</p> <p>To set up an IAM Identity Center identity
   * source in the console to use with Amazon Kendra, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
   * started with an IAM Identity Center identity source</a>. You must also grant the
   * required permissions to use IAM Identity Center with Amazon Kendra. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html#iam-roles-aws-sso">IAM
   * roles for IAM Identity Center</a>.</p> <p>Amazon Kendra currently does not
   * support using <code>UserGroupResolutionConfiguration</code> with an Amazon Web
   * Services organization member account for your IAM Identity Center identify
   * source. You must create your index in the management account for the
   * organization in order to use
   * <code>UserGroupResolutionConfiguration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UserGroupResolutionConfiguration">AWS
   * API Reference</a></p>
   */
  class UserGroupResolutionConfiguration
  {
  public:
    AWS_KENDRA_API UserGroupResolutionConfiguration();
    AWS_KENDRA_API UserGroupResolutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API UserGroupResolutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. IAM Identity Center (successor to Single Sign-On) is currently
     * the only available mode. Your users and groups must exist in an IAM Identity
     * Center identity source in order to use this mode.</p>
     */
    inline const UserGroupResolutionMode& GetUserGroupResolutionMode() const{ return m_userGroupResolutionMode; }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. IAM Identity Center (successor to Single Sign-On) is currently
     * the only available mode. Your users and groups must exist in an IAM Identity
     * Center identity source in order to use this mode.</p>
     */
    inline bool UserGroupResolutionModeHasBeenSet() const { return m_userGroupResolutionModeHasBeenSet; }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. IAM Identity Center (successor to Single Sign-On) is currently
     * the only available mode. Your users and groups must exist in an IAM Identity
     * Center identity source in order to use this mode.</p>
     */
    inline void SetUserGroupResolutionMode(const UserGroupResolutionMode& value) { m_userGroupResolutionModeHasBeenSet = true; m_userGroupResolutionMode = value; }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. IAM Identity Center (successor to Single Sign-On) is currently
     * the only available mode. Your users and groups must exist in an IAM Identity
     * Center identity source in order to use this mode.</p>
     */
    inline void SetUserGroupResolutionMode(UserGroupResolutionMode&& value) { m_userGroupResolutionModeHasBeenSet = true; m_userGroupResolutionMode = std::move(value); }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. IAM Identity Center (successor to Single Sign-On) is currently
     * the only available mode. Your users and groups must exist in an IAM Identity
     * Center identity source in order to use this mode.</p>
     */
    inline UserGroupResolutionConfiguration& WithUserGroupResolutionMode(const UserGroupResolutionMode& value) { SetUserGroupResolutionMode(value); return *this;}

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. IAM Identity Center (successor to Single Sign-On) is currently
     * the only available mode. Your users and groups must exist in an IAM Identity
     * Center identity source in order to use this mode.</p>
     */
    inline UserGroupResolutionConfiguration& WithUserGroupResolutionMode(UserGroupResolutionMode&& value) { SetUserGroupResolutionMode(std::move(value)); return *this;}

  private:

    UserGroupResolutionMode m_userGroupResolutionMode;
    bool m_userGroupResolutionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
