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
    AWS_COMPREHEND_API ListDatasetsResult() = default;
    AWS_COMPREHEND_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dataset properties list.</p>
     */
    inline const Aws::Vector<DatasetProperties>& GetDatasetPropertiesList() const { return m_datasetPropertiesList; }
    template<typename DatasetPropertiesListT = Aws::Vector<DatasetProperties>>
    void SetDatasetPropertiesList(DatasetPropertiesListT&& value) { m_datasetPropertiesListHasBeenSet = true; m_datasetPropertiesList = std::forward<DatasetPropertiesListT>(value); }
    template<typename DatasetPropertiesListT = Aws::Vector<DatasetProperties>>
    ListDatasetsResult& WithDatasetPropertiesList(DatasetPropertiesListT&& value) { SetDatasetPropertiesList(std::forward<DatasetPropertiesListT>(value)); return *this;}
    template<typename DatasetPropertiesListT = DatasetProperties>
    ListDatasetsResult& AddDatasetPropertiesList(DatasetPropertiesListT&& value) { m_datasetPropertiesListHasBeenSet = true; m_datasetPropertiesList.emplace_back(std::forward<DatasetPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetProperties> m_datasetPropertiesList;
    bool m_datasetPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
