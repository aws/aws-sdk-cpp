/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRule.h>
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
namespace CleanRooms
{
namespace Model
{
  class CreateConfiguredTableAnalysisRuleResult
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleResult();
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API CreateConfiguredTableAnalysisRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entire created analysis rule.</p>
     */
    inline const ConfiguredTableAnalysisRule& GetAnalysisRule() const{ return m_analysisRule; }

    /**
     * <p>The entire created analysis rule.</p>
     */
    inline void SetAnalysisRule(const ConfiguredTableAnalysisRule& value) { m_analysisRule = value; }

    /**
     * <p>The entire created analysis rule.</p>
     */
    inline void SetAnalysisRule(ConfiguredTableAnalysisRule&& value) { m_analysisRule = std::move(value); }

    /**
     * <p>The entire created analysis rule.</p>
     */
    inline CreateConfiguredTableAnalysisRuleResult& WithAnalysisRule(const ConfiguredTableAnalysisRule& value) { SetAnalysisRule(value); return *this;}

    /**
     * <p>The entire created analysis rule.</p>
     */
    inline CreateConfiguredTableAnalysisRuleResult& WithAnalysisRule(ConfiguredTableAnalysisRule&& value) { SetAnalysisRule(std::move(value)); return *this;}

  private:

    ConfiguredTableAnalysisRule m_analysisRule;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
