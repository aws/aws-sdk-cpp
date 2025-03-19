/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AnalysisStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/FindingsFound.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes a Network Access Scope analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInsightsAccessScopeAnalysis">AWS
   * API Reference</a></p>
   */
  class NetworkInsightsAccessScopeAnalysis
  {
  public:
    AWS_EC2_API NetworkInsightsAccessScopeAnalysis() = default;
    AWS_EC2_API NetworkInsightsAccessScopeAnalysis(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAccessScopeAnalysis& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const { return m_networkInsightsAccessScopeAnalysisId; }
    inline bool NetworkInsightsAccessScopeAnalysisIdHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisIdHasBeenSet; }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    void SetNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value); }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisArn() const { return m_networkInsightsAccessScopeAnalysisArn; }
    inline bool NetworkInsightsAccessScopeAnalysisArnHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisArnHasBeenSet; }
    template<typename NetworkInsightsAccessScopeAnalysisArnT = Aws::String>
    void SetNetworkInsightsAccessScopeAnalysisArn(NetworkInsightsAccessScopeAnalysisArnT&& value) { m_networkInsightsAccessScopeAnalysisArnHasBeenSet = true; m_networkInsightsAccessScopeAnalysisArn = std::forward<NetworkInsightsAccessScopeAnalysisArnT>(value); }
    template<typename NetworkInsightsAccessScopeAnalysisArnT = Aws::String>
    NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisArn(NetworkInsightsAccessScopeAnalysisArnT&& value) { SetNetworkInsightsAccessScopeAnalysisArn(std::forward<NetworkInsightsAccessScopeAnalysisArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const { return m_networkInsightsAccessScopeId; }
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    void SetNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::forward<NetworkInsightsAccessScopeIdT>(value); }
    template<typename NetworkInsightsAccessScopeIdT = Aws::String>
    NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeId(NetworkInsightsAccessScopeIdT&& value) { SetNetworkInsightsAccessScopeId(std::forward<NetworkInsightsAccessScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline AnalysisStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AnalysisStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NetworkInsightsAccessScopeAnalysis& WithStatus(AnalysisStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    NetworkInsightsAccessScopeAnalysis& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
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
    NetworkInsightsAccessScopeAnalysis& WithWarningMessage(WarningMessageT&& value) { SetWarningMessage(std::forward<WarningMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis start date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    NetworkInsightsAccessScopeAnalysis& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis end date.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    NetworkInsightsAccessScopeAnalysis& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are findings.</p>
     */
    inline FindingsFound GetFindingsFound() const { return m_findingsFound; }
    inline bool FindingsFoundHasBeenSet() const { return m_findingsFoundHasBeenSet; }
    inline void SetFindingsFound(FindingsFound value) { m_findingsFoundHasBeenSet = true; m_findingsFound = value; }
    inline NetworkInsightsAccessScopeAnalysis& WithFindingsFound(FindingsFound value) { SetFindingsFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of network interfaces analyzed.</p>
     */
    inline int GetAnalyzedEniCount() const { return m_analyzedEniCount; }
    inline bool AnalyzedEniCountHasBeenSet() const { return m_analyzedEniCountHasBeenSet; }
    inline void SetAnalyzedEniCount(int value) { m_analyzedEniCountHasBeenSet = true; m_analyzedEniCount = value; }
    inline NetworkInsightsAccessScopeAnalysis& WithAnalyzedEniCount(int value) { SetAnalyzedEniCount(value); return *this;}
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
    NetworkInsightsAccessScopeAnalysis& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NetworkInsightsAccessScopeAnalysis& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_networkInsightsAccessScopeAnalysisId;
    bool m_networkInsightsAccessScopeAnalysisIdHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeAnalysisArn;
    bool m_networkInsightsAccessScopeAnalysisArnHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    AnalysisStatus m_status{AnalysisStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    FindingsFound m_findingsFound{FindingsFound::NOT_SET};
    bool m_findingsFoundHasBeenSet = false;

    int m_analyzedEniCount{0};
    bool m_analyzedEniCountHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
