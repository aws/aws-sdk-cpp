/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityResultDescription.h>
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
  class ListDataQualityResultsResult
  {
  public:
    AWS_GLUE_API ListDataQualityResultsResult();
    AWS_GLUE_API ListDataQualityResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>DataQualityResultDescription</code> objects.</p>
     */
    inline const Aws::Vector<DataQualityResultDescription>& GetResults() const{ return m_results; }

    /**
     * <p>A list of <code>DataQualityResultDescription</code> objects.</p>
     */
    inline void SetResults(const Aws::Vector<DataQualityResultDescription>& value) { m_results = value; }

    /**
     * <p>A list of <code>DataQualityResultDescription</code> objects.</p>
     */
    inline void SetResults(Aws::Vector<DataQualityResultDescription>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of <code>DataQualityResultDescription</code> objects.</p>
     */
    inline ListDataQualityResultsResult& WithResults(const Aws::Vector<DataQualityResultDescription>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of <code>DataQualityResultDescription</code> objects.</p>
     */
    inline ListDataQualityResultsResult& WithResults(Aws::Vector<DataQualityResultDescription>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataQualityResultDescription</code> objects.</p>
     */
    inline ListDataQualityResultsResult& AddResults(const DataQualityResultDescription& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataQualityResultDescription</code> objects.</p>
     */
    inline ListDataQualityResultsResult& AddResults(DataQualityResultDescription&& value) { m_results.push_back(std::move(value)); return *this; }


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
    inline ListDataQualityResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataQualityResultDescription> m_results;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
