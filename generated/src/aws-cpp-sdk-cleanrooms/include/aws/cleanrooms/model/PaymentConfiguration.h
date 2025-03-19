/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/QueryComputePaymentConfig.h>
#include <aws/cleanrooms/model/MLPaymentConfig.h>
#include <aws/cleanrooms/model/JobComputePaymentConfig.h>
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
    AWS_CLEANROOMS_API PaymentConfiguration() = default;
    AWS_CLEANROOMS_API PaymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PaymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator for query compute costs.</p>
     */
    inline const QueryComputePaymentConfig& GetQueryCompute() const { return m_queryCompute; }
    inline bool QueryComputeHasBeenSet() const { return m_queryComputeHasBeenSet; }
    template<typename QueryComputeT = QueryComputePaymentConfig>
    void SetQueryCompute(QueryComputeT&& value) { m_queryComputeHasBeenSet = true; m_queryCompute = std::forward<QueryComputeT>(value); }
    template<typename QueryComputeT = QueryComputePaymentConfig>
    PaymentConfiguration& WithQueryCompute(QueryComputeT&& value) { SetQueryCompute(std::forward<QueryComputeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing the collaboration member's machine learning payment
     * responsibilities set by the collaboration creator.</p>
     */
    inline const MLPaymentConfig& GetMachineLearning() const { return m_machineLearning; }
    inline bool MachineLearningHasBeenSet() const { return m_machineLearningHasBeenSet; }
    template<typename MachineLearningT = MLPaymentConfig>
    void SetMachineLearning(MachineLearningT&& value) { m_machineLearningHasBeenSet = true; m_machineLearning = std::forward<MachineLearningT>(value); }
    template<typename MachineLearningT = MLPaymentConfig>
    PaymentConfiguration& WithMachineLearning(MachineLearningT&& value) { SetMachineLearning(std::forward<MachineLearningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compute configuration for the job.</p>
     */
    inline const JobComputePaymentConfig& GetJobCompute() const { return m_jobCompute; }
    inline bool JobComputeHasBeenSet() const { return m_jobComputeHasBeenSet; }
    template<typename JobComputeT = JobComputePaymentConfig>
    void SetJobCompute(JobComputeT&& value) { m_jobComputeHasBeenSet = true; m_jobCompute = std::forward<JobComputeT>(value); }
    template<typename JobComputeT = JobComputePaymentConfig>
    PaymentConfiguration& WithJobCompute(JobComputeT&& value) { SetJobCompute(std::forward<JobComputeT>(value)); return *this;}
    ///@}
  private:

    QueryComputePaymentConfig m_queryCompute;
    bool m_queryComputeHasBeenSet = false;

    MLPaymentConfig m_machineLearning;
    bool m_machineLearningHasBeenSet = false;

    JobComputePaymentConfig m_jobCompute;
    bool m_jobComputeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
