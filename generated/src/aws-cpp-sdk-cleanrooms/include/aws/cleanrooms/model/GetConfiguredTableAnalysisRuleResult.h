/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetConfiguredTableAnalysisRuleResult
  {
  public:
    AWS_CLEANROOMS_API GetConfiguredTableAnalysisRuleResult();
    AWS_CLEANROOMS_API GetConfiguredTableAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetConfiguredTableAnalysisRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entire analysis rule output.</p>
     */
    inline const ConfiguredTableAnalysisRule& GetAnalysisRule() const{ return m_analysisRule; }

    /**
     * <p>The entire analysis rule output.</p>
     */
    inline void SetAnalysisRule(const ConfiguredTableAnalysisRule& value) { m_analysisRule = value; }

    /**
     * <p>The entire analysis rule output.</p>
     */
    inline void SetAnalysisRule(ConfiguredTableAnalysisRule&& value) { m_analysisRule = std::move(value); }

    /**
     * <p>The entire analysis rule output.</p>
     */
    inline GetConfiguredTableAnalysisRuleResult& WithAnalysisRule(const ConfiguredTableAnalysisRule& value) { SetAnalysisRule(value); return *this;}

    /**
     * <p>The entire analysis rule output.</p>
     */
    inline GetConfiguredTableAnalysisRuleResult& WithAnalysisRule(ConfiguredTableAnalysisRule&& value) { SetAnalysisRule(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConfiguredTableAnalysisRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConfiguredTableAnalysisRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConfiguredTableAnalysisRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConfiguredTableAnalysisRule m_analysisRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
