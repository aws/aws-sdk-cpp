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
    AWS_DATAZONE_API UserPolicyGrantPrincipal();
    AWS_DATAZONE_API UserPolicyGrantPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API UserPolicyGrantPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The all users grant filter of the user policy grant principal.</p>
     */
    inline const AllUsersGrantFilter& GetAllUsersGrantFilter() const{ return m_allUsersGrantFilter; }
    inline bool AllUsersGrantFilterHasBeenSet() const { return m_allUsersGrantFilterHasBeenSet; }
    inline void SetAllUsersGrantFilter(const AllUsersGrantFilter& value) { m_allUsersGrantFilterHasBeenSet = true; m_allUsersGrantFilter = value; }
    inline void SetAllUsersGrantFilter(AllUsersGrantFilter&& value) { m_allUsersGrantFilterHasBeenSet = true; m_allUsersGrantFilter = std::move(value); }
    inline UserPolicyGrantPrincipal& WithAllUsersGrantFilter(const AllUsersGrantFilter& value) { SetAllUsersGrantFilter(value); return *this;}
    inline UserPolicyGrantPrincipal& WithAllUsersGrantFilter(AllUsersGrantFilter&& value) { SetAllUsersGrantFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user policy grant principal.</p>
     */
    inline const Aws::String& GetUserIdentifier() const{ return m_userIdentifier; }
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }
    inline void SetUserIdentifier(const Aws::String& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = value; }
    inline void SetUserIdentifier(Aws::String&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::move(value); }
    inline void SetUserIdentifier(const char* value) { m_userIdentifierHasBeenSet = true; m_userIdentifier.assign(value); }
    inline UserPolicyGrantPrincipal& WithUserIdentifier(const Aws::String& value) { SetUserIdentifier(value); return *this;}
    inline UserPolicyGrantPrincipal& WithUserIdentifier(Aws::String&& value) { SetUserIdentifier(std::move(value)); return *this;}
    inline UserPolicyGrantPrincipal& WithUserIdentifier(const char* value) { SetUserIdentifier(value); return *this;}
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
