/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/MemberChangeSpecification.h>
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
   * <p>A union that contains the specification details for different types of
   * changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ChangeSpecification">AWS
   * API Reference</a></p>
   */
  class ChangeSpecification
  {
  public:
    AWS_CLEANROOMS_API ChangeSpecification() = default;
    AWS_CLEANROOMS_API ChangeSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ChangeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The member change specification when the change type is
     * <code>MEMBER</code>.</p>
     */
    inline const MemberChangeSpecification& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = MemberChangeSpecification>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = MemberChangeSpecification>
    ChangeSpecification& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}
  private:

    MemberChangeSpecification m_member;
    bool m_memberHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
