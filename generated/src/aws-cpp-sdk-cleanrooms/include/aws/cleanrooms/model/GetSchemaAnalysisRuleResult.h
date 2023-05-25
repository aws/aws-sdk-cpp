/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisRule.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSchemaAnalysisRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSchemaAnalysisRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSchemaAnalysisRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AnalysisRule m_analysisRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
