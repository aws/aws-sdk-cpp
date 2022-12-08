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
    AWS_LEXMODELSV2_API ResponseSpecification();
    AWS_LEXMODELSV2_API ResponseSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ResponseSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline const Aws::Vector<MessageGroup>& GetMessageGroups() const{ return m_messageGroups; }

    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline bool MessageGroupsHasBeenSet() const { return m_messageGroupsHasBeenSet; }

    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline void SetMessageGroups(const Aws::Vector<MessageGroup>& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = value; }

    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline void SetMessageGroups(Aws::Vector<MessageGroup>&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups = std::move(value); }

    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline ResponseSpecification& WithMessageGroups(const Aws::Vector<MessageGroup>& value) { SetMessageGroups(value); return *this;}

    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline ResponseSpecification& WithMessageGroups(Aws::Vector<MessageGroup>&& value) { SetMessageGroups(std::move(value)); return *this;}

    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline ResponseSpecification& AddMessageGroups(const MessageGroup& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(value); return *this; }

    /**
     * <p>A collection of responses that Amazon Lex can send to the user. Amazon Lex
     * chooses the actual response to send at runtime.</p>
     */
    inline ResponseSpecification& AddMessageGroups(MessageGroup&& value) { m_messageGroupsHasBeenSet = true; m_messageGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the user can interrupt a speech response from Amazon
     * Lex.</p>
     */
    inline bool GetAllowInterrupt() const{ return m_allowInterrupt; }

    /**
     * <p>Indicates whether the user can interrupt a speech response from Amazon
     * Lex.</p>
     */
    inline bool AllowInterruptHasBeenSet() const { return m_allowInterruptHasBeenSet; }

    /**
     * <p>Indicates whether the user can interrupt a speech response from Amazon
     * Lex.</p>
     */
    inline void SetAllowInterrupt(bool value) { m_allowInterruptHasBeenSet = true; m_allowInterrupt = value; }

    /**
     * <p>Indicates whether the user can interrupt a speech response from Amazon
     * Lex.</p>
     */
    inline ResponseSpecification& WithAllowInterrupt(bool value) { SetAllowInterrupt(value); return *this;}

  private:

    Aws::Vector<MessageGroup> m_messageGroups;
    bool m_messageGroupsHasBeenSet = false;

    bool m_allowInterrupt;
    bool m_allowInterruptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
