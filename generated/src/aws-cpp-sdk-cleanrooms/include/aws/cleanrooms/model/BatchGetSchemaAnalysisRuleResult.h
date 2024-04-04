/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisRule.h>
#include <aws/cleanrooms/model/BatchGetSchemaAnalysisRuleError.h>
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
  class BatchGetSchemaAnalysisRuleResult
  {
  public:
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleResult();
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API BatchGetSchemaAnalysisRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline const Aws::Vector<AnalysisRule>& GetAnalysisRules() const{ return m_analysisRules; }

    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline void SetAnalysisRules(const Aws::Vector<AnalysisRule>& value) { m_analysisRules = value; }

    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline void SetAnalysisRules(Aws::Vector<AnalysisRule>&& value) { m_analysisRules = std::move(value); }

    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& WithAnalysisRules(const Aws::Vector<AnalysisRule>& value) { SetAnalysisRules(value); return *this;}

    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& WithAnalysisRules(Aws::Vector<AnalysisRule>&& value) { SetAnalysisRules(std::move(value)); return *this;}

    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& AddAnalysisRules(const AnalysisRule& value) { m_analysisRules.push_back(value); return *this; }

    /**
     * <p>The retrieved list of analysis rules.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& AddAnalysisRules(AnalysisRule&& value) { m_analysisRules.push_back(std::move(value)); return *this; }


    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetSchemaAnalysisRuleError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetSchemaAnalysisRuleError>& value) { m_errors = value; }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetSchemaAnalysisRuleError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& WithErrors(const Aws::Vector<BatchGetSchemaAnalysisRuleError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& WithErrors(Aws::Vector<BatchGetSchemaAnalysisRuleError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& AddErrors(const BatchGetSchemaAnalysisRuleError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaAnalysisRuleResult& AddErrors(BatchGetSchemaAnalysisRuleError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetSchemaAnalysisRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetSchemaAnalysisRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetSchemaAnalysisRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnalysisRule> m_analysisRules;

    Aws::Vector<BatchGetSchemaAnalysisRuleError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
