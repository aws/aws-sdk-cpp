/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The target of a message, a sender, a user, or a bot. Only the target and the
   * sender can view targeted messages. Only users who can see targeted messages can
   * take actions on them. However, administrators can delete targeted messages that
   * they can’t see.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_CHIMESDKMESSAGING_API Target() = default;
    AWS_CHIMESDKMESSAGING_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline const Aws::String& GetMemberArn() const { return m_memberArn; }
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }
    template<typename MemberArnT = Aws::String>
    void SetMemberArn(MemberArnT&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::forward<MemberArnT>(value); }
    template<typename MemberArnT = Aws::String>
    Target& WithMemberArn(MemberArnT&& value) { SetMemberArn(std::forward<MemberArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
