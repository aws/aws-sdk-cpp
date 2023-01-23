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
    AWS_GLOBALACCELERATOR_API ProvisionByoipCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionByoipCidr"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The public IPv4 address range, in CIDR notation. The most specific IP prefix
     * that you can specify is /24. The address range cannot overlap with another
     * address range that you've brought to this or another Region.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP. </p>
     */
    inline const CidrAuthorizationContext& GetCidrAuthorizationContext() const{ return m_cidrAuthorizationContext; }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP. </p>
     */
    inline bool CidrAuthorizationContextHasBeenSet() const { return m_cidrAuthorizationContextHasBeenSet; }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP. </p>
     */
    inline void SetCidrAuthorizationContext(const CidrAuthorizationContext& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = value; }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP. </p>
     */
    inline void SetCidrAuthorizationContext(CidrAuthorizationContext&& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = std::move(value); }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP. </p>
     */
    inline ProvisionByoipCidrRequest& WithCidrAuthorizationContext(const CidrAuthorizationContext& value) { SetCidrAuthorizationContext(value); return *this;}

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP. </p>
     */
    inline ProvisionByoipCidrRequest& WithCidrAuthorizationContext(CidrAuthorizationContext&& value) { SetCidrAuthorizationContext(std::move(value)); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    CidrAuthorizationContext m_cidrAuthorizationContext;
    bool m_cidrAuthorizationContextHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
