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
    AWS_DEADLINE_API WindowsUser();
    AWS_DEADLINE_API WindowsUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WindowsUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline const Aws::String& GetPasswordArn() const{ return m_passwordArn; }

    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline bool PasswordArnHasBeenSet() const { return m_passwordArnHasBeenSet; }

    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline void SetPasswordArn(const Aws::String& value) { m_passwordArnHasBeenSet = true; m_passwordArn = value; }

    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline void SetPasswordArn(Aws::String&& value) { m_passwordArnHasBeenSet = true; m_passwordArn = std::move(value); }

    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline void SetPasswordArn(const char* value) { m_passwordArnHasBeenSet = true; m_passwordArn.assign(value); }

    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline WindowsUser& WithPasswordArn(const Aws::String& value) { SetPasswordArn(value); return *this;}

    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline WindowsUser& WithPasswordArn(Aws::String&& value) { SetPasswordArn(std::move(value)); return *this;}

    /**
     * <p>The password ARN for the Windows user.</p>
     */
    inline WindowsUser& WithPasswordArn(const char* value) { SetPasswordArn(value); return *this;}


    /**
     * <p>The user.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user.</p>
     */
    inline WindowsUser& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user.</p>
     */
    inline WindowsUser& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user.</p>
     */
    inline WindowsUser& WithUser(const char* value) { SetUser(value); return *this;}

  private:

    Aws::String m_passwordArn;
    bool m_passwordArnHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
