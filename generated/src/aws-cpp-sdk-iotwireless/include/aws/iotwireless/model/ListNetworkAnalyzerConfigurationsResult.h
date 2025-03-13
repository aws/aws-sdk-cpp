/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/NetworkAnalyzerConfigurations.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListNetworkAnalyzerConfigurationsResult
  {
  public:
    AWS_IOTWIRELESS_API ListNetworkAnalyzerConfigurationsResult() = default;
    AWS_IOTWIRELESS_API ListNetworkAnalyzerConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListNetworkAnalyzerConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNetworkAnalyzerConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of network analyzer configurations.</p>
     */
    inline const Aws::Vector<NetworkAnalyzerConfigurations>& GetNetworkAnalyzerConfigurationList() const { return m_networkAnalyzerConfigurationList; }
    template<typename NetworkAnalyzerConfigurationListT = Aws::Vector<NetworkAnalyzerConfigurations>>
    void SetNetworkAnalyzerConfigurationList(NetworkAnalyzerConfigurationListT&& value) { m_networkAnalyzerConfigurationListHasBeenSet = true; m_networkAnalyzerConfigurationList = std::forward<NetworkAnalyzerConfigurationListT>(value); }
    template<typename NetworkAnalyzerConfigurationListT = Aws::Vector<NetworkAnalyzerConfigurations>>
    ListNetworkAnalyzerConfigurationsResult& WithNetworkAnalyzerConfigurationList(NetworkAnalyzerConfigurationListT&& value) { SetNetworkAnalyzerConfigurationList(std::forward<NetworkAnalyzerConfigurationListT>(value)); return *this;}
    template<typename NetworkAnalyzerConfigurationListT = NetworkAnalyzerConfigurations>
    ListNetworkAnalyzerConfigurationsResult& AddNetworkAnalyzerConfigurationList(NetworkAnalyzerConfigurationListT&& value) { m_networkAnalyzerConfigurationListHasBeenSet = true; m_networkAnalyzerConfigurationList.emplace_back(std::forward<NetworkAnalyzerConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNetworkAnalyzerConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NetworkAnalyzerConfigurations> m_networkAnalyzerConfigurationList;
    bool m_networkAnalyzerConfigurationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
