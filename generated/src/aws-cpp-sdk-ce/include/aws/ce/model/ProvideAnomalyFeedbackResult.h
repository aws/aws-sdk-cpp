/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{
  class ProvideAnomalyFeedbackResult
  {
  public:
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackResult() = default;
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline const Aws::String& GetAnomalyId() const { return m_anomalyId; }
    template<typename AnomalyIdT = Aws::String>
    void SetAnomalyId(AnomalyIdT&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::forward<AnomalyIdT>(value); }
    template<typename AnomalyIdT = Aws::String>
    ProvideAnomalyFeedbackResult& WithAnomalyId(AnomalyIdT&& value) { SetAnomalyId(std::forward<AnomalyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ProvideAnomalyFeedbackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
