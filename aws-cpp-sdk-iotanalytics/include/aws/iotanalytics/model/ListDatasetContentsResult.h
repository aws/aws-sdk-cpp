/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatasetContentSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class AWS_IOTANALYTICS_API ListDatasetContentsResult
  {
  public:
    ListDatasetContentsResult();
    ListDatasetContentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDatasetContentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about data set contents that have been created.</p>
     */
    inline const Aws::Vector<DatasetContentSummary>& GetDatasetContentSummaries() const{ return m_datasetContentSummaries; }

    /**
     * <p>Summary information about data set contents that have been created.</p>
     */
    inline void SetDatasetContentSummaries(const Aws::Vector<DatasetContentSummary>& value) { m_datasetContentSummaries = value; }

    /**
     * <p>Summary information about data set contents that have been created.</p>
     */
    inline void SetDatasetContentSummaries(Aws::Vector<DatasetContentSummary>&& value) { m_datasetContentSummaries = std::move(value); }

    /**
     * <p>Summary information about data set contents that have been created.</p>
     */
    inline ListDatasetContentsResult& WithDatasetContentSummaries(const Aws::Vector<DatasetContentSummary>& value) { SetDatasetContentSummaries(value); return *this;}

    /**
     * <p>Summary information about data set contents that have been created.</p>
     */
    inline ListDatasetContentsResult& WithDatasetContentSummaries(Aws::Vector<DatasetContentSummary>&& value) { SetDatasetContentSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information about data set contents that have been created.</p>
     */
    inline ListDatasetContentsResult& AddDatasetContentSummaries(const DatasetContentSummary& value) { m_datasetContentSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information about data set contents that have been created.</p>
     */
    inline ListDatasetContentsResult& AddDatasetContentSummaries(DatasetContentSummary&& value) { m_datasetContentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatasetContentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatasetContentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatasetContentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetContentSummary> m_datasetContentSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
