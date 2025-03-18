/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobMemberOutputConfigurationInput.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> The protected job output configuration input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobOutputConfigurationInput">AWS
   * API Reference</a></p>
   */
  class ProtectedJobOutputConfigurationInput
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobOutputConfigurationInput() = default;
    AWS_CLEANROOMS_API ProtectedJobOutputConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobOutputConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The member of the protected job output configuration input.</p>
     */
    inline const ProtectedJobMemberOutputConfigurationInput& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = ProtectedJobMemberOutputConfigurationInput>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = ProtectedJobMemberOutputConfigurationInput>
    ProtectedJobOutputConfigurationInput& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}
  private:

    ProtectedJobMemberOutputConfigurationInput m_member;
    bool m_memberHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
