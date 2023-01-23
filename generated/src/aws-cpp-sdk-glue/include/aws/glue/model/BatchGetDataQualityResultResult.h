/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DataQualityResult.h>
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
namespace Glue
{
namespace Model
{
  class BatchGetDataQualityResultResult
  {
  public:
    AWS_GLUE_API BatchGetDataQualityResultResult();
    AWS_GLUE_API BatchGetDataQualityResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetDataQualityResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline const Aws::Vector<DataQualityResult>& GetResults() const{ return m_results; }

    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline void SetResults(const Aws::Vector<DataQualityResult>& value) { m_results = value; }

    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline void SetResults(Aws::Vector<DataQualityResult>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline BatchGetDataQualityResultResult& WithResults(const Aws::Vector<DataQualityResult>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline BatchGetDataQualityResultResult& WithResults(Aws::Vector<DataQualityResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline BatchGetDataQualityResultResult& AddResults(const DataQualityResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataQualityResult</code> objects representing the data
     * quality results.</p>
     */
    inline BatchGetDataQualityResultResult& AddResults(DataQualityResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResultsNotFound() const{ return m_resultsNotFound; }

    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline void SetResultsNotFound(const Aws::Vector<Aws::String>& value) { m_resultsNotFound = value; }

    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline void SetResultsNotFound(Aws::Vector<Aws::String>&& value) { m_resultsNotFound = std::move(value); }

    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline BatchGetDataQualityResultResult& WithResultsNotFound(const Aws::Vector<Aws::String>& value) { SetResultsNotFound(value); return *this;}

    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline BatchGetDataQualityResultResult& WithResultsNotFound(Aws::Vector<Aws::String>&& value) { SetResultsNotFound(std::move(value)); return *this;}

    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline BatchGetDataQualityResultResult& AddResultsNotFound(const Aws::String& value) { m_resultsNotFound.push_back(value); return *this; }

    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline BatchGetDataQualityResultResult& AddResultsNotFound(Aws::String&& value) { m_resultsNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of result IDs for which results were not found.</p>
     */
    inline BatchGetDataQualityResultResult& AddResultsNotFound(const char* value) { m_resultsNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<DataQualityResult> m_results;

    Aws::Vector<Aws::String> m_resultsNotFound;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
