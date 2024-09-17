/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/DBStorageConfiguration.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/RDSStorageSavingsOpportunityAfterDiscounts.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the recommendation options for Amazon RDS storage. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDBStorageRecommendationOption">AWS
   * API Reference</a></p>
   */
  class RDSDBStorageRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDBStorageRecommendationOption();
    AWS_COMPUTEOPTIMIZER_API RDSDBStorageRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDBStorageRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The recommended storage configuration. </p>
     */
    inline const DBStorageConfiguration& GetStorageConfiguration() const{ return m_storageConfiguration; }
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
    inline void SetStorageConfiguration(const DBStorageConfiguration& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = value; }
    inline void SetStorageConfiguration(DBStorageConfiguration&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::move(value); }
    inline RDSDBStorageRecommendationOption& WithStorageConfiguration(const DBStorageConfiguration& value) { SetStorageConfiguration(value); return *this;}
    inline RDSDBStorageRecommendationOption& WithStorageConfiguration(DBStorageConfiguration&& value) { SetStorageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank identifier of the RDS storage recommendation option. </p>
     */
    inline int GetRank() const{ return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline RDSDBStorageRecommendationOption& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }
    inline RDSDBStorageRecommendationOption& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}
    inline RDSDBStorageRecommendationOption& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the savings opportunity for Amazon RDS storage recommendations or
     * for the recommendation option. </p> <p> Savings opportunity represents the
     * estimated monthly savings after applying Savings Plans discounts. You can
     * achieve this by implementing a given Compute Optimizer recommendation. </p>
     */
    inline const RDSStorageSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const{ return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    inline void SetSavingsOpportunityAfterDiscounts(const RDSStorageSavingsOpportunityAfterDiscounts& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = value; }
    inline void SetSavingsOpportunityAfterDiscounts(RDSStorageSavingsOpportunityAfterDiscounts&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::move(value); }
    inline RDSDBStorageRecommendationOption& WithSavingsOpportunityAfterDiscounts(const RDSStorageSavingsOpportunityAfterDiscounts& value) { SetSavingsOpportunityAfterDiscounts(value); return *this;}
    inline RDSDBStorageRecommendationOption& WithSavingsOpportunityAfterDiscounts(RDSStorageSavingsOpportunityAfterDiscounts&& value) { SetSavingsOpportunityAfterDiscounts(std::move(value)); return *this;}
    ///@}
  private:

    DBStorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    RDSStorageSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
