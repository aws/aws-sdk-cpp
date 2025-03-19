/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/NetworkProfile.h>
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
  class ListNetworkProfilesResult
  {
  public:
    AWS_DEVICEFARM_API ListNetworkProfilesResult() = default;
    AWS_DEVICEFARM_API ListNetworkProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListNetworkProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the available network profiles.</p>
     */
    inline const Aws::Vector<NetworkProfile>& GetNetworkProfiles() const { return m_networkProfiles; }
    template<typename NetworkProfilesT = Aws::Vector<NetworkProfile>>
    void SetNetworkProfiles(NetworkProfilesT&& value) { m_networkProfilesHasBeenSet = true; m_networkProfiles = std::forward<NetworkProfilesT>(value); }
    template<typename NetworkProfilesT = Aws::Vector<NetworkProfile>>
    ListNetworkProfilesResult& WithNetworkProfiles(NetworkProfilesT&& value) { SetNetworkProfiles(std::forward<NetworkProfilesT>(value)); return *this;}
    template<typename NetworkProfilesT = NetworkProfile>
    ListNetworkProfilesResult& AddNetworkProfiles(NetworkProfilesT&& value) { m_networkProfilesHasBeenSet = true; m_networkProfiles.emplace_back(std::forward<NetworkProfilesT>(value)); return *this; }
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
    ListNetworkProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNetworkProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkProfile> m_networkProfiles;
    bool m_networkProfilesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
