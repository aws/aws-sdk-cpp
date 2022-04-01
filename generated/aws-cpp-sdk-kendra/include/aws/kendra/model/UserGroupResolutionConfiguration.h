﻿/**
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
   * users from an Amazon Web Services Single Sign On identity source. This is useful
   * for setting up user context filtering, where Amazon Kendra filters search
   * results for different users based on their group's access to documents. You can
   * also map your users to their groups for user context filtering using the <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_PutPrincipalMapping.html">PutPrincipalMapping
   * API</a>.</p> <p>To set up an Amazon Web Services SSO identity source in the
   * console to use with Amazon Kendra, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
   * started with an Amazon Web Services SSO identity source</a>. You must also grant
   * the required permissions to use Amazon Web Services SSO with Amazon Kendra. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html#iam-roles-aws-sso">IAM
   * roles for Amazon Web Services SSO</a>.</p> <p>Amazon Kendra currently does not
   * support using <code>UserGroupResolutionConfiguration</code> with an Amazon Web
   * Services organization member account for your Amazon Web Services SSO identify
   * source. You must create your index in the management account for the
   * organization in order to use
   * <code>UserGroupResolutionConfiguration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UserGroupResolutionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API UserGroupResolutionConfiguration
  {
  public:
    UserGroupResolutionConfiguration();
    UserGroupResolutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    UserGroupResolutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. Amazon Web Services Single Sign On is currently the only
     * available mode. Your users and groups must exist in an Amazon Web Services SSO
     * identity source in order to use this mode.</p>
     */
    inline const UserGroupResolutionMode& GetUserGroupResolutionMode() const{ return m_userGroupResolutionMode; }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. Amazon Web Services Single Sign On is currently the only
     * available mode. Your users and groups must exist in an Amazon Web Services SSO
     * identity source in order to use this mode.</p>
     */
    inline bool UserGroupResolutionModeHasBeenSet() const { return m_userGroupResolutionModeHasBeenSet; }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. Amazon Web Services Single Sign On is currently the only
     * available mode. Your users and groups must exist in an Amazon Web Services SSO
     * identity source in order to use this mode.</p>
     */
    inline void SetUserGroupResolutionMode(const UserGroupResolutionMode& value) { m_userGroupResolutionModeHasBeenSet = true; m_userGroupResolutionMode = value; }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. Amazon Web Services Single Sign On is currently the only
     * available mode. Your users and groups must exist in an Amazon Web Services SSO
     * identity source in order to use this mode.</p>
     */
    inline void SetUserGroupResolutionMode(UserGroupResolutionMode&& value) { m_userGroupResolutionModeHasBeenSet = true; m_userGroupResolutionMode = std::move(value); }

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. Amazon Web Services Single Sign On is currently the only
     * available mode. Your users and groups must exist in an Amazon Web Services SSO
     * identity source in order to use this mode.</p>
     */
    inline UserGroupResolutionConfiguration& WithUserGroupResolutionMode(const UserGroupResolutionMode& value) { SetUserGroupResolutionMode(value); return *this;}

    /**
     * <p>The identity store provider (mode) you want to use to fetch access levels of
     * groups and users. Amazon Web Services Single Sign On is currently the only
     * available mode. Your users and groups must exist in an Amazon Web Services SSO
     * identity source in order to use this mode.</p>
     */
    inline UserGroupResolutionConfiguration& WithUserGroupResolutionMode(UserGroupResolutionMode&& value) { SetUserGroupResolutionMode(std::move(value)); return *this;}

  private:

    UserGroupResolutionMode m_userGroupResolutionMode;
    bool m_userGroupResolutionModeHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
