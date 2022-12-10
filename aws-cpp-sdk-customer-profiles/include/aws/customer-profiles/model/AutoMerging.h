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
    AWS_CUSTOMERPROFILES_API AutoMerging();
    AWS_CUSTOMERPROFILES_API AutoMerging(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AutoMerging& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The flag that enables the auto-merging of duplicate profiles.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>The flag that enables the auto-merging of duplicate profiles.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>The flag that enables the auto-merging of duplicate profiles.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>The flag that enables the auto-merging of duplicate profiles.</p>
     */
    inline AutoMerging& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A list of matching attributes that represent matching criteria. If two
     * profiles meet at least one of the requirements in the matching attributes list,
     * they will be merged.</p>
     */
    inline const Consolidation& GetConsolidation() const{ return m_consolidation; }

    /**
     * <p>A list of matching attributes that represent matching criteria. If two
     * profiles meet at least one of the requirements in the matching attributes list,
     * they will be merged.</p>
     */
    inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }

    /**
     * <p>A list of matching attributes that represent matching criteria. If two
     * profiles meet at least one of the requirements in the matching attributes list,
     * they will be merged.</p>
     */
    inline void SetConsolidation(const Consolidation& value) { m_consolidationHasBeenSet = true; m_consolidation = value; }

    /**
     * <p>A list of matching attributes that represent matching criteria. If two
     * profiles meet at least one of the requirements in the matching attributes list,
     * they will be merged.</p>
     */
    inline void SetConsolidation(Consolidation&& value) { m_consolidationHasBeenSet = true; m_consolidation = std::move(value); }

    /**
     * <p>A list of matching attributes that represent matching criteria. If two
     * profiles meet at least one of the requirements in the matching attributes list,
     * they will be merged.</p>
     */
    inline AutoMerging& WithConsolidation(const Consolidation& value) { SetConsolidation(value); return *this;}

    /**
     * <p>A list of matching attributes that represent matching criteria. If two
     * profiles meet at least one of the requirements in the matching attributes list,
     * they will be merged.</p>
     */
    inline AutoMerging& WithConsolidation(Consolidation&& value) { SetConsolidation(std::move(value)); return *this;}


    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles. For example, if Profile A and Profile B have the same
     * <code>FirstName</code> and <code>LastName</code> (and that is the matching
     * criteria), which <code>EmailAddress</code> should be used? </p>
     */
    inline const ConflictResolution& GetConflictResolution() const{ return m_conflictResolution; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles. For example, if Profile A and Profile B have the same
     * <code>FirstName</code> and <code>LastName</code> (and that is the matching
     * criteria), which <code>EmailAddress</code> should be used? </p>
     */
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles. For example, if Profile A and Profile B have the same
     * <code>FirstName</code> and <code>LastName</code> (and that is the matching
     * criteria), which <code>EmailAddress</code> should be used? </p>
     */
    inline void SetConflictResolution(const ConflictResolution& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = value; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles. For example, if Profile A and Profile B have the same
     * <code>FirstName</code> and <code>LastName</code> (and that is the matching
     * criteria), which <code>EmailAddress</code> should be used? </p>
     */
    inline void SetConflictResolution(ConflictResolution&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::move(value); }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles. For example, if Profile A and Profile B have the same
     * <code>FirstName</code> and <code>LastName</code> (and that is the matching
     * criteria), which <code>EmailAddress</code> should be used? </p>
     */
    inline AutoMerging& WithConflictResolution(const ConflictResolution& value) { SetConflictResolution(value); return *this;}

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles. For example, if Profile A and Profile B have the same
     * <code>FirstName</code> and <code>LastName</code> (and that is the matching
     * criteria), which <code>EmailAddress</code> should be used? </p>
     */
    inline AutoMerging& WithConflictResolution(ConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}


    /**
     * <p>A number between 0 and 1 that represents the minimum confidence score
     * required for profiles within a matching group to be merged during the auto-merge
     * process. A higher score means higher similarity required to merge profiles. </p>
     */
    inline double GetMinAllowedConfidenceScoreForMerging() const{ return m_minAllowedConfidenceScoreForMerging; }

    /**
     * <p>A number between 0 and 1 that represents the minimum confidence score
     * required for profiles within a matching group to be merged during the auto-merge
     * process. A higher score means higher similarity required to merge profiles. </p>
     */
    inline bool MinAllowedConfidenceScoreForMergingHasBeenSet() const { return m_minAllowedConfidenceScoreForMergingHasBeenSet; }

    /**
     * <p>A number between 0 and 1 that represents the minimum confidence score
     * required for profiles within a matching group to be merged during the auto-merge
     * process. A higher score means higher similarity required to merge profiles. </p>
     */
    inline void SetMinAllowedConfidenceScoreForMerging(double value) { m_minAllowedConfidenceScoreForMergingHasBeenSet = true; m_minAllowedConfidenceScoreForMerging = value; }

    /**
     * <p>A number between 0 and 1 that represents the minimum confidence score
     * required for profiles within a matching group to be merged during the auto-merge
     * process. A higher score means higher similarity required to merge profiles. </p>
     */
    inline AutoMerging& WithMinAllowedConfidenceScoreForMerging(double value) { SetMinAllowedConfidenceScoreForMerging(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Consolidation m_consolidation;
    bool m_consolidationHasBeenSet = false;

    ConflictResolution m_conflictResolution;
    bool m_conflictResolutionHasBeenSet = false;

    double m_minAllowedConfidenceScoreForMerging;
    bool m_minAllowedConfidenceScoreForMergingHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
