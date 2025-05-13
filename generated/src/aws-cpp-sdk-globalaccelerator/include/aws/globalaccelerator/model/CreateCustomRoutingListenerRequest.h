/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/PortRange.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class CreateCustomRoutingListenerRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingListenerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomRoutingListener"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator for a custom routing
     * listener.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const { return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    template<typename AcceleratorArnT = Aws::String>
    void SetAcceleratorArn(AcceleratorArnT&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::forward<AcceleratorArnT>(value); }
    template<typename AcceleratorArnT = Aws::String>
    CreateCustomRoutingListenerRequest& WithAcceleratorArn(AcceleratorArnT&& value) { SetAcceleratorArn(std::forward<AcceleratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range to support for connections from clients to your
     * accelerator.</p> <p>Separately, you set port ranges for endpoints. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-custom-routing-endpoints.html">About
     * endpoints for custom routing accelerators</a>.</p>
     */
    inline const Aws::Vector<PortRange>& GetPortRanges() const { return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    CreateCustomRoutingListenerRequest& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = PortRange>
    CreateCustomRoutingListenerRequest& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateCustomRoutingListenerRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::Vector<PortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
