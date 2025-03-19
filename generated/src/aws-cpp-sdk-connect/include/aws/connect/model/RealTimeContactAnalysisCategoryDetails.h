/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RealTimeContactAnalysisPointOfInterest.h>
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
   * <p>Provides information about the category rule that was matched.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisCategoryDetails">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisCategoryDetails
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisCategoryDetails() = default;
    AWS_CONNECT_API RealTimeContactAnalysisCategoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisCategoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisPointOfInterest>& GetPointsOfInterest() const { return m_pointsOfInterest; }
    inline bool PointsOfInterestHasBeenSet() const { return m_pointsOfInterestHasBeenSet; }
    template<typename PointsOfInterestT = Aws::Vector<RealTimeContactAnalysisPointOfInterest>>
    void SetPointsOfInterest(PointsOfInterestT&& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest = std::forward<PointsOfInterestT>(value); }
    template<typename PointsOfInterestT = Aws::Vector<RealTimeContactAnalysisPointOfInterest>>
    RealTimeContactAnalysisCategoryDetails& WithPointsOfInterest(PointsOfInterestT&& value) { SetPointsOfInterest(std::forward<PointsOfInterestT>(value)); return *this;}
    template<typename PointsOfInterestT = RealTimeContactAnalysisPointOfInterest>
    RealTimeContactAnalysisCategoryDetails& AddPointsOfInterest(PointsOfInterestT&& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest.emplace_back(std::forward<PointsOfInterestT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RealTimeContactAnalysisPointOfInterest> m_pointsOfInterest;
    bool m_pointsOfInterestHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
