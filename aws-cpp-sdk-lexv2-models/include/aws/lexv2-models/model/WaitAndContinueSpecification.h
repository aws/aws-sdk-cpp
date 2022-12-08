/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
#include <aws/lexv2-models/model/StillWaitingResponseSpecification.h>
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
   * <p>Specifies the prompts that Amazon Lex uses while a bot is waiting for
   * customer input. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/WaitAndContinueSpecification">AWS
   * API Reference</a></p>
   */
  class WaitAndContinueSpecification
  {
  public:
    AWS_LEXMODELSV2_API WaitAndContinueSpecification();
    AWS_LEXMODELSV2_API WaitAndContinueSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API WaitAndContinueSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is waiting for
     * the conversation to continue.</p>
     */
    inline const ResponseSpecification& GetWaitingResponse() const{ return m_waitingResponse; }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is waiting for
     * the conversation to continue.</p>
     */
    inline bool WaitingResponseHasBeenSet() const { return m_waitingResponseHasBeenSet; }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is waiting for
     * the conversation to continue.</p>
     */
    inline void SetWaitingResponse(const ResponseSpecification& value) { m_waitingResponseHasBeenSet = true; m_waitingResponse = value; }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is waiting for
     * the conversation to continue.</p>
     */
    inline void SetWaitingResponse(ResponseSpecification&& value) { m_waitingResponseHasBeenSet = true; m_waitingResponse = std::move(value); }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is waiting for
     * the conversation to continue.</p>
     */
    inline WaitAndContinueSpecification& WithWaitingResponse(const ResponseSpecification& value) { SetWaitingResponse(value); return *this;}

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is waiting for
     * the conversation to continue.</p>
     */
    inline WaitAndContinueSpecification& WithWaitingResponse(ResponseSpecification&& value) { SetWaitingResponse(std::move(value)); return *this;}


    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is ready to
     * continue the conversation.</p>
     */
    inline const ResponseSpecification& GetContinueResponse() const{ return m_continueResponse; }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is ready to
     * continue the conversation.</p>
     */
    inline bool ContinueResponseHasBeenSet() const { return m_continueResponseHasBeenSet; }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is ready to
     * continue the conversation.</p>
     */
    inline void SetContinueResponse(const ResponseSpecification& value) { m_continueResponseHasBeenSet = true; m_continueResponse = value; }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is ready to
     * continue the conversation.</p>
     */
    inline void SetContinueResponse(ResponseSpecification&& value) { m_continueResponseHasBeenSet = true; m_continueResponse = std::move(value); }

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is ready to
     * continue the conversation.</p>
     */
    inline WaitAndContinueSpecification& WithContinueResponse(const ResponseSpecification& value) { SetContinueResponse(value); return *this;}

    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is ready to
     * continue the conversation.</p>
     */
    inline WaitAndContinueSpecification& WithContinueResponse(ResponseSpecification&& value) { SetContinueResponse(std::move(value)); return *this;}


    /**
     * <p>A response that Amazon Lex sends periodically to the user to indicate that
     * the bot is still waiting for input from the user.</p>
     */
    inline const StillWaitingResponseSpecification& GetStillWaitingResponse() const{ return m_stillWaitingResponse; }

    /**
     * <p>A response that Amazon Lex sends periodically to the user to indicate that
     * the bot is still waiting for input from the user.</p>
     */
    inline bool StillWaitingResponseHasBeenSet() const { return m_stillWaitingResponseHasBeenSet; }

    /**
     * <p>A response that Amazon Lex sends periodically to the user to indicate that
     * the bot is still waiting for input from the user.</p>
     */
    inline void SetStillWaitingResponse(const StillWaitingResponseSpecification& value) { m_stillWaitingResponseHasBeenSet = true; m_stillWaitingResponse = value; }

    /**
     * <p>A response that Amazon Lex sends periodically to the user to indicate that
     * the bot is still waiting for input from the user.</p>
     */
    inline void SetStillWaitingResponse(StillWaitingResponseSpecification&& value) { m_stillWaitingResponseHasBeenSet = true; m_stillWaitingResponse = std::move(value); }

    /**
     * <p>A response that Amazon Lex sends periodically to the user to indicate that
     * the bot is still waiting for input from the user.</p>
     */
    inline WaitAndContinueSpecification& WithStillWaitingResponse(const StillWaitingResponseSpecification& value) { SetStillWaitingResponse(value); return *this;}

    /**
     * <p>A response that Amazon Lex sends periodically to the user to indicate that
     * the bot is still waiting for input from the user.</p>
     */
    inline WaitAndContinueSpecification& WithStillWaitingResponse(StillWaitingResponseSpecification&& value) { SetStillWaitingResponse(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the bot will wait for a user to respond. When this field is
     * false, wait and continue responses for a slot aren't used. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Specifies whether the bot will wait for a user to respond. When this field is
     * false, wait and continue responses for a slot aren't used. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Specifies whether the bot will wait for a user to respond. When this field is
     * false, wait and continue responses for a slot aren't used. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Specifies whether the bot will wait for a user to respond. When this field is
     * false, wait and continue responses for a slot aren't used. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline WaitAndContinueSpecification& WithActive(bool value) { SetActive(value); return *this;}

  private:

    ResponseSpecification m_waitingResponse;
    bool m_waitingResponseHasBeenSet = false;

    ResponseSpecification m_continueResponse;
    bool m_continueResponseHasBeenSet = false;

    StillWaitingResponseSpecification m_stillWaitingResponse;
    bool m_stillWaitingResponseHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
