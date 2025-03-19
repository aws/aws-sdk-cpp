/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/NetworkProfile.h>
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
namespace DeviceFarm
{
namespace Model
{
  class CreateNetworkProfileResult
  {
  public:
    AWS_DEVICEFARM_API CreateNetworkProfileResult() = default;
    AWS_DEVICEFARM_API CreateNetworkProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API CreateNetworkProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The network profile that is returned by the create network profile
     * request.</p>
     */
    inline const NetworkProfile& GetNetworkProfile() const { return m_networkProfile; }
    template<typename NetworkProfileT = NetworkProfile>
    void SetNetworkProfile(NetworkProfileT&& value) { m_networkProfileHasBeenSet = true; m_networkProfile = std::forward<NetworkProfileT>(value); }
    template<typename NetworkProfileT = NetworkProfile>
    CreateNetworkProfileResult& WithNetworkProfile(NetworkProfileT&& value) { SetNetworkProfile(std::forward<NetworkProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateNetworkProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NetworkProfile m_networkProfile;
    bool m_networkProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
