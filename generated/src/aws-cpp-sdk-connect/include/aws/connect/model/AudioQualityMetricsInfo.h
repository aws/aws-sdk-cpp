/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information for score and potential quality issues for
   * Audio</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AudioQualityMetricsInfo">AWS
   * API Reference</a></p>
   */
  class AudioQualityMetricsInfo
  {
  public:
    AWS_CONNECT_API AudioQualityMetricsInfo() = default;
    AWS_CONNECT_API AudioQualityMetricsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AudioQualityMetricsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number measuring the estimated quality of the media connection.</p>
     */
    inline double GetQualityScore() const { return m_qualityScore; }
    inline bool QualityScoreHasBeenSet() const { return m_qualityScoreHasBeenSet; }
    inline void SetQualityScore(double value) { m_qualityScoreHasBeenSet = true; m_qualityScore = value; }
    inline AudioQualityMetricsInfo& WithQualityScore(double value) { SetQualityScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of potential issues causing degradation of quality on a media
     * connection. If the service did not detect any potential quality issues the list
     * is empty.</p> <p>Valid values: <code>HighPacketLoss</code> |
     * <code>HighRoundTripTime</code> | <code>HighJitterBuffer</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetPotentialQualityIssues() const { return m_potentialQualityIssues; }
    inline bool PotentialQualityIssuesHasBeenSet() const { return m_potentialQualityIssuesHasBeenSet; }
    template<typename PotentialQualityIssuesT = Aws::Vector<Aws::String>>
    void SetPotentialQualityIssues(PotentialQualityIssuesT&& value) { m_potentialQualityIssuesHasBeenSet = true; m_potentialQualityIssues = std::forward<PotentialQualityIssuesT>(value); }
    template<typename PotentialQualityIssuesT = Aws::Vector<Aws::String>>
    AudioQualityMetricsInfo& WithPotentialQualityIssues(PotentialQualityIssuesT&& value) { SetPotentialQualityIssues(std::forward<PotentialQualityIssuesT>(value)); return *this;}
    template<typename PotentialQualityIssuesT = Aws::String>
    AudioQualityMetricsInfo& AddPotentialQualityIssues(PotentialQualityIssuesT&& value) { m_potentialQualityIssuesHasBeenSet = true; m_potentialQualityIssues.emplace_back(std::forward<PotentialQualityIssuesT>(value)); return *this; }
    ///@}
  private:

    double m_qualityScore{0.0};
    bool m_qualityScoreHasBeenSet = false;

    Aws::Vector<Aws::String> m_potentialQualityIssues;
    bool m_potentialQualityIssuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
