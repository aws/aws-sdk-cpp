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
    AWS_CONNECT_API RealTimeContactAnalysisSegmentCategories();
    AWS_CONNECT_API RealTimeContactAnalysisSegmentCategories(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisSegmentCategories& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline const Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>& GetMatchedDetails() const{ return m_matchedDetails; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline bool MatchedDetailsHasBeenSet() const { return m_matchedDetailsHasBeenSet; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline void SetMatchedDetails(const Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = value; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline void SetMatchedDetails(Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails = std::move(value); }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& WithMatchedDetails(const Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>& value) { SetMatchedDetails(value); return *this;}

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& WithMatchedDetails(Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails>&& value) { SetMatchedDetails(std::move(value)); return *this;}

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& AddMatchedDetails(const Aws::String& key, const RealTimeContactAnalysisCategoryDetails& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, value); return *this; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& AddMatchedDetails(Aws::String&& key, const RealTimeContactAnalysisCategoryDetails& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& AddMatchedDetails(const Aws::String& key, RealTimeContactAnalysisCategoryDetails&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& AddMatchedDetails(Aws::String&& key, RealTimeContactAnalysisCategoryDetails&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& AddMatchedDetails(const char* key, RealTimeContactAnalysisCategoryDetails&& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map between the name of the matched rule and
     * RealTimeContactAnalysisCategoryDetails.</p>
     */
    inline RealTimeContactAnalysisSegmentCategories& AddMatchedDetails(const char* key, const RealTimeContactAnalysisCategoryDetails& value) { m_matchedDetailsHasBeenSet = true; m_matchedDetails.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, RealTimeContactAnalysisCategoryDetails> m_matchedDetails;
    bool m_matchedDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
