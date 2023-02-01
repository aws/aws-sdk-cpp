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
    AWS_GLUE_API ListDataQualityRulesetsResult();
    AWS_GLUE_API ListDataQualityRulesetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityRulesetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline const Aws::Vector<DataQualityRulesetListDetails>& GetRulesets() const{ return m_rulesets; }

    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline void SetRulesets(const Aws::Vector<DataQualityRulesetListDetails>& value) { m_rulesets = value; }

    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline void SetRulesets(Aws::Vector<DataQualityRulesetListDetails>&& value) { m_rulesets = std::move(value); }

    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline ListDataQualityRulesetsResult& WithRulesets(const Aws::Vector<DataQualityRulesetListDetails>& value) { SetRulesets(value); return *this;}

    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline ListDataQualityRulesetsResult& WithRulesets(Aws::Vector<DataQualityRulesetListDetails>&& value) { SetRulesets(std::move(value)); return *this;}

    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline ListDataQualityRulesetsResult& AddRulesets(const DataQualityRulesetListDetails& value) { m_rulesets.push_back(value); return *this; }

    /**
     * <p>A paginated list of rulesets for the specified list of Glue tables.</p>
     */
    inline ListDataQualityRulesetsResult& AddRulesets(DataQualityRulesetListDetails&& value) { m_rulesets.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityRulesetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityRulesetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityRulesetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataQualityRulesetListDetails> m_rulesets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
