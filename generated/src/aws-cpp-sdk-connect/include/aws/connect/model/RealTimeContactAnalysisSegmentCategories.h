/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RealTimeContactAnalysisCategoryDetails.h>
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
   * <p>The matched category rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisSegmentCategories">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisSegmentCategories
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisSegmentCategories() = default;
    AWS_CONNECT_API RealTimeContactAnalysisSegmentCategories(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentCategories& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline const Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>& GetMatchedDetails() const { return m_matchedDetails; }
    inline bool MatchedDetailsHasBeenSet() const { return m_matchedDetailsHasBeenSet; }
    template<typename MatchedDetailsT = Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>>
    void SetMatchedDetails(MatchedDetailsT&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = std::forward<MatchedDetailsT>(value); }
    template<typename MatchedDetailsT = Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>>
    RealTimeContactAnalysisSegmentCategories& WithMatchedDetails(MatchedDetailsT&& value) { SetMatchedDetails(std::forward<MatchedDetailsT>(value)); return *this;}
    template<typename MatchedDetailsKeyT = Aws::String, typename MatchedDetailsValueT = RealTimeContactAnalysisCategoryDetails>
    RealTimeContactAnalysisSegmentCategories& AddMatchedDetails(MatchedDetailsKeyT&& key, MatchedDetailsValueT&& value) {
      m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::forward<MatchedDetailsKeyT>(key), std::forward<MatchedDetailsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails> m_matchedDetails;
    bool m_matchedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
