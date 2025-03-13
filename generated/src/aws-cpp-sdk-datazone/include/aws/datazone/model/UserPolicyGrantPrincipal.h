/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AllUsersGrantFilter.h>
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
   * <p>The user policy grant principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/UserPolicyGrantPrincipal">AWS
   * API Reference</a></p>
   */
  class UserPolicyGrantPrincipal
  {
  public:
    AWS_DATAZONE_API UserPolicyGrantPrincipal() = default;
    AWS_DATAZONE_API UserPolicyGrantPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API UserPolicyGrantPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The all users grant filter of the user policy grant principal.</p>
     */
    inline const AllUsersGrantFilter& GetAllUsersGrantFilter() const { return m_allUsersGrantFilter; }
    inline bool AllUsersGrantFilterHasBeenSet() const { return m_allUsersGrantFilterHasBeenSet; }
    template<typename AllUsersGrantFilterT = AllUsersGrantFilter>
    void SetAllUsersGrantFilter(AllUsersGrantFilterT&& value) { m_allUsersGrantFilterHasBeenSet = true; m_allUsersGrantFilter = std::forward<AllUsersGrantFilterT>(value); }
    template<typename AllUsersGrantFilterT = AllUsersGrantFilter>
    UserPolicyGrantPrincipal& WithAllUsersGrantFilter(AllUsersGrantFilterT&& value) { SetAllUsersGrantFilter(std::forward<AllUsersGrantFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user policy grant principal.</p>
     */
    inline const Aws::String& GetUserIdentifier() const { return m_userIdentifier; }
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }
    template<typename UserIdentifierT = Aws::String>
    void SetUserIdentifier(UserIdentifierT&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::forward<UserIdentifierT>(value); }
    template<typename UserIdentifierT = Aws::String>
    UserPolicyGrantPrincipal& WithUserIdentifier(UserIdentifierT&& value) { SetUserIdentifier(std::forward<UserIdentifierT>(value)); return *this;}
    ///@}
  private:

    AllUsersGrantFilter m_allUsersGrantFilter;
    bool m_allUsersGrantFilterHasBeenSet = false;

    Aws::String m_userIdentifier;
    bool m_userIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
