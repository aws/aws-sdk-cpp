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
    AWS_CUSTOMERPROFILES_API GetAutoMergingPreviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutoMergingPreview"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetAutoMergingPreviewRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of matching attributes that represent matching criteria.</p>
     */
    inline const Consolidation& GetConsolidation() const { return m_consolidation; }
    inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
    template<typename ConsolidationT = Consolidation>
    void SetConsolidation(ConsolidationT&& value) { m_consolidationHasBeenSet = true; m_consolidation = std::forward<ConsolidationT>(value); }
    template<typename ConsolidationT = Consolidation>
    GetAutoMergingPreviewRequest& WithConsolidation(ConsolidationT&& value) { SetConsolidation(std::forward<ConsolidationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How the auto-merging process should resolve conflicts between different
     * profiles.</p>
     */
    inline const ConflictResolution& GetConflictResolution() const { return m_conflictResolution; }
    inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
    template<typename ConflictResolutionT = ConflictResolution>
    void SetConflictResolution(ConflictResolutionT&& value) { m_conflictResolutionHasBeenSet = true; m_conflictResolution = std::forward<ConflictResolutionT>(value); }
    template<typename ConflictResolutionT = ConflictResolution>
    GetAutoMergingPreviewRequest& WithConflictResolution(ConflictResolutionT&& value) { SetConflictResolution(std::forward<ConflictResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum confidence score required for profiles within a matching group to be
     * merged during the auto-merge process.</p>
     */
    inline double GetMinAllowedConfidenceScoreForMerging() const { return m_minAllowedConfidenceScoreForMerging; }
    inline bool MinAllowedConfidenceScoreForMergingHasBeenSet() const { return m_minAllowedConfidenceScoreForMergingHasBeenSet; }
    inline void SetMinAllowedConfidenceScoreForMerging(double value) { m_minAllowedConfidenceScoreForMergingHasBeenSet = true; m_minAllowedConfidenceScoreForMerging = value; }
    inline GetAutoMergingPreviewRequest& WithMinAllowedConfidenceScoreForMerging(double value) { SetMinAllowedConfidenceScoreForMerging(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

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
