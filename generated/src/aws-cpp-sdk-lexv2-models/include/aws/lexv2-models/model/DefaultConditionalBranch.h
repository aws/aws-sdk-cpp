/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/DialogState.h>
#include <aws/lexv2-models/model/ResponseSpecification.h>
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
   * <p>A set of actions that Amazon Lex should run if none of the other conditions
   * are met.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DefaultConditionalBranch">AWS
   * API Reference</a></p>
   */
  class DefaultConditionalBranch
  {
  public:
    AWS_LEXMODELSV2_API DefaultConditionalBranch() = default;
    AWS_LEXMODELSV2_API DefaultConditionalBranch(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DefaultConditionalBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The next step in the conversation.</p>
     */
    inline const DialogState& GetNextStep() const { return m_nextStep; }
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }
    template<typename NextStepT = DialogState>
    void SetNextStep(NextStepT&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::forward<NextStepT>(value); }
    template<typename NextStepT = DialogState>
    DefaultConditionalBranch& WithNextStep(NextStepT&& value) { SetNextStep(std::forward<NextStepT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseSpecification& GetResponse() const { return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    template<typename ResponseT = ResponseSpecification>
    void SetResponse(ResponseT&& value) { m_responseHasBeenSet = true; m_response = std::forward<ResponseT>(value); }
    template<typename ResponseT = ResponseSpecification>
    DefaultConditionalBranch& WithResponse(ResponseT&& value) { SetResponse(std::forward<ResponseT>(value)); return *this;}
    ///@}
  private:

    DialogState m_nextStep;
    bool m_nextStepHasBeenSet = false;

    ResponseSpecification m_response;
    bool m_responseHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
