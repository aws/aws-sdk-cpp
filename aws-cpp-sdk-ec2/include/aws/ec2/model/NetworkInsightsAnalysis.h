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
    AWS_EC2_API NetworkInsightsAnalysis();
    AWS_EC2_API NetworkInsightsAnalysis(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAnalysis& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAnalysisId() const{ return m_networkInsightsAnalysisId; }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline bool NetworkInsightsAnalysisIdHasBeenSet() const { return m_networkInsightsAnalysisIdHasBeenSet; }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisId(const Aws::String& value) { m_networkInsightsAnalysisIdHasBeenSet = true; m_networkInsightsAnalysisId = value; }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisId(Aws::String&& value) { m_networkInsightsAnalysisIdHasBeenSet = true; m_networkInsightsAnalysisId = std::move(value); }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisId(const char* value) { m_networkInsightsAnalysisIdHasBeenSet = true; m_networkInsightsAnalysisId.assign(value); }

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsAnalysisId(const Aws::String& value) { SetNetworkInsightsAnalysisId(value); return *this;}

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsAnalysisId(Aws::String&& value) { SetNetworkInsightsAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsAnalysisId(const char* value) { SetNetworkInsightsAnalysisId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAnalysisArn() const{ return m_networkInsightsAnalysisArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline bool NetworkInsightsAnalysisArnHasBeenSet() const { return m_networkInsightsAnalysisArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisArn(const Aws::String& value) { m_networkInsightsAnalysisArnHasBeenSet = true; m_networkInsightsAnalysisArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisArn(Aws::String&& value) { m_networkInsightsAnalysisArnHasBeenSet = true; m_networkInsightsAnalysisArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline void SetNetworkInsightsAnalysisArn(const char* value) { m_networkInsightsAnalysisArnHasBeenSet = true; m_networkInsightsAnalysisArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsAnalysisArn(const Aws::String& value) { SetNetworkInsightsAnalysisArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsAnalysisArn(Aws::String&& value) { SetNetworkInsightsAnalysisArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsAnalysisArn(const char* value) { SetNetworkInsightsAnalysisArn(value); return *this;}


    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const{ return m_networkInsightsPathId; }

    /**
     * <p>The ID of the path.</p>
     */
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(const Aws::String& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = value; }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(Aws::String&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::move(value); }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(const char* value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId.assign(value); }

    /**
     * <p>The ID of the path.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsPathId(const Aws::String& value) { SetNetworkInsightsPathId(value); return *this;}

    /**
     * <p>The ID of the path.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsPathId(Aws::String&& value) { SetNetworkInsightsPathId(std::move(value)); return *this;}

    /**
     * <p>The ID of the path.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkInsightsPathId(const char* value) { SetNetworkInsightsPathId(value); return *this;}


    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalAccounts() const{ return m_additionalAccounts; }

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline bool AdditionalAccountsHasBeenSet() const { return m_additionalAccountsHasBeenSet; }

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline void SetAdditionalAccounts(const Aws::Vector<Aws::String>& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts = value; }

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline void SetAdditionalAccounts(Aws::Vector<Aws::String>&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts = std::move(value); }

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline NetworkInsightsAnalysis& WithAdditionalAccounts(const Aws::Vector<Aws::String>& value) { SetAdditionalAccounts(value); return *this;}

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline NetworkInsightsAnalysis& WithAdditionalAccounts(Aws::Vector<Aws::String>&& value) { SetAdditionalAccounts(std::move(value)); return *this;}

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline NetworkInsightsAnalysis& AddAdditionalAccounts(const Aws::String& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.push_back(value); return *this; }

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline NetworkInsightsAnalysis& AddAdditionalAccounts(Aws::String&& value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The member accounts that contain resources that the path can traverse.</p>
     */
    inline NetworkInsightsAnalysis& AddAdditionalAccounts(const char* value) { m_additionalAccountsHasBeenSet = true; m_additionalAccounts.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterInArns() const{ return m_filterInArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline bool FilterInArnsHasBeenSet() const { return m_filterInArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline void SetFilterInArns(const Aws::Vector<Aws::String>& value) { m_filterInArnsHasBeenSet = true; m_filterInArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline void SetFilterInArns(Aws::Vector<Aws::String>&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline NetworkInsightsAnalysis& WithFilterInArns(const Aws::Vector<Aws::String>& value) { SetFilterInArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline NetworkInsightsAnalysis& WithFilterInArns(Aws::Vector<Aws::String>&& value) { SetFilterInArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline NetworkInsightsAnalysis& AddFilterInArns(const Aws::String& value) { m_filterInArnsHasBeenSet = true; m_filterInArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline NetworkInsightsAnalysis& AddFilterInArns(Aws::String&& value) { m_filterInArnsHasBeenSet = true; m_filterInArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the Amazon Web Services resources that the
     * path must traverse.</p>
     */
    inline NetworkInsightsAnalysis& AddFilterInArns(const char* value) { m_filterInArnsHasBeenSet = true; m_filterInArns.push_back(value); return *this; }


    /**
     * <p>The time the analysis started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The time the analysis started.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The time the analysis started.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The time the analysis started.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The time the analysis started.</p>
     */
    inline NetworkInsightsAnalysis& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The time the analysis started.</p>
     */
    inline NetworkInsightsAnalysis& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The status of the network insights analysis.</p>
     */
    inline const AnalysisStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the network insights analysis.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the network insights analysis.</p>
     */
    inline void SetStatus(const AnalysisStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the network insights analysis.</p>
     */
    inline void SetStatus(AnalysisStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithStatus(const AnalysisStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the network insights analysis.</p>
     */
    inline NetworkInsightsAnalysis& WithStatus(AnalysisStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline NetworkInsightsAnalysis& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline NetworkInsightsAnalysis& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message, if the status is <code>failed</code>.</p>
     */
    inline NetworkInsightsAnalysis& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The warning message.</p>
     */
    inline const Aws::String& GetWarningMessage() const{ return m_warningMessage; }

    /**
     * <p>The warning message.</p>
     */
    inline bool WarningMessageHasBeenSet() const { return m_warningMessageHasBeenSet; }

    /**
     * <p>The warning message.</p>
     */
    inline void SetWarningMessage(const Aws::String& value) { m_warningMessageHasBeenSet = true; m_warningMessage = value; }

    /**
     * <p>The warning message.</p>
     */
    inline void SetWarningMessage(Aws::String&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::move(value); }

    /**
     * <p>The warning message.</p>
     */
    inline void SetWarningMessage(const char* value) { m_warningMessageHasBeenSet = true; m_warningMessage.assign(value); }

    /**
     * <p>The warning message.</p>
     */
    inline NetworkInsightsAnalysis& WithWarningMessage(const Aws::String& value) { SetWarningMessage(value); return *this;}

    /**
     * <p>The warning message.</p>
     */
    inline NetworkInsightsAnalysis& WithWarningMessage(Aws::String&& value) { SetWarningMessage(std::move(value)); return *this;}

    /**
     * <p>The warning message.</p>
     */
    inline NetworkInsightsAnalysis& WithWarningMessage(const char* value) { SetWarningMessage(value); return *this;}


    /**
     * <p>Indicates whether the destination is reachable from the source.</p>
     */
    inline bool GetNetworkPathFound() const{ return m_networkPathFound; }

    /**
     * <p>Indicates whether the destination is reachable from the source.</p>
     */
    inline bool NetworkPathFoundHasBeenSet() const { return m_networkPathFoundHasBeenSet; }

    /**
     * <p>Indicates whether the destination is reachable from the source.</p>
     */
    inline void SetNetworkPathFound(bool value) { m_networkPathFoundHasBeenSet = true; m_networkPathFound = value; }

    /**
     * <p>Indicates whether the destination is reachable from the source.</p>
     */
    inline NetworkInsightsAnalysis& WithNetworkPathFound(bool value) { SetNetworkPathFound(value); return *this;}


    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline const Aws::Vector<PathComponent>& GetForwardPathComponents() const{ return m_forwardPathComponents; }

    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline bool ForwardPathComponentsHasBeenSet() const { return m_forwardPathComponentsHasBeenSet; }

    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline void SetForwardPathComponents(const Aws::Vector<PathComponent>& value) { m_forwardPathComponentsHasBeenSet = true; m_forwardPathComponents = value; }

    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline void SetForwardPathComponents(Aws::Vector<PathComponent>&& value) { m_forwardPathComponentsHasBeenSet = true; m_forwardPathComponents = std::move(value); }

    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline NetworkInsightsAnalysis& WithForwardPathComponents(const Aws::Vector<PathComponent>& value) { SetForwardPathComponents(value); return *this;}

    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline NetworkInsightsAnalysis& WithForwardPathComponents(Aws::Vector<PathComponent>&& value) { SetForwardPathComponents(std::move(value)); return *this;}

    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline NetworkInsightsAnalysis& AddForwardPathComponents(const PathComponent& value) { m_forwardPathComponentsHasBeenSet = true; m_forwardPathComponents.push_back(value); return *this; }

    /**
     * <p>The components in the path from source to destination.</p>
     */
    inline NetworkInsightsAnalysis& AddForwardPathComponents(PathComponent&& value) { m_forwardPathComponentsHasBeenSet = true; m_forwardPathComponents.push_back(std::move(value)); return *this; }


    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline const Aws::Vector<PathComponent>& GetReturnPathComponents() const{ return m_returnPathComponents; }

    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline bool ReturnPathComponentsHasBeenSet() const { return m_returnPathComponentsHasBeenSet; }

    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline void SetReturnPathComponents(const Aws::Vector<PathComponent>& value) { m_returnPathComponentsHasBeenSet = true; m_returnPathComponents = value; }

    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline void SetReturnPathComponents(Aws::Vector<PathComponent>&& value) { m_returnPathComponentsHasBeenSet = true; m_returnPathComponents = std::move(value); }

    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline NetworkInsightsAnalysis& WithReturnPathComponents(const Aws::Vector<PathComponent>& value) { SetReturnPathComponents(value); return *this;}

    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline NetworkInsightsAnalysis& WithReturnPathComponents(Aws::Vector<PathComponent>&& value) { SetReturnPathComponents(std::move(value)); return *this;}

    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline NetworkInsightsAnalysis& AddReturnPathComponents(const PathComponent& value) { m_returnPathComponentsHasBeenSet = true; m_returnPathComponents.push_back(value); return *this; }

    /**
     * <p>The components in the path from destination to source.</p>
     */
    inline NetworkInsightsAnalysis& AddReturnPathComponents(PathComponent&& value) { m_returnPathComponentsHasBeenSet = true; m_returnPathComponents.push_back(std::move(value)); return *this; }


    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline const Aws::Vector<Explanation>& GetExplanations() const{ return m_explanations; }

    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline bool ExplanationsHasBeenSet() const { return m_explanationsHasBeenSet; }

    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline void SetExplanations(const Aws::Vector<Explanation>& value) { m_explanationsHasBeenSet = true; m_explanations = value; }

    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline void SetExplanations(Aws::Vector<Explanation>&& value) { m_explanationsHasBeenSet = true; m_explanations = std::move(value); }

    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline NetworkInsightsAnalysis& WithExplanations(const Aws::Vector<Explanation>& value) { SetExplanations(value); return *this;}

    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline NetworkInsightsAnalysis& WithExplanations(Aws::Vector<Explanation>&& value) { SetExplanations(std::move(value)); return *this;}

    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline NetworkInsightsAnalysis& AddExplanations(const Explanation& value) { m_explanationsHasBeenSet = true; m_explanations.push_back(value); return *this; }

    /**
     * <p>The explanations. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/reachability/explanation-codes.html">Reachability
     * Analyzer explanation codes</a>.</p>
     */
    inline NetworkInsightsAnalysis& AddExplanations(Explanation&& value) { m_explanationsHasBeenSet = true; m_explanations.push_back(std::move(value)); return *this; }


    /**
     * <p>Potential intermediate components.</p>
     */
    inline const Aws::Vector<AlternatePathHint>& GetAlternatePathHints() const{ return m_alternatePathHints; }

    /**
     * <p>Potential intermediate components.</p>
     */
    inline bool AlternatePathHintsHasBeenSet() const { return m_alternatePathHintsHasBeenSet; }

    /**
     * <p>Potential intermediate components.</p>
     */
    inline void SetAlternatePathHints(const Aws::Vector<AlternatePathHint>& value) { m_alternatePathHintsHasBeenSet = true; m_alternatePathHints = value; }

    /**
     * <p>Potential intermediate components.</p>
     */
    inline void SetAlternatePathHints(Aws::Vector<AlternatePathHint>&& value) { m_alternatePathHintsHasBeenSet = true; m_alternatePathHints = std::move(value); }

    /**
     * <p>Potential intermediate components.</p>
     */
    inline NetworkInsightsAnalysis& WithAlternatePathHints(const Aws::Vector<AlternatePathHint>& value) { SetAlternatePathHints(value); return *this;}

    /**
     * <p>Potential intermediate components.</p>
     */
    inline NetworkInsightsAnalysis& WithAlternatePathHints(Aws::Vector<AlternatePathHint>&& value) { SetAlternatePathHints(std::move(value)); return *this;}

    /**
     * <p>Potential intermediate components.</p>
     */
    inline NetworkInsightsAnalysis& AddAlternatePathHints(const AlternatePathHint& value) { m_alternatePathHintsHasBeenSet = true; m_alternatePathHints.push_back(value); return *this; }

    /**
     * <p>Potential intermediate components.</p>
     */
    inline NetworkInsightsAnalysis& AddAlternatePathHints(AlternatePathHint&& value) { m_alternatePathHintsHasBeenSet = true; m_alternatePathHints.push_back(std::move(value)); return *this; }


    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggestedAccounts() const{ return m_suggestedAccounts; }

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline bool SuggestedAccountsHasBeenSet() const { return m_suggestedAccountsHasBeenSet; }

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline void SetSuggestedAccounts(const Aws::Vector<Aws::String>& value) { m_suggestedAccountsHasBeenSet = true; m_suggestedAccounts = value; }

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline void SetSuggestedAccounts(Aws::Vector<Aws::String>&& value) { m_suggestedAccountsHasBeenSet = true; m_suggestedAccounts = std::move(value); }

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline NetworkInsightsAnalysis& WithSuggestedAccounts(const Aws::Vector<Aws::String>& value) { SetSuggestedAccounts(value); return *this;}

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline NetworkInsightsAnalysis& WithSuggestedAccounts(Aws::Vector<Aws::String>&& value) { SetSuggestedAccounts(std::move(value)); return *this;}

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline NetworkInsightsAnalysis& AddSuggestedAccounts(const Aws::String& value) { m_suggestedAccountsHasBeenSet = true; m_suggestedAccounts.push_back(value); return *this; }

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline NetworkInsightsAnalysis& AddSuggestedAccounts(Aws::String&& value) { m_suggestedAccountsHasBeenSet = true; m_suggestedAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>Potential intermediate accounts.</p>
     */
    inline NetworkInsightsAnalysis& AddSuggestedAccounts(const char* value) { m_suggestedAccountsHasBeenSet = true; m_suggestedAccounts.push_back(value); return *this; }


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAnalysis& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAnalysis& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAnalysis& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline NetworkInsightsAnalysis& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    AnalysisStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet = false;

    bool m_networkPathFound;
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
