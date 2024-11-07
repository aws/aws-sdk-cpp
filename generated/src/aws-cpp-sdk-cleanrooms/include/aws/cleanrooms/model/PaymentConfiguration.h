/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/QueryComputePaymentConfig.h>
#include <aws/cleanrooms/model/MLPaymentConfig.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>An object representing the collaboration member's payment responsibilities
   * set by the collaboration creator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PaymentConfiguration">AWS
   * API Reference</a></p>
   */
  class PaymentConfiguration
  {
  public:
    AWS_CLEANROOMS_API PaymentConfiguration();
    AWS_CLEANROOMS_API PaymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PaymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline const QueryComputePaymentConfig& GetQueryCompute() const{ return m_queryCompute; }
    inline bool QueryComputeHasBeenSet() const { return m_queryComputeHasBeenSet; }
    inline void SetQueryCompute(const QueryComputePaymentConfig& value) { m_queryComputeHasBeenSet = true; m_queryCompute = value; }
    inline void SetQueryCompute(QueryComputePaymentConfig&& value) { m_queryComputeHasBeenSet = true; m_queryCompute = std::move(value); }
    inline PaymentConfiguration& WithQueryCompute(const QueryComputePaymentConfig& value) { SetQueryCompute(value); return *this;}
    inline PaymentConfiguration& WithQueryCompute(QueryComputePaymentConfig&& value) { SetQueryCompute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the collaboration member's machine learning payment
     * responsibilities set by the collaboration creator.</p>
     */
    inline const MLPaymentConfig& GetMachineLearning() const{ return m_machineLearning; }
    inline bool MachineLearningHasBeenSet() const { return m_machineLearningHasBeenSet; }
    inline void SetMachineLearning(const MLPaymentConfig& value) { m_machineLearningHasBeenSet = true; m_machineLearning = value; }
    inline void SetMachineLearning(MLPaymentConfig&& value) { m_machineLearningHasBeenSet = true; m_machineLearning = std::move(value); }
    inline PaymentConfiguration& WithMachineLearning(const MLPaymentConfig& value) { SetMachineLearning(value); return *this;}
    inline PaymentConfiguration& WithMachineLearning(MLPaymentConfig&& value) { SetMachineLearning(std::move(value)); return *this;}
    ///@}
  private:

    QueryComputePaymentConfig m_queryCompute;
    bool m_queryComputeHasBeenSet = false;

    MLPaymentConfig m_machineLearning;
    bool m_machineLearningHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
