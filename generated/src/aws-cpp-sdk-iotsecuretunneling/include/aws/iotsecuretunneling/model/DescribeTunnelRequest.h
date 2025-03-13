/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   */
  class DescribeTunnelRequest : public IoTSecureTunnelingRequest
  {
  public:
    AWS_IOTSECURETUNNELING_API DescribeTunnelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTunnel"; }

    AWS_IOTSECURETUNNELING_API Aws::String SerializePayload() const override;

    AWS_IOTSECURETUNNELING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The tunnel to describe.</p>
     */
    inline const Aws::String& GetTunnelId() const { return m_tunnelId; }
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }
    template<typename TunnelIdT = Aws::String>
    void SetTunnelId(TunnelIdT&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::forward<TunnelIdT>(value); }
    template<typename TunnelIdT = Aws::String>
    DescribeTunnelRequest& WithTunnelId(TunnelIdT&& value) { SetTunnelId(std::forward<TunnelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
