/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RealTimeContactAnalysisIssueDetected.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Segment type containing a list of detected issues.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisSegmentIssues">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisSegmentIssues
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisSegmentIssues() = default;
    AWS_CONNECT_API RealTimeContactAnalysisSegmentIssues(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentIssues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of the issues detected.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisIssueDetected>& GetIssuesDetected() const { return m_issuesDetected; }
    inline bool IssuesDetectedHasBeenSet() const { return m_issuesDetectedHasBeenSet; }
    template<typename IssuesDetectedT = Aws::Vector<RealTimeContactAnalysisIssueDetected>>
    void SetIssuesDetected(IssuesDetectedT&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected = std::forward<IssuesDetectedT>(value); }
    template<typename IssuesDetectedT = Aws::Vector<RealTimeContactAnalysisIssueDetected>>
    RealTimeContactAnalysisSegmentIssues& WithIssuesDetected(IssuesDetectedT&& value) { SetIssuesDetected(std::forward<IssuesDetectedT>(value)); return *this;}
    template<typename IssuesDetectedT = RealTimeContactAnalysisIssueDetected>
    RealTimeContactAnalysisSegmentIssues& AddIssuesDetected(IssuesDetectedT&& value) { m_issuesDetectedHasBeenSet = true; m_issuesDetected.emplace_back(std::forward<IssuesDetectedT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RealTimeContactAnalysisIssueDetected> m_issuesDetected;
    bool m_issuesDetectedHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
