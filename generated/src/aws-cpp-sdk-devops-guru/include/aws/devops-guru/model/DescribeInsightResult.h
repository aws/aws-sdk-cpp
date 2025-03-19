/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ProactiveInsight.h>
#include <aws/devops-guru/model/ReactiveInsight.h>
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
  class DescribeInsightResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeInsightResult() = default;
    AWS_DEVOPSGURU_API DescribeInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A <code>ProactiveInsight</code> object that represents the requested
     * insight. </p>
     */
    inline const ProactiveInsight& GetProactiveInsight() const { return m_proactiveInsight; }
    template<typename ProactiveInsightT = ProactiveInsight>
    void SetProactiveInsight(ProactiveInsightT&& value) { m_proactiveInsightHasBeenSet = true; m_proactiveInsight = std::forward<ProactiveInsightT>(value); }
    template<typename ProactiveInsightT = ProactiveInsight>
    DescribeInsightResult& WithProactiveInsight(ProactiveInsightT&& value) { SetProactiveInsight(std::forward<ProactiveInsightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ReactiveInsight</code> object that represents the requested insight.
     * </p>
     */
    inline const ReactiveInsight& GetReactiveInsight() const { return m_reactiveInsight; }
    template<typename ReactiveInsightT = ReactiveInsight>
    void SetReactiveInsight(ReactiveInsightT&& value) { m_reactiveInsightHasBeenSet = true; m_reactiveInsight = std::forward<ReactiveInsightT>(value); }
    template<typename ReactiveInsightT = ReactiveInsight>
    DescribeInsightResult& WithReactiveInsight(ReactiveInsightT&& value) { SetReactiveInsight(std::forward<ReactiveInsightT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInsightResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProactiveInsight m_proactiveInsight;
    bool m_proactiveInsightHasBeenSet = false;

    ReactiveInsight m_reactiveInsight;
    bool m_reactiveInsightHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
