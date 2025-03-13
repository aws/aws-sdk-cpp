/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstancePortState.h>
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
namespace Lightsail
{
namespace Model
{
  class GetInstancePortStatesResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstancePortStatesResult() = default;
    AWS_LIGHTSAIL_API GetInstancePortStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstancePortStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the firewall port states for the specified
     * instance.</p>
     */
    inline const Aws::Vector<InstancePortState>& GetPortStates() const { return m_portStates; }
    template<typename PortStatesT = Aws::Vector<InstancePortState>>
    void SetPortStates(PortStatesT&& value) { m_portStatesHasBeenSet = true; m_portStates = std::forward<PortStatesT>(value); }
    template<typename PortStatesT = Aws::Vector<InstancePortState>>
    GetInstancePortStatesResult& WithPortStates(PortStatesT&& value) { SetPortStates(std::forward<PortStatesT>(value)); return *this;}
    template<typename PortStatesT = InstancePortState>
    GetInstancePortStatesResult& AddPortStates(PortStatesT&& value) { m_portStatesHasBeenSet = true; m_portStates.emplace_back(std::forward<PortStatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstancePortStatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstancePortState> m_portStates;
    bool m_portStatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
