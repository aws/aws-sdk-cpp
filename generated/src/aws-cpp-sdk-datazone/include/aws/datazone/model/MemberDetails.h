/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GroupDetails.h>
#include <aws/datazone/model/UserDetails.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details about a project member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MemberDetails">AWS
   * API Reference</a></p>
   */
  class MemberDetails
  {
  public:
    AWS_DATAZONE_API MemberDetails();
    AWS_DATAZONE_API MemberDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MemberDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group details of a project member.</p>
     */
    inline const GroupDetails& GetGroup() const{ return m_group; }

    /**
     * <p>The group details of a project member.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The group details of a project member.</p>
     */
    inline void SetGroup(const GroupDetails& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The group details of a project member.</p>
     */
    inline void SetGroup(GroupDetails&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The group details of a project member.</p>
     */
    inline MemberDetails& WithGroup(const GroupDetails& value) { SetGroup(value); return *this;}

    /**
     * <p>The group details of a project member.</p>
     */
    inline MemberDetails& WithGroup(GroupDetails&& value) { SetGroup(std::move(value)); return *this;}


    /**
     * <p>The user details of a project member.</p>
     */
    inline const UserDetails& GetUser() const{ return m_user; }

    /**
     * <p>The user details of a project member.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user details of a project member.</p>
     */
    inline void SetUser(const UserDetails& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user details of a project member.</p>
     */
    inline void SetUser(UserDetails&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user details of a project member.</p>
     */
    inline MemberDetails& WithUser(const UserDetails& value) { SetUser(value); return *this;}

    /**
     * <p>The user details of a project member.</p>
     */
    inline MemberDetails& WithUser(UserDetails&& value) { SetUser(std::move(value)); return *this;}

  private:

    GroupDetails m_group;
    bool m_groupHasBeenSet = false;

    UserDetails m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
