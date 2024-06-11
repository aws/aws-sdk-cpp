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
    AWS_EC2_API NetworkInsightsAccessScopeAnalysis();
    AWS_EC2_API NetworkInsightsAccessScopeAnalysis(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsAccessScopeAnalysis& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const{ return m_networkInsightsAccessScopeAnalysisId; }
    inline bool NetworkInsightsAccessScopeAnalysisIdHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisIdHasBeenSet; }
    inline void SetNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = value; }
    inline void SetNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = std::move(value); }
    inline void SetNetworkInsightsAccessScopeAnalysisId(const char* value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId.assign(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::move(value)); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisId(const char* value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisArn() const{ return m_networkInsightsAccessScopeAnalysisArn; }
    inline bool NetworkInsightsAccessScopeAnalysisArnHasBeenSet() const { return m_networkInsightsAccessScopeAnalysisArnHasBeenSet; }
    inline void SetNetworkInsightsAccessScopeAnalysisArn(const Aws::String& value) { m_networkInsightsAccessScopeAnalysisArnHasBeenSet = true; m_networkInsightsAccessScopeAnalysisArn = value; }
    inline void SetNetworkInsightsAccessScopeAnalysisArn(Aws::String&& value) { m_networkInsightsAccessScopeAnalysisArnHasBeenSet = true; m_networkInsightsAccessScopeAnalysisArn = std::move(value); }
    inline void SetNetworkInsightsAccessScopeAnalysisArn(const char* value) { m_networkInsightsAccessScopeAnalysisArnHasBeenSet = true; m_networkInsightsAccessScopeAnalysisArn.assign(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisArn(const Aws::String& value) { SetNetworkInsightsAccessScopeAnalysisArn(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisArn(Aws::String&& value) { SetNetworkInsightsAccessScopeAnalysisArn(std::move(value)); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeAnalysisArn(const char* value) { SetNetworkInsightsAccessScopeAnalysisArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Network Access Scope.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeId() const{ return m_networkInsightsAccessScopeId; }
    inline bool NetworkInsightsAccessScopeIdHasBeenSet() const { return m_networkInsightsAccessScopeIdHasBeenSet; }
    inline void SetNetworkInsightsAccessScopeId(const Aws::String& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = value; }
    inline void SetNetworkInsightsAccessScopeId(Aws::String&& value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId = std::move(value); }
    inline void SetNetworkInsightsAccessScopeId(const char* value) { m_networkInsightsAccessScopeIdHasBeenSet = true; m_networkInsightsAccessScopeId.assign(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeId(const Aws::String& value) { SetNetworkInsightsAccessScopeId(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeId(Aws::String&& value) { SetNetworkInsightsAccessScopeId(std::move(value)); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithNetworkInsightsAccessScopeId(const char* value) { SetNetworkInsightsAccessScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const AnalysisStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AnalysisStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AnalysisStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithStatus(const AnalysisStatus& value) { SetStatus(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithStatus(AnalysisStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warning message.</p>
     */
    inline const Aws::String& GetWarningMessage() const{ return m_warningMessage; }
    inline bool WarningMessageHasBeenSet() const { return m_warningMessageHasBeenSet; }
    inline void SetWarningMessage(const Aws::String& value) { m_warningMessageHasBeenSet = true; m_warningMessage = value; }
    inline void SetWarningMessage(Aws::String&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::move(value); }
    inline void SetWarningMessage(const char* value) { m_warningMessageHasBeenSet = true; m_warningMessage.assign(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithWarningMessage(const Aws::String& value) { SetWarningMessage(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithWarningMessage(Aws::String&& value) { SetWarningMessage(std::move(value)); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithWarningMessage(const char* value) { SetWarningMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis start date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis end date.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are findings.</p>
     */
    inline const FindingsFound& GetFindingsFound() const{ return m_findingsFound; }
    inline bool FindingsFoundHasBeenSet() const { return m_findingsFoundHasBeenSet; }
    inline void SetFindingsFound(const FindingsFound& value) { m_findingsFoundHasBeenSet = true; m_findingsFound = value; }
    inline void SetFindingsFound(FindingsFound&& value) { m_findingsFoundHasBeenSet = true; m_findingsFound = std::move(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithFindingsFound(const FindingsFound& value) { SetFindingsFound(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithFindingsFound(FindingsFound&& value) { SetFindingsFound(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of network interfaces analyzed.</p>
     */
    inline int GetAnalyzedEniCount() const{ return m_analyzedEniCount; }
    inline bool AnalyzedEniCountHasBeenSet() const { return m_analyzedEniCountHasBeenSet; }
    inline void SetAnalyzedEniCount(int value) { m_analyzedEniCountHasBeenSet = true; m_analyzedEniCount = value; }
    inline NetworkInsightsAccessScopeAnalysis& WithAnalyzedEniCount(int value) { SetAnalyzedEniCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline NetworkInsightsAccessScopeAnalysis& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline NetworkInsightsAccessScopeAnalysis& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline NetworkInsightsAccessScopeAnalysis& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_networkInsightsAccessScopeAnalysisId;
    bool m_networkInsightsAccessScopeAnalysisIdHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeAnalysisArn;
    bool m_networkInsightsAccessScopeAnalysisArnHasBeenSet = false;

    Aws::String m_networkInsightsAccessScopeId;
    bool m_networkInsightsAccessScopeIdHasBeenSet = false;

    AnalysisStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    FindingsFound m_findingsFound;
    bool m_findingsFoundHasBeenSet = false;

    int m_analyzedEniCount;
    bool m_analyzedEniCountHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
