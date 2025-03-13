/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/BaselineOperation.h>
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
namespace ControlTower
{
namespace Model
{
  class GetBaselineOperationResult
  {
  public:
    AWS_CONTROLTOWER_API GetBaselineOperationResult() = default;
    AWS_CONTROLTOWER_API GetBaselineOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetBaselineOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>baselineOperation</code> object that shows information about the
     * specified operation ID.</p>
     */
    inline const BaselineOperation& GetBaselineOperation() const { return m_baselineOperation; }
    template<typename BaselineOperationT = BaselineOperation>
    void SetBaselineOperation(BaselineOperationT&& value) { m_baselineOperationHasBeenSet = true; m_baselineOperation = std::forward<BaselineOperationT>(value); }
    template<typename BaselineOperationT = BaselineOperation>
    GetBaselineOperationResult& WithBaselineOperation(BaselineOperationT&& value) { SetBaselineOperation(std::forward<BaselineOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBaselineOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BaselineOperation m_baselineOperation;
    bool m_baselineOperationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
