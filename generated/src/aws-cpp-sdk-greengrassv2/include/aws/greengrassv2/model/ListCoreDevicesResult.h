/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/CoreDevice.h>
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
  class ListCoreDevicesResult
  {
  public:
    AWS_GREENGRASSV2_API ListCoreDevicesResult() = default;
    AWS_GREENGRASSV2_API ListCoreDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListCoreDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each core device.</p>
     */
    inline const Aws::Vector<CoreDevice>& GetCoreDevices() const { return m_coreDevices; }
    template<typename CoreDevicesT = Aws::Vector<CoreDevice>>
    void SetCoreDevices(CoreDevicesT&& value) { m_coreDevicesHasBeenSet = true; m_coreDevices = std::forward<CoreDevicesT>(value); }
    template<typename CoreDevicesT = Aws::Vector<CoreDevice>>
    ListCoreDevicesResult& WithCoreDevices(CoreDevicesT&& value) { SetCoreDevices(std::forward<CoreDevicesT>(value)); return *this;}
    template<typename CoreDevicesT = CoreDevice>
    ListCoreDevicesResult& AddCoreDevices(CoreDevicesT&& value) { m_coreDevicesHasBeenSet = true; m_coreDevices.emplace_back(std::forward<CoreDevicesT>(value)); return *this; }
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
    ListCoreDevicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCoreDevicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CoreDevice> m_coreDevices;
    bool m_coreDevicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
