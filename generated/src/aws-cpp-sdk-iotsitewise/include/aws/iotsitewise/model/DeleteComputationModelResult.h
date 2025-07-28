/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputationModelStatus.h>
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
  class DeleteComputationModelResult
  {
  public:
    AWS_IOTSITEWISE_API DeleteComputationModelResult() = default;
    AWS_IOTSITEWISE_API DeleteComputationModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeleteComputationModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the computation model. It contains a state (DELETING after
     * successfully calling this operation) and any error messages.</p>
     */
    inline const ComputationModelStatus& GetComputationModelStatus() const { return m_computationModelStatus; }
    template<typename ComputationModelStatusT = ComputationModelStatus>
    void SetComputationModelStatus(ComputationModelStatusT&& value) { m_computationModelStatusHasBeenSet = true; m_computationModelStatus = std::forward<ComputationModelStatusT>(value); }
    template<typename ComputationModelStatusT = ComputationModelStatus>
    DeleteComputationModelResult& WithComputationModelStatus(ComputationModelStatusT&& value) { SetComputationModelStatus(std::forward<ComputationModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteComputationModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ComputationModelStatus m_computationModelStatus;
    bool m_computationModelStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
