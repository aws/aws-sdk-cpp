/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/AnalysisStatus.h>
#include <aws/ec2/model/PathComponent.h>
#include <aws/ec2/model/Explanation.h>
#include <aws/ec2/model/AlternatePathHint.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a network insights analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInsightsAnalysis">AWS
   * API Reference</a></p>
   */
  class NetworkInsightsAnalysis
  {
  public:
    AWS_EC2_API NetworkInsightsAnalysis() = default;
    AWS_EC2_API NetworkInsightsAnalysis(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAnalysis& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAnalysisId() const { return m_networkInsightsAnalysisId; }
    inline bool NetworkInsightsAnalysisIdHasBeenSet() const { return m_networkInsightsAnalysisIdHasBeenSet; }
    template<typename NetworkInsightsAnalysisIdT = Aws::String>
    void SetNetworkInsightsAnalysisId(NetworkInsightsAnalysisIdT&& value) { m_networkInsightsAnalysisIdHasBeenSet = true; m_networkInsightsAnalysisId = std::forward<NetworkInsightsAnalysisIdT>(value); }
    template<typename NetworkInsightsAnalysisIdT = Aws::String>
    NetworkInsightsAnalysis& WithNetworkInsightsAnalysisId(NetworkInsightsAnalysisIdT&& value) { SetNetworkInsightsAnalysisId(std::forward<NetworkInsightsAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAnalysisArn() const { return m_networkInsightsAnalysisArn; }
    inline bool NetworkInsightsAnalysisArnHasBeenSet() const { return m_networkInsightsAnalysisArnHasBeenSet; }
    template<typename NetworkInsightsAnalysisArnT = Aws::String>
    void SetNetworkInsightsAnalysisArn(NetworkInsightsAnalysisArnT&& value) { m_networkInsightsAnalysisArnHasBeenSet = true; m_networkInsightsAnalysisArn = std::forward<NetworkInsightsAnalysisArnT>(value); }
    template<typename NetworkInsightsAnalysisArnT = Aws::String>
    NetworkInsightsAnalysis& WithNetworkInsightsAnalysisArn(NetworkInsightsAnalysisArnT&& value) { SetNetworkInsightsAnalysisArn(std::forward<NetworkInsightsAnalysisArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const { return m_networkInsightsPathId; }
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }
    template<typename NetworkInsightsPathIdT = Aws::String>
    void SetNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::forward<NetworkInsightsPathIdT>(value); }
    template<typename NetworkInsightsPathIdT = Aws::String>
    NetworkInsightsAnalysis& WithNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { SetNetworkInsightsPathId(std::forward<NetworkInsightsPathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalAccounts() const { return m_additionalAccounts; }
    inline bool AdditionalAccountsHasBeenSet() const { return m_additionalAccountsHasBeenSet; }
    template<typename AdditionalAccountsT = Aws::Vector<Aws::String>>
    void SetAdditionalAccounts(AdditionalAccountsT&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts = std::forward<AdditionalAccountsT>(value); }
    template<typename AdditionalAccountsT = Aws::Vector<Aws::String>>
    NetworkInsightsAnalysis& WithAdditionalAccounts(AdditionalAccountsT&& value) { SetAdditionalAccounts(std::forward<AdditionalAccountsT>(value)); return *this;}
    template<typename AdditionalAccountsT = Aws::String>
    NetworkInsightsAnalysis& AddAdditionalAccounts(AdditionalAccountsT&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.emplace_back(std::forward<AdditionalAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the resources that the path must
     * traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterInArns() const { return m_filterInArns; }
    inline bool FilterInArnsHasBeenSet() const { return m_filterInArnsHasBeenSet; }
    template<typename FilterInArnsT = Aws::Vector<Aws::String>>
    void SetFilterInArns(FilterInArnsT&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns = std::forward<FilterInArnsT>(value); }
    template<typename FilterInArnsT = Aws::Vector<Aws::String>>
    NetworkInsightsAnalysis& WithFilterInArns(FilterInArnsT&& value) { SetFilterInArns(std::forward<FilterInArnsT>(value)); return *this;}
    template<typename FilterInArnsT = Aws::String>
    NetworkInsightsAnalysis& AddFilterInArns(FilterInArnsT&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns.emplace_back(std::forward<FilterInArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARN) of the resources that the path must
     * ignore.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterOutArns() const { return m_filterOutArns; }
    inline bool FilterOutArnsHasBeenSet() const { return m_filterOutArnsHasBeenSet; }
    template<typename FilterOutArnsT = Aws::Vector<Aws::String>>
    void SetFilterOutArns(FilterOutArnsT&& value) { m_filterOutArnsHasBeenSet = true; m_filterOutArns = std::forward<FilterOutArnsT>(value); }
    template<typename FilterOutArnsT = Aws::Vector<Aws::String>>
    NetworkInsightsAnalysis& WithFilterOutArns(FilterOutArnsT&& value) { SetFilterOutArns(std::forward<FilterOutArnsT>(value)); return *this;}
    template<typename FilterOutArnsT = Aws::String>
    NetworkInsightsAnalysis& AddFilterOutArns(FilterOutArnsT&& value) { m_filterOutArnsHasBeenSet = true; m_filterOutArns.emplace_back(std::forward<FilterOutArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the analysis started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    NetworkInsightsAnalysis& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network insights analysis.</p>
     */
    inline AnalysisStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AnalysisStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NetworkInsightsAnalysis& WithStatus(AnalysisStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    NetworkInsightsAnalysis& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warning message.</p>
     */
    inline const Aws::String& GetWarningMessage() const { return m_warningMessage; }
    inline bool WarningMessageHasBeenSet() const { return m_warningMessageHasBeenSet; }
    template<typename WarningMessageT = Aws::String>
    void SetWarningMessage(WarningMessageT&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::forward<WarningMessageT>(value); }
    template<typename WarningMessageT = Aws::String>
    NetworkInsightsAnalysis& WithWarningMessage(WarningMessageT&& value) { SetWarningMessage(std::forward<WarningMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the destination is reachable from the source.</p>
     */
    inline bool GetNetworkPathFound() const { return m_networkPathFound; }
    inline bool NetworkPathFoundHasBeenSet() const { return m_networkPathFoundHasBeenSet; }
    inline void SetNetworkPathFound(bool value) { m_networkPathFoundHasBeenSet = true; m_networkPathFound = value; }
    inline NetworkInsightsAnalysis& WithNetworkPathFound(bool value) { SetNetworkPathFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline const Aws::Vector<PathComponent>& GetForwardPathComponents() const { return m_forwardPathComponents; }
    inline bool ForwardPathComponentsHasBeenSet() const { return m_forwardPathComponentsHasBeenSet; }
    template<typename ForwardPathComponentsT = Aws::Vector<PathComponent>>
    void SetForwardPathComponents(ForwardPathComponentsT&& value) { m_forwardPathComponentsHasBeenSet = true; m_forwardPathComponents = std::forward<ForwardPathComponentsT>(value); }
    template<typename ForwardPathComponentsT = Aws::Vector<PathComponent>>
    NetworkInsightsAnalysis& WithForwardPathComponents(ForwardPathComponentsT&& value) { SetForwardPathComponents(std::forward<ForwardPathComponentsT>(value)); return *this;}
    template<typename ForwardPathComponentsT = PathComponent>
    NetworkInsightsAnalysis& AddForwardPathComponents(ForwardPathComponentsT&& value) { m_forwardPathComponentsHasBeenSet = true; m_forwardPathComponents.emplace_back(std::forward<ForwardPathComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline const Aws::Vector<PathComponent>& GetReturnPathComponents() const { return m_returnPathComponents; }
    inline bool ReturnPathComponentsHasBeenSet() const { return m_returnPathComponentsHasBeenSet; }
    template<typename ReturnPathComponentsT = Aws::Vector<PathComponent>>
    void SetReturnPathComponents(ReturnPathComponentsT&& value) { m_returnPathComponentsHasBeenSet = true; m_returnPathComponents = std::forward<ReturnPathComponentsT>(value); }
    template<typename ReturnPathComponentsT = Aws::Vector<PathComponent>>
    NetworkInsightsAnalysis& WithReturnPathComponents(ReturnPathComponentsT&& value) { SetReturnPathComponents(std::forward<ReturnPathComponentsT>(value)); return *this;}
    template<typename ReturnPathComponentsT = PathComponent>
    NetworkInsightsAnalysis& AddReturnPathComponents(ReturnPathComponentsT&& value) { m_returnPathComponentsHasBeenSet = true; m_returnPathComponents.emplace_back(std::forward<ReturnPathComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline const Aws::Vector<Explanation>& GetExplanations() const { return m_explanations; }
    inline bool ExplanationsHasBeenSet() const { return m_explanationsHasBeenSet; }
    template<typename ExplanationsT = Aws::Vector<Explanation>>
    void SetExplanations(ExplanationsT&& value) { m_explanationsHasBeenSet = true; m_explanations = std::forward<ExplanationsT>(value); }
    template<typename ExplanationsT = Aws::Vector<Explanation>>
    NetworkInsightsAnalysis& WithExplanations(ExplanationsT&& value) { SetExplanations(std::forward<ExplanationsT>(value)); return *this;}
    template<typename ExplanationsT = Explanation>
    NetworkInsightsAnalysis& AddExplanations(ExplanationsT&& value) { m_explanationsHasBeenSet = true; m_explanations.emplace_back(std::forward<ExplanationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Potential intermediate components.</p>
     */
    inline const Aws::Vector<AlternatePathHint>& GetAlternatePathHints() const { return m_alternatePathHints; }
    inline bool AlternatePathHintsHasBeenSet() const { return m_alternatePathHintsHasBeenSet; }
    template<typename AlternatePathHintsT = Aws::Vector<AlternatePathHint>>
    void SetAlternatePathHints(AlternatePathHintsT&& value) { m_alternatePathHintsHasBeenSet = true; m_alternatePathHints = std::forward<AlternatePathHintsT>(value); }
    template<typename AlternatePathHintsT = Aws::Vector<AlternatePathHint>>
    NetworkInsightsAnalysis& WithAlternatePathHints(AlternatePathHintsT&& value) { SetAlternatePathHints(std::forward<AlternatePathHintsT>(value)); return *this;}
    template<typename AlternatePathHintsT = AlternatePathHint>
    NetworkInsightsAnalysis& AddAlternatePathHints(AlternatePathHintsT&& value) { m_alternatePathHintsHasBeenSet = true; m_alternatePathHints.emplace_back(std::forward<AlternatePathHintsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggestedAccounts() const { return m_suggestedAccounts; }
    inline bool SuggestedAccountsHasBeenSet() const { return m_suggestedAccountsHasBeenSet; }
    template<typename SuggestedAccountsT = Aws::Vector<Aws::String>>
    void SetSuggestedAccounts(SuggestedAccountsT&& value) { m_suggestedAccountsHasBeenSet = true; m_suggestedAccounts = std::forward<SuggestedAccountsT>(value); }
    template<typename SuggestedAccountsT = Aws::Vector<Aws::String>>
    NetworkInsightsAnalysis& WithSuggestedAccounts(SuggestedAccountsT&& value) { SetSuggestedAccounts(std::forward<SuggestedAccountsT>(value)); return *this;}
    template<typename SuggestedAccountsT = Aws::String>
    NetworkInsightsAnalysis& AddSuggestedAccounts(SuggestedAccountsT&& value) { m_suggestedAccountsHasBeenSet = true; m_suggestedAccounts.emplace_back(std::forward<SuggestedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    NetworkInsightsAnalysis& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NetworkInsightsAnalysis& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_networkInsightsAnalysisId;
    bool m_networkInsightsAnalysisIdHasBeenSet = false;

    Aws::String m_networkInsightsAnalysisArn;
    bool m_networkInsightsAnalysisArnHasBeenSet = false;

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalAccounts;
    bool m_additionalAccountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterInArns;
    bool m_filterInArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterOutArns;
    bool m_filterOutArnsHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    AnalysisStatus m_status{AnalysisStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet = false;

    bool m_networkPathFound{false};
    bool m_networkPathFoundHasBeenSet = false;

    Aws::Vector<PathComponent> m_forwardPathComponents;
    bool m_forwardPathComponentsHasBeenSet = false;

    Aws::Vector<PathComponent> m_returnPathComponents;
    bool m_returnPathComponentsHasBeenSet = false;

    Aws::Vector<Explanation> m_explanations;
    bool m_explanationsHasBeenSet = false;

    Aws::Vector<AlternatePathHint> m_alternatePathHints;
    bool m_alternatePathHintsHasBeenSet = false;

    Aws::Vector<Aws::String> m_suggestedAccounts;
    bool m_suggestedAccountsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
