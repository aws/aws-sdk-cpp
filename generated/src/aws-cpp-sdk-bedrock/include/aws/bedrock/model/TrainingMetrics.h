/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>

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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Metrics associated with the custom job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TrainingMetrics">AWS
   * API Reference</a></p>
   */
  class TrainingMetrics
  {
  public:
    AWS_BEDROCK_API TrainingMetrics();
    AWS_BEDROCK_API TrainingMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API TrainingMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Loss metric associated with the custom job.</p>
     */
    inline double GetTrainingLoss() const{ return m_trainingLoss; }

    /**
     * <p>Loss metric associated with the custom job.</p>
     */
    inline bool TrainingLossHasBeenSet() const { return m_trainingLossHasBeenSet; }

    /**
     * <p>Loss metric associated with the custom job.</p>
     */
    inline void SetTrainingLoss(double value) { m_trainingLossHasBeenSet = true; m_trainingLoss = value; }

    /**
     * <p>Loss metric associated with the custom job.</p>
     */
    inline TrainingMetrics& WithTrainingLoss(double value) { SetTrainingLoss(value); return *this;}

  private:

    double m_trainingLoss;
    bool m_trainingLossHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
