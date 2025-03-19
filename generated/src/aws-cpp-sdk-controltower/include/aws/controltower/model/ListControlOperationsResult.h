/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/ControlOperationSummary.h>
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
namespace ControlTower
{
namespace Model
{
  class ListControlOperationsResult
  {
  public:
    AWS_CONTROLTOWER_API ListControlOperationsResult() = default;
    AWS_CONTROLTOWER_API ListControlOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListControlOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of output from control operations. </p>
     */
    inline const Aws::Vector<ControlOperationSummary>& GetControlOperations() const { return m_controlOperations; }
    template<typename ControlOperationsT = Aws::Vector<ControlOperationSummary>>
    void SetControlOperations(ControlOperationsT&& value) { m_controlOperationsHasBeenSet = true; m_controlOperations = std::forward<ControlOperationsT>(value); }
    template<typename ControlOperationsT = Aws::Vector<ControlOperationSummary>>
    ListControlOperationsResult& WithControlOperations(ControlOperationsT&& value) { SetControlOperations(std::forward<ControlOperationsT>(value)); return *this;}
    template<typename ControlOperationsT = ControlOperationSummary>
    ListControlOperationsResult& AddControlOperations(ControlOperationsT&& value) { m_controlOperationsHasBeenSet = true; m_controlOperations.emplace_back(std::forward<ControlOperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListControlOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListControlOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ControlOperationSummary> m_controlOperations;
    bool m_controlOperationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
