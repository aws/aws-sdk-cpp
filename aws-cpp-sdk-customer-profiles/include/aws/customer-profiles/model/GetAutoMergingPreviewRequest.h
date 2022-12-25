/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/Consolidation.h>
#include <aws/customer-profiles/model/ConflictResolution.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class GetAutoMergingPreviewRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutoMergingPreview"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetAutoMergingPreviewRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetAutoMergingPreviewRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetAutoMergingPreviewRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A list of matching attributes that represent matching criteria.</p>
     */
    inline const Consolidation& GetConsolidation() const{ return m_consolidation; }

    /**
     * <p>A list of matching attributes that represent matching criteria.</p>
     */
    inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }

    /**
     * <p>A list of matching attributes that represent matching criteria.</p>
     */
    inline void SetConsolidation(const Consolidation& value) { m_consolidationHasBeenSet = true; m_consolidation = value; }

    /**
     * <p>A list of matching attributes that represent matching criteria.</p>
     */
    inline void SetConsolidation(Consolidation&& value) { m_consolidationHasBeenSet = true; m_consolidation = std::move(value); }

    /**
     * <p>A list of matching attributes that represent matching criteria.</p>
     */
    inline GetAutoMergingPreviewRequest& WithConsolidation(const Consolidation& value) { SetConsolidation(value); return *this;}

    /**
     * <p>A list of matching attributes that represent matching criteria.</p>
     */
    inline GetAutoMergingPreviewRequest& WithConsolidation(Consolidation&& value) { SetConsolidation(std::move(value)); return *this;}


    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p>
     */
    inline const ConflictResolution& GetConflictResolution() const{ return m_conflictResolution; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p>
     */
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p>
     */
    inline void SetConflictResolution(const ConflictResolution& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = value; }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p>
     */
    inline void SetConflictResolution(ConflictResolution&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::move(value); }

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p>
     */
    inline GetAutoMergingPreviewRequest& WithConflictResolution(const ConflictResolution& value) { SetConflictResolution(value); return *this;}

    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p>
     */
    inline GetAutoMergingPreviewRequest& WithConflictResolution(ConflictResolution&& value) { SetConflictResolution(std::move(value)); return *this;}


    /**
     * <p>Minimum confidence score required for profiles within a matching group to be
     * merged during the auto-merge process.</p>
     */
    inline double GetMinAllowedConfidenceScoreForMerging() const{ return m_minAllowedConfidenceScoreForMerging; }

    /**
     * <p>Minimum confidence score required for profiles within a matching group to be
     * merged during the auto-merge process.</p>
     */
    inline bool MinAllowedConfidenceScoreForMergingHasBeenSet() const { return m_minAllowedConfidenceScoreForMergingHasBeenSet; }

    /**
     * <p>Minimum confidence score required for profiles within a matching group to be
     * merged during the auto-merge process.</p>
     */
    inline void SetMinAllowedConfidenceScoreForMerging(double value) { m_minAllowedConfidenceScoreForMergingHasBeenSet = true; m_minAllowedConfidenceScoreForMerging = value; }

    /**
     * <p>Minimum confidence score required for profiles within a matching group to be
     * merged during the auto-merge process.</p>
     */
    inline GetAutoMergingPreviewRequest& WithMinAllowedConfidenceScoreForMerging(double value) { SetMinAllowedConfidenceScoreForMerging(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

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
