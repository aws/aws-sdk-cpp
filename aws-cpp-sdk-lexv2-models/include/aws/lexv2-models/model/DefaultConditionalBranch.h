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
    AWS_LEXMODELSV2_API DefaultConditionalBranch();
    AWS_LEXMODELSV2_API DefaultConditionalBranch(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DefaultConditionalBranch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The next step in the conversation.</p>
     */
    inline const DialogState& GetNextStep() const{ return m_nextStep; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline bool NextStepHasBeenSet() const { return m_nextStepHasBeenSet; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline void SetNextStep(const DialogState& value) { m_nextStepHasBeenSet = true; m_nextStep = value; }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline void SetNextStep(DialogState&& value) { m_nextStepHasBeenSet = true; m_nextStep = std::move(value); }

    /**
     * <p>The next step in the conversation.</p>
     */
    inline DefaultConditionalBranch& WithNextStep(const DialogState& value) { SetNextStep(value); return *this;}

    /**
     * <p>The next step in the conversation.</p>
     */
    inline DefaultConditionalBranch& WithNextStep(DialogState&& value) { SetNextStep(std::move(value)); return *this;}


    
    inline const ResponseSpecification& GetResponse() const{ return m_response; }

    
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }

    
    inline void SetResponse(const ResponseSpecification& value) { m_responseHasBeenSet = true; m_response = value; }

    
    inline void SetResponse(ResponseSpecification&& value) { m_responseHasBeenSet = true; m_response = std::move(value); }

    
    inline DefaultConditionalBranch& WithResponse(const ResponseSpecification& value) { SetResponse(value); return *this;}

    
    inline DefaultConditionalBranch& WithResponse(ResponseSpecification&& value) { SetResponse(std::move(value)); return *this;}

  private:

    DialogState m_nextStep;
    bool m_nextStepHasBeenSet = false;

    ResponseSpecification m_response;
    bool m_responseHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
