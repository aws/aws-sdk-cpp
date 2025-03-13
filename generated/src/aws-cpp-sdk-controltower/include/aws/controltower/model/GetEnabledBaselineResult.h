/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledBaselineDetails.h>
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
  class GetEnabledBaselineResult
  {
  public:
    AWS_CONTROLTOWER_API GetEnabledBaselineResult() = default;
    AWS_CONTROLTOWER_API GetEnabledBaselineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetEnabledBaselineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the <code>EnabledBaseline</code> resource.</p>
     */
    inline const EnabledBaselineDetails& GetEnabledBaselineDetails() const { return m_enabledBaselineDetails; }
    template<typename EnabledBaselineDetailsT = EnabledBaselineDetails>
    void SetEnabledBaselineDetails(EnabledBaselineDetailsT&& value) { m_enabledBaselineDetailsHasBeenSet = true; m_enabledBaselineDetails = std::forward<EnabledBaselineDetailsT>(value); }
    template<typename EnabledBaselineDetailsT = EnabledBaselineDetails>
    GetEnabledBaselineResult& WithEnabledBaselineDetails(EnabledBaselineDetailsT&& value) { SetEnabledBaselineDetails(std::forward<EnabledBaselineDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEnabledBaselineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnabledBaselineDetails m_enabledBaselineDetails;
    bool m_enabledBaselineDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
