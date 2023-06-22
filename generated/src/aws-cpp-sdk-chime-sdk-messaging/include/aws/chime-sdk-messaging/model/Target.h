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
    AWS_CHIMESDKMESSAGING_API Target();
    AWS_CHIMESDKMESSAGING_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline const Aws::String& GetMemberArn() const{ return m_memberArn; }

    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline bool MemberArnHasBeenSet() const { return m_memberArnHasBeenSet; }

    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline void SetMemberArn(const Aws::String& value) { m_memberArnHasBeenSet = true; m_memberArn = value; }

    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline void SetMemberArn(Aws::String&& value) { m_memberArnHasBeenSet = true; m_memberArn = std::move(value); }

    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline void SetMemberArn(const char* value) { m_memberArnHasBeenSet = true; m_memberArn.assign(value); }

    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline Target& WithMemberArn(const Aws::String& value) { SetMemberArn(value); return *this;}

    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline Target& WithMemberArn(Aws::String&& value) { SetMemberArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target channel member.</p>
     */
    inline Target& WithMemberArn(const char* value) { SetMemberArn(value); return *this;}

  private:

    Aws::String m_memberArn;
    bool m_memberArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
