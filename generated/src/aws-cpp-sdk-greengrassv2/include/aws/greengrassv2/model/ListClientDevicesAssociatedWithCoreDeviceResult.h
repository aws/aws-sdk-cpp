/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/AssociatedClientDevice.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ListClientDevicesAssociatedWithCoreDeviceResult
  {
  public:
    AWS_GREENGRASSV2_API ListClientDevicesAssociatedWithCoreDeviceResult() = default;
    AWS_GREENGRASSV2_API ListClientDevicesAssociatedWithCoreDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListClientDevicesAssociatedWithCoreDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that describes the client devices that are associated with the core
     * device.</p>
     */
    inline const Aws::Vector<AssociatedClientDevice>& GetAssociatedClientDevices() const { return m_associatedClientDevices; }
    template<typename AssociatedClientDevicesT = Aws::Vector<AssociatedClientDevice>>
    void SetAssociatedClientDevices(AssociatedClientDevicesT&& value) { m_associatedClientDevicesHasBeenSet = true; m_associatedClientDevices = std::forward<AssociatedClientDevicesT>(value); }
    template<typename AssociatedClientDevicesT = Aws::Vector<AssociatedClientDevice>>
    ListClientDevicesAssociatedWithCoreDeviceResult& WithAssociatedClientDevices(AssociatedClientDevicesT&& value) { SetAssociatedClientDevices(std::forward<AssociatedClientDevicesT>(value)); return *this;}
    template<typename AssociatedClientDevicesT = AssociatedClientDevice>
    ListClientDevicesAssociatedWithCoreDeviceResult& AddAssociatedClientDevices(AssociatedClientDevicesT&& value) { m_associatedClientDevicesHasBeenSet = true; m_associatedClientDevices.emplace_back(std::forward<AssociatedClientDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClientDevicesAssociatedWithCoreDeviceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClientDevicesAssociatedWithCoreDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedClientDevice> m_associatedClientDevices;
    bool m_associatedClientDevicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
