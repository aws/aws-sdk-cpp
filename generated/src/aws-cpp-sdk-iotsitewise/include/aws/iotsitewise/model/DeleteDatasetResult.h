/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DeleteDatasetResult
  {
  public:
    AWS_IOTSITEWISE_API DeleteDatasetResult() = default;
    AWS_IOTSITEWISE_API DeleteDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeleteDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the dataset. This contains the state and any error messages.
     * State is <code>DELETING</code> after a successfull call to this API, and any
     * associated error message.</p>
     */
    inline const DatasetStatus& GetDatasetStatus() const { return m_datasetStatus; }
    template<typename DatasetStatusT = DatasetStatus>
    void SetDatasetStatus(DatasetStatusT&& value) { m_datasetStatusHasBeenSet = true; m_datasetStatus = std::forward<DatasetStatusT>(value); }
    template<typename DatasetStatusT = DatasetStatus>
    DeleteDatasetResult& WithDatasetStatus(DatasetStatusT&& value) { SetDatasetStatus(std::forward<DatasetStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DatasetStatus m_datasetStatus;
    bool m_datasetStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
