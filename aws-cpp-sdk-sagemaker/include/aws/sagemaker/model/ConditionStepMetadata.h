/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ConditionOutcome.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Metadata for a Condition step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ConditionStepMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ConditionStepMetadata
  {
  public:
    ConditionStepMetadata();
    ConditionStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    ConditionStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The outcome of the Condition step evaluation.</p>
     */
    inline const ConditionOutcome& GetOutcome() const{ return m_outcome; }

    /**
     * <p>The outcome of the Condition step evaluation.</p>
     */
    inline bool OutcomeHasBeenSet() const { return m_outcomeHasBeenSet; }

    /**
     * <p>The outcome of the Condition step evaluation.</p>
     */
    inline void SetOutcome(const ConditionOutcome& value) { m_outcomeHasBeenSet = true; m_outcome = value; }

    /**
     * <p>The outcome of the Condition step evaluation.</p>
     */
    inline void SetOutcome(ConditionOutcome&& value) { m_outcomeHasBeenSet = true; m_outcome = std::move(value); }

    /**
     * <p>The outcome of the Condition step evaluation.</p>
     */
    inline ConditionStepMetadata& WithOutcome(const ConditionOutcome& value) { SetOutcome(value); return *this;}

    /**
     * <p>The outcome of the Condition step evaluation.</p>
     */
    inline ConditionStepMetadata& WithOutcome(ConditionOutcome&& value) { SetOutcome(std::move(value)); return *this;}

  private:

    ConditionOutcome m_outcome;
    bool m_outcomeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
