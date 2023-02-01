/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace-data/model/Dataset.h>
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
namespace FinSpaceData
{
namespace Model
{
  /**
   * Response for the ListDatasets operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ListDatasetsResponse">AWS
   * API Reference</a></p>
   */
  class ListDatasetsResult
  {
  public:
    AWS_FINSPACEDATA_API ListDatasetsResult();
    AWS_FINSPACEDATA_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of Datasets.</p>
     */
    inline const Aws::Vector<Dataset>& GetDatasets() const{ return m_datasets; }

    /**
     * <p>List of Datasets.</p>
     */
    inline void SetDatasets(const Aws::Vector<Dataset>& value) { m_datasets = value; }

    /**
     * <p>List of Datasets.</p>
     */
    inline void SetDatasets(Aws::Vector<Dataset>&& value) { m_datasets = std::move(value); }

    /**
     * <p>List of Datasets.</p>
     */
    inline ListDatasetsResult& WithDatasets(const Aws::Vector<Dataset>& value) { SetDatasets(value); return *this;}

    /**
     * <p>List of Datasets.</p>
     */
    inline ListDatasetsResult& WithDatasets(Aws::Vector<Dataset>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p>List of Datasets.</p>
     */
    inline ListDatasetsResult& AddDatasets(const Dataset& value) { m_datasets.push_back(value); return *this; }

    /**
     * <p>List of Datasets.</p>
     */
    inline ListDatasetsResult& AddDatasets(Dataset&& value) { m_datasets.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Dataset> m_datasets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
