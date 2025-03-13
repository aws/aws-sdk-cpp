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
    AWS_LEXMODELSV2_API WaitAndContinueSpecification() = default;
    AWS_LEXMODELSV2_API WaitAndContinueSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API WaitAndContinueSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is waiting for
     * the conversation to continue.</p>
     */
    inline const ResponseSpecification& GetWaitingResponse() const { return m_waitingResponse; }
    inline bool WaitingResponseHasBeenSet() const { return m_waitingResponseHasBeenSet; }
    template<typename WaitingResponseT = ResponseSpecification>
    void SetWaitingResponse(WaitingResponseT&& value) { m_waitingResponseHasBeenSet = true; m_waitingResponse = std::forward<WaitingResponseT>(value); }
    template<typename WaitingResponseT = ResponseSpecification>
    WaitAndContinueSpecification& WithWaitingResponse(WaitingResponseT&& value) { SetWaitingResponse(std::forward<WaitingResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response that Amazon Lex sends to indicate that the bot is ready to
     * continue the conversation.</p>
     */
    inline const ResponseSpecification& GetContinueResponse() const { return m_continueResponse; }
    inline bool ContinueResponseHasBeenSet() const { return m_continueResponseHasBeenSet; }
    template<typename ContinueResponseT = ResponseSpecification>
    void SetContinueResponse(ContinueResponseT&& value) { m_continueResponseHasBeenSet = true; m_continueResponse = std::forward<ContinueResponseT>(value); }
    template<typename ContinueResponseT = ResponseSpecification>
    WaitAndContinueSpecification& WithContinueResponse(ContinueResponseT&& value) { SetContinueResponse(std::forward<ContinueResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A response that Amazon Lex sends periodically to the user to indicate that
     * the bot is still waiting for input from the user.</p>
     */
    inline const StillWaitingResponseSpecification& GetStillWaitingResponse() const { return m_stillWaitingResponse; }
    inline bool StillWaitingResponseHasBeenSet() const { return m_stillWaitingResponseHasBeenSet; }
    template<typename StillWaitingResponseT = StillWaitingResponseSpecification>
    void SetStillWaitingResponse(StillWaitingResponseT&& value) { m_stillWaitingResponseHasBeenSet = true; m_stillWaitingResponse = std::forward<StillWaitingResponseT>(value); }
    template<typename StillWaitingResponseT = StillWaitingResponseSpecification>
    WaitAndContinueSpecification& WithStillWaitingResponse(StillWaitingResponseT&& value) { SetStillWaitingResponse(std::forward<StillWaitingResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bot will wait for a user to respond. When this field is
     * false, wait and continue responses for a slot aren't used. If the
     * <code>active</code> field isn't specified, the default is true.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline WaitAndContinueSpecification& WithActive(bool value) { SetActive(value); return *this;}
    ///@}
  private:

    ResponseSpecification m_waitingResponse;
    bool m_waitingResponseHasBeenSet = false;

    ResponseSpecification m_continueResponse;
    bool m_continueResponseHasBeenSet = false;

    StillWaitingResponseSpecification m_stillWaitingResponse;
    bool m_stillWaitingResponseHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
