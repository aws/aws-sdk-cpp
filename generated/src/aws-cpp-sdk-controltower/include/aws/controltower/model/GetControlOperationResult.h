/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/ControlOperation.h>
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
  class GetControlOperationResult
  {
  public:
    AWS_CONTROLTOWER_API GetControlOperationResult() = default;
    AWS_CONTROLTOWER_API GetControlOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetControlOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An operation performed by the control.</p>
     */
    inline const ControlOperation& GetControlOperation() const { return m_controlOperation; }
    template<typename ControlOperationT = ControlOperation>
    void SetControlOperation(ControlOperationT&& value) { m_controlOperationHasBeenSet = true; m_controlOperation = std::forward<ControlOperationT>(value); }
    template<typename ControlOperationT = ControlOperation>
    GetControlOperationResult& WithControlOperation(ControlOperationT&& value) { SetControlOperation(std::forward<ControlOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetControlOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ControlOperation m_controlOperation;
    bool m_controlOperationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
