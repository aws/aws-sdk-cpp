/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/ValidatePolicyFindingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/Location.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>A finding in a policy. Each finding is an actionable recommendation that can
   * be used to improve the policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ValidatePolicyFinding">AWS
   * API Reference</a></p>
   */
  class ValidatePolicyFinding
  {
  public:
    AWS_ACCESSANALYZER_API ValidatePolicyFinding() = default;
    AWS_ACCESSANALYZER_API ValidatePolicyFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ValidatePolicyFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline const Aws::String& GetFindingDetails() const { return m_findingDetails; }
    inline bool FindingDetailsHasBeenSet() const { return m_findingDetailsHasBeenSet; }
    template<typename FindingDetailsT = Aws::String>
    void SetFindingDetails(FindingDetailsT&& value) { m_findingDetailsHasBeenSet = true; m_findingDetails = std::forward<FindingDetailsT>(value); }
    template<typename FindingDetailsT = Aws::String>
    ValidatePolicyFinding& WithFindingDetails(FindingDetailsT&& value) { SetFindingDetails(std::forward<FindingDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact of the finding.</p> <p>Security warnings report when the policy
     * allows access that we consider overly permissive.</p> <p>Errors report when a
     * part of the policy is not functional.</p> <p>Warnings report non-security issues
     * when a policy does not conform to policy writing best practices.</p>
     * <p>Suggestions recommend stylistic improvements in the policy that do not impact
     * access.</p>
     */
    inline ValidatePolicyFindingType GetFindingType() const { return m_findingType; }
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }
    inline void SetFindingType(ValidatePolicyFindingType value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline ValidatePolicyFinding& WithFindingType(ValidatePolicyFindingType value) { SetFindingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline const Aws::String& GetIssueCode() const { return m_issueCode; }
    inline bool IssueCodeHasBeenSet() const { return m_issueCodeHasBeenSet; }
    template<typename IssueCodeT = Aws::String>
    void SetIssueCode(IssueCodeT&& value) { m_issueCodeHasBeenSet = true; m_issueCode = std::forward<IssueCodeT>(value); }
    template<typename IssueCodeT = Aws::String>
    ValidatePolicyFinding& WithIssueCode(IssueCodeT&& value) { SetIssueCode(std::forward<IssueCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline const Aws::String& GetLearnMoreLink() const { return m_learnMoreLink; }
    inline bool LearnMoreLinkHasBeenSet() const { return m_learnMoreLinkHasBeenSet; }
    template<typename LearnMoreLinkT = Aws::String>
    void SetLearnMoreLink(LearnMoreLinkT&& value) { m_learnMoreLinkHasBeenSet = true; m_learnMoreLink = std::forward<LearnMoreLinkT>(value); }
    template<typename LearnMoreLinkT = Aws::String>
    ValidatePolicyFinding& WithLearnMoreLink(LearnMoreLinkT&& value) { SetLearnMoreLink(std::forward<LearnMoreLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline const Aws::Vector<Location>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<Location>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<Location>>
    ValidatePolicyFinding& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = Location>
    ValidatePolicyFinding& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_findingDetails;
    bool m_findingDetailsHasBeenSet = false;

    ValidatePolicyFindingType m_findingType{ValidatePolicyFindingType::NOT_SET};
    bool m_findingTypeHasBeenSet = false;

    Aws::String m_issueCode;
    bool m_issueCodeHasBeenSet = false;

    Aws::String m_learnMoreLink;
    bool m_learnMoreLinkHasBeenSet = false;

    Aws::Vector<Location> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
