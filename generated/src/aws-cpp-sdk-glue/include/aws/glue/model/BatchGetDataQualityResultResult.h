/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityResult.h>
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
  class BatchGetDataQualityResultResult
  {
  public:
    AWS_GLUE_API BatchGetDataQualityResultResult() = default;
    AWS_GLUE_API BatchGetDataQualityResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetDataQualityResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline const Aws::Vector<DataQualityResult>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<DataQualityResult>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<DataQualityResult>>
    BatchGetDataQualityResultResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = DataQualityResult>
    BatchGetDataQualityResultResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResultsNotFound() const { return m_resultsNotFound; }
    template<typename ResultsNotFoundT = Aws::Vector<Aws::String>>
    void SetResultsNotFound(ResultsNotFoundT&& value) { m_resultsNotFoundHasBeenSet = true; m_resultsNotFound = std::forward<ResultsNotFoundT>(value); }
    template<typename ResultsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetDataQualityResultResult& WithResultsNotFound(ResultsNotFoundT&& value) { SetResultsNotFound(std::forward<ResultsNotFoundT>(value)); return *this;}
    template<typename ResultsNotFoundT = Aws::String>
    BatchGetDataQualityResultResult& AddResultsNotFound(ResultsNotFoundT&& value) { m_resultsNotFoundHasBeenSet = true; m_resultsNotFound.emplace_back(std::forward<ResultsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetDataQualityResultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataQualityResult> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_resultsNotFound;
    bool m_resultsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
