/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DatasetProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListDatasetsResult
  {
  public:
    AWS_COMPREHEND_API ListDatasetsResult();
    AWS_COMPREHEND_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The dataset properties list.</p>
     */
    inline const Aws::Vector<DatasetProperties>& GetDatasetPropertiesList() const{ return m_datasetPropertiesList; }

    /**
     * <p>The dataset properties list.</p>
     */
    inline void SetDatasetPropertiesList(const Aws::Vector<DatasetProperties>& value) { m_datasetPropertiesList = value; }

    /**
     * <p>The dataset properties list.</p>
     */
    inline void SetDatasetPropertiesList(Aws::Vector<DatasetProperties>&& value) { m_datasetPropertiesList = std::move(value); }

    /**
     * <p>The dataset properties list.</p>
     */
    inline ListDatasetsResult& WithDatasetPropertiesList(const Aws::Vector<DatasetProperties>& value) { SetDatasetPropertiesList(value); return *this;}

    /**
     * <p>The dataset properties list.</p>
     */
    inline ListDatasetsResult& WithDatasetPropertiesList(Aws::Vector<DatasetProperties>&& value) { SetDatasetPropertiesList(std::move(value)); return *this;}

    /**
     * <p>The dataset properties list.</p>
     */
    inline ListDatasetsResult& AddDatasetPropertiesList(const DatasetProperties& value) { m_datasetPropertiesList.push_back(value); return *this; }

    /**
     * <p>The dataset properties list.</p>
     */
    inline ListDatasetsResult& AddDatasetPropertiesList(DatasetProperties&& value) { m_datasetPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDatasetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDatasetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDatasetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DatasetProperties> m_datasetPropertiesList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
