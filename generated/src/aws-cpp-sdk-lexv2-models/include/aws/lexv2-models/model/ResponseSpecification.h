/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/MessageGroup.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Specifies a list of message groups that Amazon Lex uses to respond the user
   * input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ResponseSpecification">AWS
   * API Reference</a></p>
   */
  class ResponseSpecification
  {
  public:
    AWS_LEXMODELSV2_API ResponseSpecification() = default;
    AWS_LEXMODELSV2_API ResponseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ResponseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const { return m_messageGroups; }
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }
    template<typename MessageGroupsT = Aws::Vector<MessageGroup>>
    void SetMessageGroups(MessageGroupsT&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::forward<MessageGroupsT>(value); }
    template<typename MessageGroupsT = Aws::Vector<MessageGroup>>
    ResponseSpecification& WithMessageGroups(MessageGroupsT&& value) { SetMessageGroups(std::forward<MessageGroupsT>(value)); return *this;}
    template<typename MessageGroupsT = MessageGroup>
    ResponseSpecification& AddMessageGroups(MessageGroupsT&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.emplace_back(std::forward<MessageGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the user can interrupt a speech response from Amazon
     * Lex.</p>
     */
    inline bool GetAllowInterrupt() const { return m_allowInterrupt; }
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }
    inline ResponseSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}
    ///@}
  private:

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    bool m_allowInterrupt{false};
    bool m_allowInterruptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
