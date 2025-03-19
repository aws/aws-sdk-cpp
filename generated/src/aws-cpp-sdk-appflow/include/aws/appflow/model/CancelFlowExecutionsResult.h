/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Appflow
{
namespace Model
{
  class CancelFlowExecutionsResult
  {
  public:
    AWS_APPFLOW_API CancelFlowExecutionsResult() = default;
    AWS_APPFLOW_API CancelFlowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API CancelFlowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IDs of runs that Amazon AppFlow couldn't cancel. These runs might be
     * ineligible for canceling because they haven't started yet or have already
     * completed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidExecutions() const { return m_invalidExecutions; }
    template<typename InvalidExecutionsT = Aws::Vector<Aws::String>>
    void SetInvalidExecutions(InvalidExecutionsT&& value) { m_invalidExecutionsHasBeenSet = true; m_invalidExecutions = std::forward<InvalidExecutionsT>(value); }
    template<typename InvalidExecutionsT = Aws::Vector<Aws::String>>
    CancelFlowExecutionsResult& WithInvalidExecutions(InvalidExecutionsT&& value) { SetInvalidExecutions(std::forward<InvalidExecutionsT>(value)); return *this;}
    template<typename InvalidExecutionsT = Aws::String>
    CancelFlowExecutionsResult& AddInvalidExecutions(InvalidExecutionsT&& value) { m_invalidExecutionsHasBeenSet = true; m_invalidExecutions.emplace_back(std::forward<InvalidExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelFlowExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_invalidExecutions;
    bool m_invalidExecutionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
