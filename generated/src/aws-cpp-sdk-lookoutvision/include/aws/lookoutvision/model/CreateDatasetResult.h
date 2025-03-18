/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DatasetMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class CreateDatasetResult
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateDatasetResult() = default;
    AWS_LOOKOUTFORVISION_API CreateDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API CreateDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the dataset.</p>
     */
    inline const DatasetMetadata& GetDatasetMetadata() const { return m_datasetMetadata; }
    template<typename DatasetMetadataT = DatasetMetadata>
    void SetDatasetMetadata(DatasetMetadataT&& value) { m_datasetMetadataHasBeenSet = true; m_datasetMetadata = std::forward<DatasetMetadataT>(value); }
    template<typename DatasetMetadataT = DatasetMetadata>
    CreateDatasetResult& WithDatasetMetadata(DatasetMetadataT&& value) { SetDatasetMetadata(std::forward<DatasetMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatasetMetadata m_datasetMetadata;
    bool m_datasetMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
