/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/Consolidation.h>
#include <aws/customer-profiles/model/ConflictResolution.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Configuration settings for how to perform the auto-merging of
   * profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AutoMerging">AWS
   * API Reference</a></p>
   */
  class AutoMerging
  {
  public:
    AWS_CUSTOMERPROFILES_API AutoMerging() = default;
    AWS_CUSTOMERPROFILES_API AutoMerging(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AutoMerging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The flag that enables the auto-merging of duplicate profiles.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AutoMerging& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of matching attributes that represent matching criteria. If two
     * profiles meet at least one of the requirements in the matching attributes list,
     * they will be merged.</p>
     */
    inline const Consolidation& GetConsolidation() const { return m_consolidation; }
    inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
    template<typename ConsolidationT = Consolidation>
    void SetConsolidation(ConsolidationT&& value) { m_consolidationHasBeenSet = true; m_consolidation = std::forward<ConsolidationT>(value); }
    template<typename ConsolidationT = Consolidation>
    AutoMerging& WithConsolidation(ConsolidationT&& value) { SetConsolidation(std::forward<ConsolidationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles. For example, if Profile A and Profile B have the same
     * <code>FirstName</code> and <code>LastName</code> (and that is the matching
     * criteria), which <code>EmailAddress</code> should be used? </p>
     */
    inline const ConflictResolution& GetConflictResolution() const { return m_conflictResolution; }
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
    template<typename ConflictResolutionT = ConflictResolution>
    void SetConflictResolution(ConflictResolutionT&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::forward<ConflictResolutionT>(value); }
    template<typename ConflictResolutionT = ConflictResolution>
    AutoMerging& WithConflictResolution(ConflictResolutionT&& value) { SetConflictResolution(std::forward<ConflictResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number between 0 and 1 that represents the minimum confidence score
     * required for profiles within a matching group to be merged during the auto-merge
     * process. A higher score means higher similarity required to merge profiles. </p>
     */
    inline double GetMinAllowedConfidenceScoreForMerging() const { return m_minAllowedConfidenceScoreForMerging; }
    inline bool MinAllowedConfidenceScoreForMergingHasBeenSet() const { return m_minAllowedConfidenceScoreForMergingHasBeenSet; }
    inline void SetMinAllowedConfidenceScoreForMerging(double value) { m_minAllowedConfidenceScoreForMergingHasBeenSet = true; m_minAllowedConfidenceScoreForMerging = value; }
    inline AutoMerging& WithMinAllowedConfidenceScoreForMerging(double value) { SetMinAllowedConfidenceScoreForMerging(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Consolidation m_consolidation;
    bool m_consolidationHasBeenSet = false;

    ConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet = false;

    double m_minAllowedConfidenceScoreForMerging{0.0};
    bool m_minAllowedConfidenceScoreForMergingHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
