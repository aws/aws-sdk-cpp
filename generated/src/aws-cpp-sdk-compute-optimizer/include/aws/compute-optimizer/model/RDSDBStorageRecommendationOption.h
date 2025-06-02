/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/DBStorageConfiguration.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/RDSStorageSavingsOpportunityAfterDiscounts.h>
#include <aws/compute-optimizer/model/RDSEstimatedMonthlyVolumeIOPsCostVariation.h>
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
   * <p> Describes the recommendation options for DB storage. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDBStorageRecommendationOption">AWS
   * API Reference</a></p>
   */
  class RDSDBStorageRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDBStorageRecommendationOption() = default;
    AWS_COMPUTEOPTIMIZER_API RDSDBStorageRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDBStorageRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The recommended storage configuration. </p>
     */
    inline const DBStorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
    inline bool StorageConfigurationHasBeenSet() const { return m_storageConfigurationHasBeenSet; }
    template<typename StorageConfigurationT = DBStorageConfiguration>
    void SetStorageConfiguration(StorageConfigurationT&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::forward<StorageConfigurationT>(value); }
    template<typename StorageConfigurationT = DBStorageConfiguration>
    RDSDBStorageRecommendationOption& WithStorageConfiguration(StorageConfigurationT&& value) { SetStorageConfiguration(std::forward<StorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank identifier of the DB storage recommendation option. </p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline RDSDBStorageRecommendationOption& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetSavingsOpportunity() const { return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    void SetSavingsOpportunity(SavingsOpportunityT&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::forward<SavingsOpportunityT>(value); }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    RDSDBStorageRecommendationOption& WithSavingsOpportunity(SavingsOpportunityT&& value) { SetSavingsOpportunity(std::forward<SavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the savings opportunity for DB storage recommendations or for the
     * recommendation option. </p> <p> Savings opportunity represents the estimated
     * monthly savings after applying Savings Plans discounts. You can achieve this by
     * implementing a given Compute Optimizer recommendation. </p>
     */
    inline const RDSStorageSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const { return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    template<typename SavingsOpportunityAfterDiscountsT = RDSStorageSavingsOpportunityAfterDiscounts>
    void SetSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::forward<SavingsOpportunityAfterDiscountsT>(value); }
    template<typename SavingsOpportunityAfterDiscountsT = RDSStorageSavingsOpportunityAfterDiscounts>
    RDSDBStorageRecommendationOption& WithSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { SetSavingsOpportunityAfterDiscounts(std::forward<SavingsOpportunityAfterDiscountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The projected level of variation in monthly I/O costs for the DB storage
     * recommendation option. </p>
     */
    inline RDSEstimatedMonthlyVolumeIOPsCostVariation GetEstimatedMonthlyVolumeIOPsCostVariation() const { return m_estimatedMonthlyVolumeIOPsCostVariation; }
    inline bool EstimatedMonthlyVolumeIOPsCostVariationHasBeenSet() const { return m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet; }
    inline void SetEstimatedMonthlyVolumeIOPsCostVariation(RDSEstimatedMonthlyVolumeIOPsCostVariation value) { m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true; m_estimatedMonthlyVolumeIOPsCostVariation = value; }
    inline RDSDBStorageRecommendationOption& WithEstimatedMonthlyVolumeIOPsCostVariation(RDSEstimatedMonthlyVolumeIOPsCostVariation value) { SetEstimatedMonthlyVolumeIOPsCostVariation(value); return *this;}
    ///@}
  private:

    DBStorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    int m_rank{0};
    bool m_rankHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    RDSStorageSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;

    RDSEstimatedMonthlyVolumeIOPsCostVariation m_estimatedMonthlyVolumeIOPsCostVariation{RDSEstimatedMonthlyVolumeIOPsCostVariation::NOT_SET};
    bool m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
