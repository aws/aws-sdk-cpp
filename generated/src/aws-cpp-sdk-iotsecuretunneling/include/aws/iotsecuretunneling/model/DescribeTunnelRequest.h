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
    AWS_IOTSECURETUNNELING_API DescribeTunnelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTunnel"; }

    AWS_IOTSECURETUNNELING_API Aws::String SerializePayload() const override;

    AWS_IOTSECURETUNNELING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The tunnel to describe.</p>
     */
    inline const Aws::String& GetTunnelId() const{ return m_tunnelId; }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline void SetTunnelId(const Aws::String& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = value; }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline void SetTunnelId(Aws::String&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::move(value); }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline void SetTunnelId(const char* value) { m_tunnelIdHasBeenSet = true; m_tunnelId.assign(value); }

    /**
     * <p>The tunnel to describe.</p>
     */
    inline DescribeTunnelRequest& WithTunnelId(const Aws::String& value) { SetTunnelId(value); return *this;}

    /**
     * <p>The tunnel to describe.</p>
     */
    inline DescribeTunnelRequest& WithTunnelId(Aws::String&& value) { SetTunnelId(std::move(value)); return *this;}

    /**
     * <p>The tunnel to describe.</p>
     */
    inline DescribeTunnelRequest& WithTunnelId(const char* value) { SetTunnelId(value); return *this;}

  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
