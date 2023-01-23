/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisRule.h>
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
  class GetSchemaAnalysisRuleResult
  {
  public:
    AWS_CLEANROOMS_API GetSchemaAnalysisRuleResult();
    AWS_CLEANROOMS_API GetSchemaAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetSchemaAnalysisRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A specification about how data from the configured table can be used.</p>
     */
    inline const AnalysisRule& GetAnalysisRule() const{ return m_analysisRule; }

    /**
     * <p>A specification about how data from the configured table can be used.</p>
     */
    inline void SetAnalysisRule(const AnalysisRule& value) { m_analysisRule = value; }

    /**
     * <p>A specification about how data from the configured table can be used.</p>
     */
    inline void SetAnalysisRule(AnalysisRule&& value) { m_analysisRule = std::move(value); }

    /**
     * <p>A specification about how data from the configured table can be used.</p>
     */
    inline GetSchemaAnalysisRuleResult& WithAnalysisRule(const AnalysisRule& value) { SetAnalysisRule(value); return *this;}

    /**
     * <p>A specification about how data from the configured table can be used.</p>
     */
    inline GetSchemaAnalysisRuleResult& WithAnalysisRule(AnalysisRule&& value) { SetAnalysisRule(std::move(value)); return *this;}

  private:

    AnalysisRule m_analysisRule;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
