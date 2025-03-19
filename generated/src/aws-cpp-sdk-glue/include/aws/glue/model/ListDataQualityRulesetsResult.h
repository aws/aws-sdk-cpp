/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityRulesetListDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class ListDataQualityRulesetsResult
  {
  public:
    AWS_GLUE_API ListDataQualityRulesetsResult() = default;
    AWS_GLUE_API ListDataQualityRulesetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityRulesetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline const Aws::Vector<DataQualityRulesetListDetails>& GetRulesets() const { return m_rulesets; }
    template<typename RulesetsT = Aws::Vector<DataQualityRulesetListDetails>>
    void SetRulesets(RulesetsT&& value) { m_rulesetsHasBeenSet = true; m_rulesets = std::forward<RulesetsT>(value); }
    template<typename RulesetsT = Aws::Vector<DataQualityRulesetListDetails>>
    ListDataQualityRulesetsResult& WithRulesets(RulesetsT&& value) { SetRulesets(std::forward<RulesetsT>(value)); return *this;}
    template<typename RulesetsT = DataQualityRulesetListDetails>
    ListDataQualityRulesetsResult& AddRulesets(RulesetsT&& value) { m_rulesetsHasBeenSet = true; m_rulesets.emplace_back(std::forward<RulesetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataQualityRulesetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataQualityRulesetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataQualityRulesetListDetails> m_rulesets;
    bool m_rulesetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
