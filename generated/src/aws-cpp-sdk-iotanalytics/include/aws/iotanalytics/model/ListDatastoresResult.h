/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatastoreSummary.h>
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
  class ListDatastoresResult
  {
  public:
    AWS_IOTANALYTICS_API ListDatastoresResult();
    AWS_IOTANALYTICS_API ListDatastoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API ListDatastoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline const Aws::Vector<DatastoreSummary>& GetDatastoreSummaries() const{ return m_datastoreSummaries; }

    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline void SetDatastoreSummaries(const Aws::Vector<DatastoreSummary>& value) { m_datastoreSummaries = value; }

    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline void SetDatastoreSummaries(Aws::Vector<DatastoreSummary>&& value) { m_datastoreSummaries = std::move(value); }

    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline ListDatastoresResult& WithDatastoreSummaries(const Aws::Vector<DatastoreSummary>& value) { SetDatastoreSummaries(value); return *this;}

    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline ListDatastoresResult& WithDatastoreSummaries(Aws::Vector<DatastoreSummary>&& value) { SetDatastoreSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline ListDatastoresResult& AddDatastoreSummaries(const DatastoreSummary& value) { m_datastoreSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline ListDatastoresResult& AddDatastoreSummaries(DatastoreSummary&& value) { m_datastoreSummaries.push_back(std::move(value)); return *this; }


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
    inline ListDatastoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatastoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline ListDatastoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatastoreSummary> m_datastoreSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
