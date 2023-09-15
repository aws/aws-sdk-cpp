/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/LicenseEdition.h>
#include <aws/compute-optimizer/model/LicenseModel.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
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
   * <p> Describes the recommendation options for licenses. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/LicenseRecommendationOption">AWS
   * API Reference</a></p>
   */
  class LicenseRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendationOption();
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API LicenseRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The rank of the license recommendation option. </p> <p> The top
     * recommendation option is ranked as <code>1</code>. </p>
     */
    inline int GetRank() const{ return m_rank; }

    /**
     * <p> The rank of the license recommendation option. </p> <p> The top
     * recommendation option is ranked as <code>1</code>. </p>
     */
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }

    /**
     * <p> The rank of the license recommendation option. </p> <p> The top
     * recommendation option is ranked as <code>1</code>. </p>
     */
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }

    /**
     * <p> The rank of the license recommendation option. </p> <p> The top
     * recommendation option is ranked as <code>1</code>. </p>
     */
    inline LicenseRecommendationOption& WithRank(int value) { SetRank(value); return *this;}


    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline void SetOperatingSystem(const char* value) { m_operatingSystemHasBeenSet = true; m_operatingSystem.assign(value); }

    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline LicenseRecommendationOption& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline LicenseRecommendationOption& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p> The operating system of a license recommendation option. </p>
     */
    inline LicenseRecommendationOption& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}


    /**
     * <p> The recommended edition of the license for the application that runs on the
     * instance. </p>
     */
    inline const LicenseEdition& GetLicenseEdition() const{ return m_licenseEdition; }

    /**
     * <p> The recommended edition of the license for the application that runs on the
     * instance. </p>
     */
    inline bool LicenseEditionHasBeenSet() const { return m_licenseEditionHasBeenSet; }

    /**
     * <p> The recommended edition of the license for the application that runs on the
     * instance. </p>
     */
    inline void SetLicenseEdition(const LicenseEdition& value) { m_licenseEditionHasBeenSet = true; m_licenseEdition = value; }

    /**
     * <p> The recommended edition of the license for the application that runs on the
     * instance. </p>
     */
    inline void SetLicenseEdition(LicenseEdition&& value) { m_licenseEditionHasBeenSet = true; m_licenseEdition = std::move(value); }

    /**
     * <p> The recommended edition of the license for the application that runs on the
     * instance. </p>
     */
    inline LicenseRecommendationOption& WithLicenseEdition(const LicenseEdition& value) { SetLicenseEdition(value); return *this;}

    /**
     * <p> The recommended edition of the license for the application that runs on the
     * instance. </p>
     */
    inline LicenseRecommendationOption& WithLicenseEdition(LicenseEdition&& value) { SetLicenseEdition(std::move(value)); return *this;}


    /**
     * <p> The recommended license type associated with the instance. </p>
     */
    inline const LicenseModel& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p> The recommended license type associated with the instance. </p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p> The recommended license type associated with the instance. </p>
     */
    inline void SetLicenseModel(const LicenseModel& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p> The recommended license type associated with the instance. </p>
     */
    inline void SetLicenseModel(LicenseModel&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p> The recommended license type associated with the instance. </p>
     */
    inline LicenseRecommendationOption& WithLicenseModel(const LicenseModel& value) { SetLicenseModel(value); return *this;}

    /**
     * <p> The recommended license type associated with the instance. </p>
     */
    inline LicenseRecommendationOption& WithLicenseModel(LicenseModel&& value) { SetLicenseModel(std::move(value)); return *this;}


    
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }

    
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }

    
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }

    
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }

    
    inline LicenseRecommendationOption& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}

    
    inline LicenseRecommendationOption& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}

  private:

    int m_rank;
    bool m_rankHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    LicenseEdition m_licenseEdition;
    bool m_licenseEditionHasBeenSet = false;

    LicenseModel m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
