/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/EvaluationResult.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class BatchEvaluateFeatureResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API BatchEvaluateFeatureResult();
    AWS_CLOUDWATCHEVIDENTLY_API BatchEvaluateFeatureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API BatchEvaluateFeatureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures, where each structure displays the results of one
     * feature evaluation assignment to one user session.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetResults() const{ return m_results; }

    /**
     * <p>An array of structures, where each structure displays the results of one
     * feature evaluation assignment to one user session.</p>
     */
    inline void SetResults(const Aws::Vector<EvaluationResult>& value) { m_results = value; }

    /**
     * <p>An array of structures, where each structure displays the results of one
     * feature evaluation assignment to one user session.</p>
     */
    inline void SetResults(Aws::Vector<EvaluationResult>&& value) { m_results = std::move(value); }

    /**
     * <p>An array of structures, where each structure displays the results of one
     * feature evaluation assignment to one user session.</p>
     */
    inline BatchEvaluateFeatureResult& WithResults(const Aws::Vector<EvaluationResult>& value) { SetResults(value); return *this;}

    /**
     * <p>An array of structures, where each structure displays the results of one
     * feature evaluation assignment to one user session.</p>
     */
    inline BatchEvaluateFeatureResult& WithResults(Aws::Vector<EvaluationResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>An array of structures, where each structure displays the results of one
     * feature evaluation assignment to one user session.</p>
     */
    inline BatchEvaluateFeatureResult& AddResults(const EvaluationResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>An array of structures, where each structure displays the results of one
     * feature evaluation assignment to one user session.</p>
     */
    inline BatchEvaluateFeatureResult& AddResults(EvaluationResult&& value) { m_results.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchEvaluateFeatureResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchEvaluateFeatureResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchEvaluateFeatureResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EvaluationResult> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
