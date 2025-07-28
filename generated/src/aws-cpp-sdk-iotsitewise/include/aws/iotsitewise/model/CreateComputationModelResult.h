/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ComputationModelStatus.h>
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
  class CreateComputationModelResult
  {
  public:
    AWS_IOTSITEWISE_API CreateComputationModelResult() = default;
    AWS_IOTSITEWISE_API CreateComputationModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateComputationModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelId() const { return m_computationModelId; }
    template<typename ComputationModelIdT = Aws::String>
    void SetComputationModelId(ComputationModelIdT&& value) { m_computationModelIdHasBeenSet = true; m_computationModelId = std::forward<ComputationModelIdT>(value); }
    template<typename ComputationModelIdT = Aws::String>
    CreateComputationModelResult& WithComputationModelId(ComputationModelIdT&& value) { SetComputationModelId(std::forward<ComputationModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the computation model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:computation-model/${ComputationModelId}</code>
     * </p>
     */
    inline const Aws::String& GetComputationModelArn() const { return m_computationModelArn; }
    template<typename ComputationModelArnT = Aws::String>
    void SetComputationModelArn(ComputationModelArnT&& value) { m_computationModelArnHasBeenSet = true; m_computationModelArn = std::forward<ComputationModelArnT>(value); }
    template<typename ComputationModelArnT = Aws::String>
    CreateComputationModelResult& WithComputationModelArn(ComputationModelArnT&& value) { SetComputationModelArn(std::forward<ComputationModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the computation model, containing a state (CREATING after
     * successfully calling this operation) and any error messages.</p>
     */
    inline const ComputationModelStatus& GetComputationModelStatus() const { return m_computationModelStatus; }
    template<typename ComputationModelStatusT = ComputationModelStatus>
    void SetComputationModelStatus(ComputationModelStatusT&& value) { m_computationModelStatusHasBeenSet = true; m_computationModelStatus = std::forward<ComputationModelStatusT>(value); }
    template<typename ComputationModelStatusT = ComputationModelStatus>
    CreateComputationModelResult& WithComputationModelStatus(ComputationModelStatusT&& value) { SetComputationModelStatus(std::forward<ComputationModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateComputationModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationModelId;
    bool m_computationModelIdHasBeenSet = false;

    Aws::String m_computationModelArn;
    bool m_computationModelArnHasBeenSet = false;

    ComputationModelStatus m_computationModelStatus;
    bool m_computationModelStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
