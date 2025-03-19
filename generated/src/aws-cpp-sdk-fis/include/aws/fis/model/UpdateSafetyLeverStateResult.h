/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/SafetyLever.h>
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
namespace FIS
{
namespace Model
{
  class UpdateSafetyLeverStateResult
  {
  public:
    AWS_FIS_API UpdateSafetyLeverStateResult() = default;
    AWS_FIS_API UpdateSafetyLeverStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API UpdateSafetyLeverStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the safety lever. </p>
     */
    inline const SafetyLever& GetSafetyLever() const { return m_safetyLever; }
    template<typename SafetyLeverT = SafetyLever>
    void SetSafetyLever(SafetyLeverT&& value) { m_safetyLeverHasBeenSet = true; m_safetyLever = std::forward<SafetyLeverT>(value); }
    template<typename SafetyLeverT = SafetyLever>
    UpdateSafetyLeverStateResult& WithSafetyLever(SafetyLeverT&& value) { SetSafetyLever(std::forward<SafetyLeverT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSafetyLeverStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SafetyLever m_safetyLever;
    bool m_safetyLeverHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
