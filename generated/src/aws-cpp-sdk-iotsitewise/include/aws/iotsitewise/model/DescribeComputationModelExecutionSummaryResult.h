/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ResolveTo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class DescribeComputationModelExecutionSummaryResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeComputationModelExecutionSummaryResult() = default;
    AWS_IOTSITEWISE_API DescribeComputationModelExecutionSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeComputationModelExecutionSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the computation model.</p>
     */
    inline const Aws::String& GetComputationModelId() const { return m_computationModelId; }
    template<typename ComputationModelIdT = Aws::String>
    void SetComputationModelId(ComputationModelIdT&& value) { m_computationModelIdHasBeenSet = true; m_computationModelId = std::forward<ComputationModelIdT>(value); }
    template<typename ComputationModelIdT = Aws::String>
    DescribeComputationModelExecutionSummaryResult& WithComputationModelId(ComputationModelIdT&& value) { SetComputationModelId(std::forward<ComputationModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed resource this execution summary resolves to.</p>
     */
    inline const ResolveTo& GetResolveTo() const { return m_resolveTo; }
    template<typename ResolveToT = ResolveTo>
    void SetResolveTo(ResolveToT&& value) { m_resolveToHasBeenSet = true; m_resolveTo = std::forward<ResolveToT>(value); }
    template<typename ResolveToT = ResolveTo>
    DescribeComputationModelExecutionSummaryResult& WithResolveTo(ResolveToT&& value) { SetResolveTo(std::forward<ResolveToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the execution summary of the computation model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetComputationModelExecutionSummary() const { return m_computationModelExecutionSummary; }
    template<typename ComputationModelExecutionSummaryT = Aws::Map<Aws::String, Aws::String>>
    void SetComputationModelExecutionSummary(ComputationModelExecutionSummaryT&& value) { m_computationModelExecutionSummaryHasBeenSet = true; m_computationModelExecutionSummary = std::forward<ComputationModelExecutionSummaryT>(value); }
    template<typename ComputationModelExecutionSummaryT = Aws::Map<Aws::String, Aws::String>>
    DescribeComputationModelExecutionSummaryResult& WithComputationModelExecutionSummary(ComputationModelExecutionSummaryT&& value) { SetComputationModelExecutionSummary(std::forward<ComputationModelExecutionSummaryT>(value)); return *this;}
    template<typename ComputationModelExecutionSummaryKeyT = Aws::String, typename ComputationModelExecutionSummaryValueT = Aws::String>
    DescribeComputationModelExecutionSummaryResult& AddComputationModelExecutionSummary(ComputationModelExecutionSummaryKeyT&& key, ComputationModelExecutionSummaryValueT&& value) {
      m_computationModelExecutionSummaryHasBeenSet = true; m_computationModelExecutionSummary.emplace(std::forward<ComputationModelExecutionSummaryKeyT>(key), std::forward<ComputationModelExecutionSummaryValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComputationModelExecutionSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationModelId;
    bool m_computationModelIdHasBeenSet = false;

    ResolveTo m_resolveTo;
    bool m_resolveToHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_computationModelExecutionSummary;
    bool m_computationModelExecutionSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
