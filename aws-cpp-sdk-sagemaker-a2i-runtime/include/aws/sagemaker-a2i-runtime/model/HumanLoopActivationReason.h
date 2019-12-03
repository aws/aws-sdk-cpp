/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>

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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Contains information about why a human loop was triggered. If at least one
   * activation reason is evaluated to be true, the human loop is
   * activated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopActivationReason">AWS
   * API Reference</a></p>
   */
  class AWS_AUGMENTEDAIRUNTIME_API HumanLoopActivationReason
  {
  public:
    HumanLoopActivationReason();
    HumanLoopActivationReason(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopActivationReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if the specified conditions were matched to trigger the human loop.</p>
     */
    inline bool GetConditionsMatched() const{ return m_conditionsMatched; }

    /**
     * <p>True if the specified conditions were matched to trigger the human loop.</p>
     */
    inline bool ConditionsMatchedHasBeenSet() const { return m_conditionsMatchedHasBeenSet; }

    /**
     * <p>True if the specified conditions were matched to trigger the human loop.</p>
     */
    inline void SetConditionsMatched(bool value) { m_conditionsMatchedHasBeenSet = true; m_conditionsMatched = value; }

    /**
     * <p>True if the specified conditions were matched to trigger the human loop.</p>
     */
    inline HumanLoopActivationReason& WithConditionsMatched(bool value) { SetConditionsMatched(value); return *this;}

  private:

    bool m_conditionsMatched;
    bool m_conditionsMatchedHasBeenSet;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
