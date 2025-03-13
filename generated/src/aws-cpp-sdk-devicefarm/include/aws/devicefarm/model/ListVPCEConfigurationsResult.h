/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/VPCEConfiguration.h>
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
  class ListVPCEConfigurationsResult
  {
  public:
    AWS_DEVICEFARM_API ListVPCEConfigurationsResult() = default;
    AWS_DEVICEFARM_API ListVPCEConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListVPCEConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>VPCEConfiguration</code> objects that contain information
     * about your VPC endpoint configuration.</p>
     */
    inline const Aws::Vector<VPCEConfiguration>& GetVpceConfigurations() const { return m_vpceConfigurations; }
    template<typename VpceConfigurationsT = Aws::Vector<VPCEConfiguration>>
    void SetVpceConfigurations(VpceConfigurationsT&& value) { m_vpceConfigurationsHasBeenSet = true; m_vpceConfigurations = std::forward<VpceConfigurationsT>(value); }
    template<typename VpceConfigurationsT = Aws::Vector<VPCEConfiguration>>
    ListVPCEConfigurationsResult& WithVpceConfigurations(VpceConfigurationsT&& value) { SetVpceConfigurations(std::forward<VpceConfigurationsT>(value)); return *this;}
    template<typename VpceConfigurationsT = VPCEConfiguration>
    ListVPCEConfigurationsResult& AddVpceConfigurations(VpceConfigurationsT&& value) { m_vpceConfigurationsHasBeenSet = true; m_vpceConfigurations.emplace_back(std::forward<VpceConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVPCEConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVPCEConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VPCEConfiguration> m_vpceConfigurations;
    bool m_vpceConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
