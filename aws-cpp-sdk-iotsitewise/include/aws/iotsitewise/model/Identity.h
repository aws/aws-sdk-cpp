/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/UserIdentity.h>
#include <aws/iotsitewise/model/GroupIdentity.h>
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
   * <p>Contains an AWS SSO identity ID for a user or group.</p> <note> <p>Currently,
   * you can't use AWS APIs to retrieve AWS SSO identity IDs. You can find the AWS
   * SSO identity IDs in the URL of user and group pages in the <a
   * href="https://console.aws.amazon.com/singlesignon">AWS SSO console</a>.</p>
   * </note><p><h3>See Also:</h3>   <a
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
     * <p>A user identity.</p>
     */
    inline const UserIdentity& GetUser() const{ return m_user; }

    /**
     * <p>A user identity.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>A user identity.</p>
     */
    inline void SetUser(const UserIdentity& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>A user identity.</p>
     */
    inline void SetUser(UserIdentity&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>A user identity.</p>
     */
    inline Identity& WithUser(const UserIdentity& value) { SetUser(value); return *this;}

    /**
     * <p>A user identity.</p>
     */
    inline Identity& WithUser(UserIdentity&& value) { SetUser(std::move(value)); return *this;}


    /**
     * <p>A group identity.</p>
     */
    inline const GroupIdentity& GetGroup() const{ return m_group; }

    /**
     * <p>A group identity.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>A group identity.</p>
     */
    inline void SetGroup(const GroupIdentity& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>A group identity.</p>
     */
    inline void SetGroup(GroupIdentity&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>A group identity.</p>
     */
    inline Identity& WithGroup(const GroupIdentity& value) { SetGroup(value); return *this;}

    /**
     * <p>A group identity.</p>
     */
    inline Identity& WithGroup(GroupIdentity&& value) { SetGroup(std::move(value)); return *this;}

  private:

    UserIdentity m_user;
    bool m_userHasBeenSet;

    GroupIdentity m_group;
    bool m_groupHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
