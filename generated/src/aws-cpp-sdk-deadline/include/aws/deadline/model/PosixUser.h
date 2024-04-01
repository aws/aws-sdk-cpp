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
   * <p>The POSIX user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/PosixUser">AWS
   * API Reference</a></p>
   */
  class PosixUser
  {
  public:
    AWS_DEADLINE_API PosixUser();
    AWS_DEADLINE_API PosixUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API PosixUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline PosixUser& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline PosixUser& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the POSIX user's group.</p>
     */
    inline PosixUser& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>The name of the POSIX user.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The name of the POSIX user.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The name of the POSIX user.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The name of the POSIX user.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The name of the POSIX user.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The name of the POSIX user.</p>
     */
    inline PosixUser& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The name of the POSIX user.</p>
     */
    inline PosixUser& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The name of the POSIX user.</p>
     */
    inline PosixUser& WithUser(const char* value) { SetUser(value); return *this;}

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
