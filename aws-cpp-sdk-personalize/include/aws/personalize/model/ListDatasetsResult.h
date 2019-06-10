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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DatasetSummary.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API ListDatasetsResult
  {
  public:
    ListDatasetsResult();
    ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline const Aws::Vector<DatasetSummary>& GetDatasets() const{ return m_datasets; }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline void SetDatasets(const Aws::Vector<DatasetSummary>& value) { m_datasets = value; }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline void SetDatasets(Aws::Vector<DatasetSummary>&& value) { m_datasets = std::move(value); }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& WithDatasets(const Aws::Vector<DatasetSummary>& value) { SetDatasets(value); return *this;}

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& WithDatasets(Aws::Vector<DatasetSummary>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& AddDatasets(const DatasetSummary& value) { m_datasets.push_back(value); return *this; }

    /**
     * <p>An array of <code>Dataset</code> objects. Each object provides metadata
     * information.</p>
     */
    inline ListDatasetsResult& AddDatasets(DatasetSummary&& value) { m_datasets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of datasets (if they exist).</p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetSummary> m_datasets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
