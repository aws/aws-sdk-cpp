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
   * <p>The metric for the validator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/ValidatorMetric">AWS
   * API Reference</a></p>
   */
  class ValidatorMetric
  {
  public:
    AWS_BEDROCK_API ValidatorMetric();
    AWS_BEDROCK_API ValidatorMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API ValidatorMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The validation loss associated with this validator.</p>
     */
    inline double GetValidationLoss() const{ return m_validationLoss; }

    /**
     * <p>The validation loss associated with this validator.</p>
     */
    inline bool ValidationLossHasBeenSet() const { return m_validationLossHasBeenSet; }

    /**
     * <p>The validation loss associated with this validator.</p>
     */
    inline void SetValidationLoss(double value) { m_validationLossHasBeenSet = true; m_validationLoss = value; }

    /**
     * <p>The validation loss associated with this validator.</p>
     */
    inline ValidatorMetric& WithValidationLoss(double value) { SetValidationLoss(value); return *this;}

  private:

    double m_validationLoss;
    bool m_validationLossHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
