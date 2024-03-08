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
    AWS_CONNECT_API RealTimeContactAnalysisCategoryDetails();
    AWS_CONNECT_API RealTimeContactAnalysisCategoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisCategoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline const Aws::Vector<RealTimeContactAnalysisPointOfInterest>& GetPointsOfInterest() const{ return m_pointsOfInterest; }

    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline bool PointsOfInterestHasBeenSet() const { return m_pointsOfInterestHasBeenSet; }

    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline void SetPointsOfInterest(const Aws::Vector<RealTimeContactAnalysisPointOfInterest>& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest = value; }

    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline void SetPointsOfInterest(Aws::Vector<RealTimeContactAnalysisPointOfInterest>&& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest = std::move(value); }

    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline RealTimeContactAnalysisCategoryDetails& WithPointsOfInterest(const Aws::Vector<RealTimeContactAnalysisPointOfInterest>& value) { SetPointsOfInterest(value); return *this;}

    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline RealTimeContactAnalysisCategoryDetails& WithPointsOfInterest(Aws::Vector<RealTimeContactAnalysisPointOfInterest>&& value) { SetPointsOfInterest(std::move(value)); return *this;}

    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline RealTimeContactAnalysisCategoryDetails& AddPointsOfInterest(const RealTimeContactAnalysisPointOfInterest& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest.push_back(value); return *this; }

    /**
     * <p>List of PointOfInterest - objects describing a single match of a rule.</p>
     */
    inline RealTimeContactAnalysisCategoryDetails& AddPointsOfInterest(RealTimeContactAnalysisPointOfInterest&& value) { m_pointsOfInterestHasBeenSet = true; m_pointsOfInterest.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RealTimeContactAnalysisPointOfInterest> m_pointsOfInterest;
    bool m_pointsOfInterestHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
