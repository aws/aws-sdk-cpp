/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RoadSnapNoticeCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Notices provide information around factors that may have influenced snapping
   * in a manner atypical to the standard use cases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoadSnapNotice">AWS
   * API Reference</a></p>
   */
  class RoadSnapNotice
  {
  public:
    AWS_GEOROUTES_API RoadSnapNotice() = default;
    AWS_GEOROUTES_API RoadSnapNotice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoadSnapNotice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Code corresponding to the issue.</p>
     */
    inline RoadSnapNoticeCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(RoadSnapNoticeCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline RoadSnapNotice& WithCode(RoadSnapNoticeCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notice title.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    RoadSnapNotice& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TracePoint indices for which the provided notice code corresponds to.</p>
     */
    inline const Aws::Vector<int>& GetTracePointIndexes() const { return m_tracePointIndexes; }
    inline bool TracePointIndexesHasBeenSet() const { return m_tracePointIndexesHasBeenSet; }
    template<typename TracePointIndexesT = Aws::Vector<int>>
    void SetTracePointIndexes(TracePointIndexesT&& value) { m_tracePointIndexesHasBeenSet = true; m_tracePointIndexes = std::forward<TracePointIndexesT>(value); }
    template<typename TracePointIndexesT = Aws::Vector<int>>
    RoadSnapNotice& WithTracePointIndexes(TracePointIndexesT&& value) { SetTracePointIndexes(std::forward<TracePointIndexesT>(value)); return *this;}
    inline RoadSnapNotice& AddTracePointIndexes(int value) { m_tracePointIndexesHasBeenSet = true; m_tracePointIndexes.push_back(value); return *this; }
    ///@}
  private:

    RoadSnapNoticeCode m_code{RoadSnapNoticeCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<int> m_tracePointIndexes;
    bool m_tracePointIndexesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
