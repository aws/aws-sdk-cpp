/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledControlDetails.h>
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
  class GetEnabledControlResult
  {
  public:
    AWS_CONTROLTOWER_API GetEnabledControlResult() = default;
    AWS_CONTROLTOWER_API GetEnabledControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetEnabledControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the enabled control.</p>
     */
    inline const EnabledControlDetails& GetEnabledControlDetails() const { return m_enabledControlDetails; }
    template<typename EnabledControlDetailsT = EnabledControlDetails>
    void SetEnabledControlDetails(EnabledControlDetailsT&& value) { m_enabledControlDetailsHasBeenSet = true; m_enabledControlDetails = std::forward<EnabledControlDetailsT>(value); }
    template<typename EnabledControlDetailsT = EnabledControlDetails>
    GetEnabledControlResult& WithEnabledControlDetails(EnabledControlDetailsT&& value) { SetEnabledControlDetails(std::forward<EnabledControlDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEnabledControlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnabledControlDetails m_enabledControlDetails;
    bool m_enabledControlDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
