/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ProactiveAnomaly.h>
#include <aws/devops-guru/model/ReactiveAnomaly.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class DescribeAnomalyResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeAnomalyResult() = default;
    AWS_DEVOPSGURU_API DescribeAnomalyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeAnomalyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A <code>ProactiveAnomaly</code> object that represents the requested
     * anomaly. </p>
     */
    inline const ProactiveAnomaly& GetProactiveAnomaly() const { return m_proactiveAnomaly; }
    template<typename ProactiveAnomalyT = ProactiveAnomaly>
    void SetProactiveAnomaly(ProactiveAnomalyT&& value) { m_proactiveAnomalyHasBeenSet = true; m_proactiveAnomaly = std::forward<ProactiveAnomalyT>(value); }
    template<typename ProactiveAnomalyT = ProactiveAnomaly>
    DescribeAnomalyResult& WithProactiveAnomaly(ProactiveAnomalyT&& value) { SetProactiveAnomaly(std::forward<ProactiveAnomalyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ReactiveAnomaly</code> object that represents the requested anomaly.
     * </p>
     */
    inline const ReactiveAnomaly& GetReactiveAnomaly() const { return m_reactiveAnomaly; }
    template<typename ReactiveAnomalyT = ReactiveAnomaly>
    void SetReactiveAnomaly(ReactiveAnomalyT&& value) { m_reactiveAnomalyHasBeenSet = true; m_reactiveAnomaly = std::forward<ReactiveAnomalyT>(value); }
    template<typename ReactiveAnomalyT = ReactiveAnomaly>
    DescribeAnomalyResult& WithReactiveAnomaly(ReactiveAnomalyT&& value) { SetReactiveAnomaly(std::forward<ReactiveAnomalyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAnomalyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProactiveAnomaly m_proactiveAnomaly;
    bool m_proactiveAnomalyHasBeenSet = false;

    ReactiveAnomaly m_reactiveAnomaly;
    bool m_reactiveAnomalyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
