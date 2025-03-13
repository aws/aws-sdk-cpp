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
    AWS_DEADLINE_API UserJobsFirst() = default;
    AWS_DEADLINE_API UserJobsFirst(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API UserJobsFirst& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user's ID.</p>
     */
    inline const Aws::String& GetUserIdentityId() const { return m_userIdentityId; }
    inline bool UserIdentityIdHasBeenSet() const { return m_userIdentityIdHasBeenSet; }
    template<typename UserIdentityIdT = Aws::String>
    void SetUserIdentityId(UserIdentityIdT&& value) { m_userIdentityIdHasBeenSet = true; m_userIdentityId = std::forward<UserIdentityIdT>(value); }
    template<typename UserIdentityIdT = Aws::String>
    UserJobsFirst& WithUserIdentityId(UserIdentityIdT&& value) { SetUserIdentityId(std::forward<UserIdentityIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userIdentityId;
    bool m_userIdentityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
