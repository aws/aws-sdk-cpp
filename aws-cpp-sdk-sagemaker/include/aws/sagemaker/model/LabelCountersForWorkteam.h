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
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Provides counts for human-labeled tasks in the labeling job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelCountersForWorkteam">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelCountersForWorkteam
  {
  public:
    LabelCountersForWorkteam();
    LabelCountersForWorkteam(Aws::Utils::Json::JsonView jsonValue);
    LabelCountersForWorkteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of data objects labeled by a human worker.</p>
     */
    inline int GetHumanLabeled() const{ return m_humanLabeled; }

    /**
     * <p>The total number of data objects labeled by a human worker.</p>
     */
    inline bool HumanLabeledHasBeenSet() const { return m_humanLabeledHasBeenSet; }

    /**
     * <p>The total number of data objects labeled by a human worker.</p>
     */
    inline void SetHumanLabeled(int value) { m_humanLabeledHasBeenSet = true; m_humanLabeled = value; }

    /**
     * <p>The total number of data objects labeled by a human worker.</p>
     */
    inline LabelCountersForWorkteam& WithHumanLabeled(int value) { SetHumanLabeled(value); return *this;}


    /**
     * <p>The total number of data objects that need to be labeled by a human
     * worker.</p>
     */
    inline int GetPendingHuman() const{ return m_pendingHuman; }

    /**
     * <p>The total number of data objects that need to be labeled by a human
     * worker.</p>
     */
    inline bool PendingHumanHasBeenSet() const { return m_pendingHumanHasBeenSet; }

    /**
     * <p>The total number of data objects that need to be labeled by a human
     * worker.</p>
     */
    inline void SetPendingHuman(int value) { m_pendingHumanHasBeenSet = true; m_pendingHuman = value; }

    /**
     * <p>The total number of data objects that need to be labeled by a human
     * worker.</p>
     */
    inline LabelCountersForWorkteam& WithPendingHuman(int value) { SetPendingHuman(value); return *this;}


    /**
     * <p>The total number of tasks in the labeling job.</p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p>The total number of tasks in the labeling job.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total number of tasks in the labeling job.</p>
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total number of tasks in the labeling job.</p>
     */
    inline LabelCountersForWorkteam& WithTotal(int value) { SetTotal(value); return *this;}

  private:

    int m_humanLabeled;
    bool m_humanLabeledHasBeenSet;

    int m_pendingHuman;
    bool m_pendingHumanHasBeenSet;

    int m_total;
    bool m_totalHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
