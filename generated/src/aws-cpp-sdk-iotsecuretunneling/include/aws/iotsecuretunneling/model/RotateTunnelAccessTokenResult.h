/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
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
namespace IoTSecureTunneling
{
namespace Model
{
  class RotateTunnelAccessTokenResult
  {
  public:
    AWS_IOTSECURETUNNELING_API RotateTunnelAccessTokenResult() = default;
    AWS_IOTSECURETUNNELING_API RotateTunnelAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSECURETUNNELING_API RotateTunnelAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelArn() const { return m_tunnelArn; }
    template<typename TunnelArnT = Aws::String>
    void SetTunnelArn(TunnelArnT&& value) { m_tunnelArnHasBeenSet = true; m_tunnelArn = std::forward<TunnelArnT>(value); }
    template<typename TunnelArnT = Aws::String>
    RotateTunnelAccessTokenResult& WithTunnelArn(TunnelArnT&& value) { SetTunnelArn(std::forward<TunnelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client access token that the source local proxy uses to connect to IoT
     * Secure Tunneling.</p>
     */
    inline const Aws::String& GetSourceAccessToken() const { return m_sourceAccessToken; }
    template<typename SourceAccessTokenT = Aws::String>
    void SetSourceAccessToken(SourceAccessTokenT&& value) { m_sourceAccessTokenHasBeenSet = true; m_sourceAccessToken = std::forward<SourceAccessTokenT>(value); }
    template<typename SourceAccessTokenT = Aws::String>
    RotateTunnelAccessTokenResult& WithSourceAccessToken(SourceAccessTokenT&& value) { SetSourceAccessToken(std::forward<SourceAccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client access token that the destination local proxy uses to connect to
     * IoT Secure Tunneling.</p>
     */
    inline const Aws::String& GetDestinationAccessToken() const { return m_destinationAccessToken; }
    template<typename DestinationAccessTokenT = Aws::String>
    void SetDestinationAccessToken(DestinationAccessTokenT&& value) { m_destinationAccessTokenHasBeenSet = true; m_destinationAccessToken = std::forward<DestinationAccessTokenT>(value); }
    template<typename DestinationAccessTokenT = Aws::String>
    RotateTunnelAccessTokenResult& WithDestinationAccessToken(DestinationAccessTokenT&& value) { SetDestinationAccessToken(std::forward<DestinationAccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RotateTunnelAccessTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tunnelArn;
    bool m_tunnelArnHasBeenSet = false;

    Aws::String m_sourceAccessToken;
    bool m_sourceAccessTokenHasBeenSet = false;

    Aws::String m_destinationAccessToken;
    bool m_destinationAccessTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
