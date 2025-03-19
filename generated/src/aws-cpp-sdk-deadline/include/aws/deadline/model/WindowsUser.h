/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The Windows user details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/WindowsUser">AWS
   * API Reference</a></p>
   */
  class WindowsUser
  {
  public:
    AWS_DEADLINE_API WindowsUser() = default;
    AWS_DEADLINE_API WindowsUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WindowsUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    WindowsUser& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline const Aws::String& GetPasswordArn() const { return m_passwordArn; }
    inline bool PasswordArnHasBeenSet() const { return m_passwordArnHasBeenSet; }
    template<typename PasswordArnT = Aws::String>
    void SetPasswordArn(PasswordArnT&& value) { m_passwordArnHasBeenSet = true; m_passwordArn = std::forward<PasswordArnT>(value); }
    template<typename PasswordArnT = Aws::String>
    WindowsUser& WithPasswordArn(PasswordArnT&& value) { SetPasswordArn(std::forward<PasswordArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_passwordArn;
    bool m_passwordArnHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
