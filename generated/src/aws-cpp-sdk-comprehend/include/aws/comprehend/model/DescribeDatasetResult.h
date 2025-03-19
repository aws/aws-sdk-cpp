/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DatasetProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_COMPREHEND_API DescribeDatasetResult() = default;
    AWS_COMPREHEND_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dataset properties.</p>
     */
    inline const DatasetProperties& GetDatasetProperties() const { return m_datasetProperties; }
    template<typename DatasetPropertiesT = DatasetProperties>
    void SetDatasetProperties(DatasetPropertiesT&& value) { m_datasetPropertiesHasBeenSet = true; m_datasetProperties = std::forward<DatasetPropertiesT>(value); }
    template<typename DatasetPropertiesT = DatasetProperties>
    DescribeDatasetResult& WithDatasetProperties(DatasetPropertiesT&& value) { SetDatasetProperties(std::forward<DatasetPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatasetProperties m_datasetProperties;
    bool m_datasetPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
