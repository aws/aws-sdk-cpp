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
    AWS_ACCESSANALYZER_API ValidatePolicyFinding();
    AWS_ACCESSANALYZER_API ValidatePolicyFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ValidatePolicyFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline const Aws::String& GetFindingDetails() const{ return m_findingDetails; }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline bool FindingDetailsHasBeenSet() const { return m_findingDetailsHasBeenSet; }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline void SetFindingDetails(const Aws::String& value) { m_findingDetailsHasBeenSet = true; m_findingDetails = value; }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline void SetFindingDetails(Aws::String&& value) { m_findingDetailsHasBeenSet = true; m_findingDetails = std::move(value); }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline void SetFindingDetails(const char* value) { m_findingDetailsHasBeenSet = true; m_findingDetails.assign(value); }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline ValidatePolicyFinding& WithFindingDetails(const Aws::String& value) { SetFindingDetails(value); return *this;}

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline ValidatePolicyFinding& WithFindingDetails(Aws::String&& value) { SetFindingDetails(std::move(value)); return *this;}

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline ValidatePolicyFinding& WithFindingDetails(const char* value) { SetFindingDetails(value); return *this;}


    /**
     * <p>The impact of the finding.</p> <p>Security warnings report when the policy
     * allows access that we consider overly permissive.</p> <p>Errors report when a
     * part of the policy is not functional.</p> <p>Warnings report non-security issues
     * when a policy does not conform to policy writing best practices.</p>
     * <p>Suggestions recommend stylistic improvements in the policy that do not impact
     * access.</p>
     */
    inline const ValidatePolicyFindingType& GetFindingType() const{ return m_findingType; }

    /**
     * <p>The impact of the finding.</p> <p>Security warnings report when the policy
     * allows access that we consider overly permissive.</p> <p>Errors report when a
     * part of the policy is not functional.</p> <p>Warnings report non-security issues
     * when a policy does not conform to policy writing best practices.</p>
     * <p>Suggestions recommend stylistic improvements in the policy that do not impact
     * access.</p>
     */
    inline bool FindingTypeHasBeenSet() const { return m_findingTypeHasBeenSet; }

    /**
     * <p>The impact of the finding.</p> <p>Security warnings report when the policy
     * allows access that we consider overly permissive.</p> <p>Errors report when a
     * part of the policy is not functional.</p> <p>Warnings report non-security issues
     * when a policy does not conform to policy writing best practices.</p>
     * <p>Suggestions recommend stylistic improvements in the policy that do not impact
     * access.</p>
     */
    inline void SetFindingType(const ValidatePolicyFindingType& value) { m_findingTypeHasBeenSet = true; m_findingType = value; }

    /**
     * <p>The impact of the finding.</p> <p>Security warnings report when the policy
     * allows access that we consider overly permissive.</p> <p>Errors report when a
     * part of the policy is not functional.</p> <p>Warnings report non-security issues
     * when a policy does not conform to policy writing best practices.</p>
     * <p>Suggestions recommend stylistic improvements in the policy that do not impact
     * access.</p>
     */
    inline void SetFindingType(ValidatePolicyFindingType&& value) { m_findingTypeHasBeenSet = true; m_findingType = std::move(value); }

    /**
     * <p>The impact of the finding.</p> <p>Security warnings report when the policy
     * allows access that we consider overly permissive.</p> <p>Errors report when a
     * part of the policy is not functional.</p> <p>Warnings report non-security issues
     * when a policy does not conform to policy writing best practices.</p>
     * <p>Suggestions recommend stylistic improvements in the policy that do not impact
     * access.</p>
     */
    inline ValidatePolicyFinding& WithFindingType(const ValidatePolicyFindingType& value) { SetFindingType(value); return *this;}

    /**
     * <p>The impact of the finding.</p> <p>Security warnings report when the policy
     * allows access that we consider overly permissive.</p> <p>Errors report when a
     * part of the policy is not functional.</p> <p>Warnings report non-security issues
     * when a policy does not conform to policy writing best practices.</p>
     * <p>Suggestions recommend stylistic improvements in the policy that do not impact
     * access.</p>
     */
    inline ValidatePolicyFinding& WithFindingType(ValidatePolicyFindingType&& value) { SetFindingType(std::move(value)); return *this;}


    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline const Aws::String& GetIssueCode() const{ return m_issueCode; }

    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline bool IssueCodeHasBeenSet() const { return m_issueCodeHasBeenSet; }

    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline void SetIssueCode(const Aws::String& value) { m_issueCodeHasBeenSet = true; m_issueCode = value; }

    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline void SetIssueCode(Aws::String&& value) { m_issueCodeHasBeenSet = true; m_issueCode = std::move(value); }

    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline void SetIssueCode(const char* value) { m_issueCodeHasBeenSet = true; m_issueCode.assign(value); }

    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline ValidatePolicyFinding& WithIssueCode(const Aws::String& value) { SetIssueCode(value); return *this;}

    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline ValidatePolicyFinding& WithIssueCode(Aws::String&& value) { SetIssueCode(std::move(value)); return *this;}

    /**
     * <p>The issue code provides an identifier of the issue associated with this
     * finding.</p>
     */
    inline ValidatePolicyFinding& WithIssueCode(const char* value) { SetIssueCode(value); return *this;}


    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline const Aws::String& GetLearnMoreLink() const{ return m_learnMoreLink; }

    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline bool LearnMoreLinkHasBeenSet() const { return m_learnMoreLinkHasBeenSet; }

    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline void SetLearnMoreLink(const Aws::String& value) { m_learnMoreLinkHasBeenSet = true; m_learnMoreLink = value; }

    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline void SetLearnMoreLink(Aws::String&& value) { m_learnMoreLinkHasBeenSet = true; m_learnMoreLink = std::move(value); }

    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline void SetLearnMoreLink(const char* value) { m_learnMoreLinkHasBeenSet = true; m_learnMoreLink.assign(value); }

    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline ValidatePolicyFinding& WithLearnMoreLink(const Aws::String& value) { SetLearnMoreLink(value); return *this;}

    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline ValidatePolicyFinding& WithLearnMoreLink(Aws::String&& value) { SetLearnMoreLink(std::move(value)); return *this;}

    /**
     * <p>A link to additional documentation about the type of finding.</p>
     */
    inline ValidatePolicyFinding& WithLearnMoreLink(const char* value) { SetLearnMoreLink(value); return *this;}


    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline const Aws::Vector<Location>& GetLocations() const{ return m_locations; }

    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }

    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline void SetLocations(const Aws::Vector<Location>& value) { m_locationsHasBeenSet = true; m_locations = value; }

    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline void SetLocations(Aws::Vector<Location>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }

    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline ValidatePolicyFinding& WithLocations(const Aws::Vector<Location>& value) { SetLocations(value); return *this;}

    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline ValidatePolicyFinding& WithLocations(Aws::Vector<Location>&& value) { SetLocations(std::move(value)); return *this;}

    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline ValidatePolicyFinding& AddLocations(const Location& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }

    /**
     * <p>The list of locations in the policy document that are related to the finding.
     * The issue code provides a summary of an issue identified by the finding.</p>
     */
    inline ValidatePolicyFinding& AddLocations(Location&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_findingDetails;
    bool m_findingDetailsHasBeenSet = false;

    ValidatePolicyFindingType m_findingType;
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
