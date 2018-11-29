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
#include <aws/sagemaker/model/USD.h>
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
   * <p>Defines the amount of money paid to an Amazon Mechanical Turk worker for each
   * task performed. For more information, see <a
   * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-public-payment.html">
   * Public Workforce Task Price</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PublicWorkforceTaskPrice">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API PublicWorkforceTaskPrice
  {
  public:
    PublicWorkforceTaskPrice();
    PublicWorkforceTaskPrice(Aws::Utils::Json::JsonView jsonValue);
    PublicWorkforceTaskPrice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the amount of money paid to a worker in United States dollars.</p>
     */
    inline const USD& GetAmountInUsd() const{ return m_amountInUsd; }

    /**
     * <p>Defines the amount of money paid to a worker in United States dollars.</p>
     */
    inline void SetAmountInUsd(const USD& value) { m_amountInUsdHasBeenSet = true; m_amountInUsd = value; }

    /**
     * <p>Defines the amount of money paid to a worker in United States dollars.</p>
     */
    inline void SetAmountInUsd(USD&& value) { m_amountInUsdHasBeenSet = true; m_amountInUsd = std::move(value); }

    /**
     * <p>Defines the amount of money paid to a worker in United States dollars.</p>
     */
    inline PublicWorkforceTaskPrice& WithAmountInUsd(const USD& value) { SetAmountInUsd(value); return *this;}

    /**
     * <p>Defines the amount of money paid to a worker in United States dollars.</p>
     */
    inline PublicWorkforceTaskPrice& WithAmountInUsd(USD&& value) { SetAmountInUsd(std::move(value)); return *this;}

  private:

    USD m_amountInUsd;
    bool m_amountInUsdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
