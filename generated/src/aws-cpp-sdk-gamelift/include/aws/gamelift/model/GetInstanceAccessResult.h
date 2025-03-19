/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/InstanceAccess.h>
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
namespace GameLift
{
namespace Model
{
  class GetInstanceAccessResult
  {
  public:
    AWS_GAMELIFT_API GetInstanceAccessResult() = default;
    AWS_GAMELIFT_API GetInstanceAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API GetInstanceAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The connection information for a fleet instance, including IP address and
     * access credentials.</p>
     */
    inline const InstanceAccess& GetInstanceAccess() const { return m_instanceAccess; }
    template<typename InstanceAccessT = InstanceAccess>
    void SetInstanceAccess(InstanceAccessT&& value) { m_instanceAccessHasBeenSet = true; m_instanceAccess = std::forward<InstanceAccessT>(value); }
    template<typename InstanceAccessT = InstanceAccess>
    GetInstanceAccessResult& WithInstanceAccess(InstanceAccessT&& value) { SetInstanceAccess(std::forward<InstanceAccessT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstanceAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceAccess m_instanceAccess;
    bool m_instanceAccessHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
