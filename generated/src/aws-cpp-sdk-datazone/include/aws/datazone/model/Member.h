/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details about a project member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Member">AWS API
   * Reference</a></p>
   */
  class Member
  {
  public:
    AWS_DATAZONE_API Member() = default;
    AWS_DATAZONE_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline const Aws::String& GetGroupIdentifier() const { return m_groupIdentifier; }
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }
    template<typename GroupIdentifierT = Aws::String>
    void SetGroupIdentifier(GroupIdentifierT&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::forward<GroupIdentifierT>(value); }
    template<typename GroupIdentifierT = Aws::String>
    Member& WithGroupIdentifier(GroupIdentifierT&& value) { SetGroupIdentifier(std::forward<GroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of a project member.</p>
     */
    inline const Aws::String& GetUserIdentifier() const { return m_userIdentifier; }
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }
    template<typename UserIdentifierT = Aws::String>
    void SetUserIdentifier(UserIdentifierT&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::forward<UserIdentifierT>(value); }
    template<typename UserIdentifierT = Aws::String>
    Member& WithUserIdentifier(UserIdentifierT&& value) { SetUserIdentifier(std::forward<UserIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::String m_userIdentifier;
    bool m_userIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
