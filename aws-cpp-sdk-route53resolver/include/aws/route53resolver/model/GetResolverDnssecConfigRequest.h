﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RESOLVER_API GetResolverDnssecConfigRequest : public Route53ResolverRequest
  {
  public:
    GetResolverDnssecConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResolverDnssecConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline GetResolverDnssecConfigRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline GetResolverDnssecConfigRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC) for the DNSSEC validation
     * status.</p>
     */
    inline GetResolverDnssecConfigRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
