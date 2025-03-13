/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>The users that belong to a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/MemberUser">AWS
   * API Reference</a></p>
   */
  class MemberUser
  {
  public:
    AWS_KENDRA_API MemberUser() = default;
    AWS_KENDRA_API MemberUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API MemberUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the user you want to map to a group.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    MemberUser& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
