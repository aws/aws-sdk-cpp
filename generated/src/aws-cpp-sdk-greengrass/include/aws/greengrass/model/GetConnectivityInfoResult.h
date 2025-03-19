/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ConnectivityInfo.h>
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
namespace Greengrass
{
namespace Model
{
  class GetConnectivityInfoResult
  {
  public:
    AWS_GREENGRASS_API GetConnectivityInfoResult() = default;
    AWS_GREENGRASS_API GetConnectivityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetConnectivityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Connectivity info list.
     */
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const { return m_connectivityInfo; }
    template<typename ConnectivityInfoT = Aws::Vector<ConnectivityInfo>>
    void SetConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::forward<ConnectivityInfoT>(value); }
    template<typename ConnectivityInfoT = Aws::Vector<ConnectivityInfo>>
    GetConnectivityInfoResult& WithConnectivityInfo(ConnectivityInfoT&& value) { SetConnectivityInfo(std::forward<ConnectivityInfoT>(value)); return *this;}
    template<typename ConnectivityInfoT = ConnectivityInfo>
    GetConnectivityInfoResult& AddConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo.emplace_back(std::forward<ConnectivityInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A message about the connectivity info request.
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetConnectivityInfoResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectivityInfoResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectivityInfo> m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
