/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ConversationRole.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The start of a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/MessageStartEvent">AWS
   * API Reference</a></p>
   */
  class MessageStartEvent
  {
  public:
    AWS_BEDROCKRUNTIME_API MessageStartEvent();
    AWS_BEDROCKRUNTIME_API MessageStartEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API MessageStartEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role for the message.</p>
     */
    inline const ConversationRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const ConversationRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(ConversationRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline MessageStartEvent& WithRole(const ConversationRole& value) { SetRole(value); return *this;}
    inline MessageStartEvent& WithRole(ConversationRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}
  private:

    ConversationRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
