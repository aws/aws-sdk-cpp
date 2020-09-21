/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/UserIdentity.h>
#include <aws/iotsitewise/model/GroupIdentity.h>
#include <aws/iotsitewise/model/IAMUserIdentity.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an identity that can access an AWS IoT SiteWise Monitor
   * resource.</p>  <p>Currently, you can't use AWS APIs to retrieve AWS SSO
   * identity IDs. You can find the AWS SSO identity IDs in the URL of user and group
   * pages in the <a href="https://console.aws.amazon.com/singlesignon">AWS SSO
   * console</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Identity">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API Identity
  {
  public:
    Identity();
    Identity(Aws::Utils::Json::JsonView jsonValue);
    Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An AWS SSO user identity.</p>
     */
    inline const UserIdentity& GetUser() const{ return m_user; }

    /**
     * <p>An AWS SSO user identity.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>An AWS SSO user identity.</p>
     */
    inline void SetUser(const UserIdentity& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>An AWS SSO user identity.</p>
     */
    inline void SetUser(UserIdentity&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>An AWS SSO user identity.</p>
     */
    inline Identity& WithUser(const UserIdentity& value) { SetUser(value); return *this;}

    /**
     * <p>An AWS SSO user identity.</p>
     */
    inline Identity& WithUser(UserIdentity&& value) { SetUser(std::move(value)); return *this;}


    /**
     * <p>An AWS SSO group identity.</p>
     */
    inline const GroupIdentity& GetGroup() const{ return m_group; }

    /**
     * <p>An AWS SSO group identity.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>An AWS SSO group identity.</p>
     */
    inline void SetGroup(const GroupIdentity& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>An AWS SSO group identity.</p>
     */
    inline void SetGroup(GroupIdentity&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>An AWS SSO group identity.</p>
     */
    inline Identity& WithGroup(const GroupIdentity& value) { SetGroup(value); return *this;}

    /**
     * <p>An AWS SSO group identity.</p>
     */
    inline Identity& WithGroup(GroupIdentity&& value) { SetGroup(std::move(value)); return *this;}


    /**
     * <p>An IAM user identity.</p>
     */
    inline const IAMUserIdentity& GetIamUser() const{ return m_iamUser; }

    /**
     * <p>An IAM user identity.</p>
     */
    inline bool IamUserHasBeenSet() const { return m_iamUserHasBeenSet; }

    /**
     * <p>An IAM user identity.</p>
     */
    inline void SetIamUser(const IAMUserIdentity& value) { m_iamUserHasBeenSet = true; m_iamUser = value; }

    /**
     * <p>An IAM user identity.</p>
     */
    inline void SetIamUser(IAMUserIdentity&& value) { m_iamUserHasBeenSet = true; m_iamUser = std::move(value); }

    /**
     * <p>An IAM user identity.</p>
     */
    inline Identity& WithIamUser(const IAMUserIdentity& value) { SetIamUser(value); return *this;}

    /**
     * <p>An IAM user identity.</p>
     */
    inline Identity& WithIamUser(IAMUserIdentity&& value) { SetIamUser(std::move(value)); return *this;}

  private:

    UserIdentity m_user;
    bool m_userHasBeenSet;

    GroupIdentity m_group;
    bool m_groupHasBeenSet;

    IAMUserIdentity m_iamUser;
    bool m_iamUserHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
