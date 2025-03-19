/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>TracePoints snapped onto the road network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoadSnapSnappedTracePoint">AWS
   * API Reference</a></p>
   */
  class RoadSnapSnappedTracePoint
  {
  public:
    AWS_GEOROUTES_API RoadSnapSnappedTracePoint() = default;
    AWS_GEOROUTES_API RoadSnapSnappedTracePoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoadSnapSnappedTracePoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Confidence value for the correctness of this point match.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline RoadSnapSnappedTracePoint& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Position of the TracePoint provided within the request, at the same
     * index.</p>
     */
    inline const Aws::Vector<double>& GetOriginalPosition() const { return m_originalPosition; }
    inline bool OriginalPositionHasBeenSet() const { return m_originalPositionHasBeenSet; }
    template<typename OriginalPositionT = Aws::Vector<double>>
    void SetOriginalPosition(OriginalPositionT&& value) { m_originalPositionHasBeenSet = true; m_originalPosition = std::forward<OriginalPositionT>(value); }
    template<typename OriginalPositionT = Aws::Vector<double>>
    RoadSnapSnappedTracePoint& WithOriginalPosition(OriginalPositionT&& value) { SetOriginalPosition(std::forward<OriginalPositionT>(value)); return *this;}
    inline RoadSnapSnappedTracePoint& AddOriginalPosition(double value) { m_originalPositionHasBeenSet = true; m_originalPosition.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Snapped position of the TracePoint provided within the request, at the same
     * index. </p>
     */
    inline const Aws::Vector<double>& GetSnappedPosition() const { return m_snappedPosition; }
    inline bool SnappedPositionHasBeenSet() const { return m_snappedPositionHasBeenSet; }
    template<typename SnappedPositionT = Aws::Vector<double>>
    void SetSnappedPosition(SnappedPositionT&& value) { m_snappedPositionHasBeenSet = true; m_snappedPosition = std::forward<SnappedPositionT>(value); }
    template<typename SnappedPositionT = Aws::Vector<double>>
    RoadSnapSnappedTracePoint& WithSnappedPosition(SnappedPositionT&& value) { SetSnappedPosition(std::forward<SnappedPositionT>(value)); return *this;}
    inline RoadSnapSnappedTracePoint& AddSnappedPosition(double value) { m_snappedPositionHasBeenSet = true; m_snappedPosition.push_back(value); return *this; }
    ///@}
  private:

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<double> m_originalPosition;
    bool m_originalPositionHasBeenSet = false;

    Aws::Vector<double> m_snappedPosition;
    bool m_snappedPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
