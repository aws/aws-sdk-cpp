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
   * <p>Allows setting a specific user's job to run first.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UserJobsFirst">AWS
   * API Reference</a></p>
   */
  class UserJobsFirst
  {
  public:
    AWS_DEADLINE_API UserJobsFirst();
    AWS_DEADLINE_API UserJobsFirst(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API UserJobsFirst& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user's ID.</p>
     */
    inline const Aws::String& GetUserIdentityId() const{ return m_userIdentityId; }

    /**
     * <p>The user's ID.</p>
     */
    inline bool UserIdentityIdHasBeenSet() const { return m_userIdentityIdHasBeenSet; }

    /**
     * <p>The user's ID.</p>
     */
    inline void SetUserIdentityId(const Aws::String& value) { m_userIdentityIdHasBeenSet = true; m_userIdentityId = value; }

    /**
     * <p>The user's ID.</p>
     */
    inline void SetUserIdentityId(Aws::String&& value) { m_userIdentityIdHasBeenSet = true; m_userIdentityId = std::move(value); }

    /**
     * <p>The user's ID.</p>
     */
    inline void SetUserIdentityId(const char* value) { m_userIdentityIdHasBeenSet = true; m_userIdentityId.assign(value); }

    /**
     * <p>The user's ID.</p>
     */
    inline UserJobsFirst& WithUserIdentityId(const Aws::String& value) { SetUserIdentityId(value); return *this;}

    /**
     * <p>The user's ID.</p>
     */
    inline UserJobsFirst& WithUserIdentityId(Aws::String&& value) { SetUserIdentityId(std::move(value)); return *this;}

    /**
     * <p>The user's ID.</p>
     */
    inline UserJobsFirst& WithUserIdentityId(const char* value) { SetUserIdentityId(value); return *this;}

  private:

    Aws::String m_userIdentityId;
    bool m_userIdentityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
