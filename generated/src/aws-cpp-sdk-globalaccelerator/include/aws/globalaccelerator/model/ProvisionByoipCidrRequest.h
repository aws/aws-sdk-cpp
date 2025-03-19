/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CidrAuthorizationContext.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class ProvisionByoipCidrRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API ProvisionByoipCidrRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionByoipCidr"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this Amazon Web Services Region or another
     * Region.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    ProvisionByoipCidrRequest& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP. </p>
     */
    inline const CidrAuthorizationContext& GetCidrAuthorizationContext() const { return m_cidrAuthorizationContext; }
    inline bool CidrAuthorizationContextHasBeenSet() const { return m_cidrAuthorizationContextHasBeenSet; }
    template<typename CidrAuthorizationContextT = CidrAuthorizationContext>
    void SetCidrAuthorizationContext(CidrAuthorizationContextT&& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = std::forward<CidrAuthorizationContextT>(value); }
    template<typename CidrAuthorizationContextT = CidrAuthorizationContext>
    ProvisionByoipCidrRequest& WithCidrAuthorizationContext(CidrAuthorizationContextT&& value) { SetCidrAuthorizationContext(std::forward<CidrAuthorizationContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    CidrAuthorizationContext m_cidrAuthorizationContext;
    bool m_cidrAuthorizationContextHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
