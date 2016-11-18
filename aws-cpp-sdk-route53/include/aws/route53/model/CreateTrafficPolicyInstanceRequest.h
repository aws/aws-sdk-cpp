/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the resource record sets that
   * you want to create based on a specified traffic policy.</p>
   */
  class AWS_ROUTE53_API CreateTrafficPolicyInstanceRequest : public Route53Request
  {
  public:
    CreateTrafficPolicyInstanceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the hosted zone in which you want Amazon Route 53 to create
     * resource record sets by using the configuration in a traffic policy.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The ID of the hosted zone in which you want Amazon Route 53 to create
     * resource record sets by using the configuration in a traffic policy.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone in which you want Amazon Route 53 to create
     * resource record sets by using the configuration in a traffic policy.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The ID of the hosted zone in which you want Amazon Route 53 to create
     * resource record sets by using the configuration in a traffic policy.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The ID of the hosted zone in which you want Amazon Route 53 to create
     * resource record sets by using the configuration in a traffic policy.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone in which you want Amazon Route 53 to create
     * resource record sets by using the configuration in a traffic policy.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The ID of the hosted zone in which you want Amazon Route 53 to create
     * resource record sets by using the configuration in a traffic policy.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The domain name (such as example.com) or subdomain name (such as
     * www.example.com) for which Amazon Route 53 responds to DNS queries by using the
     * resource record sets that Amazon Route 53 creates for this traffic policy
     * instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The domain name (such as example.com) or subdomain name (such as
     * www.example.com) for which Amazon Route 53 responds to DNS queries by using the
     * resource record sets that Amazon Route 53 creates for this traffic policy
     * instance.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The domain name (such as example.com) or subdomain name (such as
     * www.example.com) for which Amazon Route 53 responds to DNS queries by using the
     * resource record sets that Amazon Route 53 creates for this traffic policy
     * instance.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The domain name (such as example.com) or subdomain name (such as
     * www.example.com) for which Amazon Route 53 responds to DNS queries by using the
     * resource record sets that Amazon Route 53 creates for this traffic policy
     * instance.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The domain name (such as example.com) or subdomain name (such as
     * www.example.com) for which Amazon Route 53 responds to DNS queries by using the
     * resource record sets that Amazon Route 53 creates for this traffic policy
     * instance.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The domain name (such as example.com) or subdomain name (such as
     * www.example.com) for which Amazon Route 53 responds to DNS queries by using the
     * resource record sets that Amazon Route 53 creates for this traffic policy
     * instance.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The domain name (such as example.com) or subdomain name (such as
     * www.example.com) for which Amazon Route 53 responds to DNS queries by using the
     * resource record sets that Amazon Route 53 creates for this traffic policy
     * instance.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>(Optional) The TTL that you want Amazon Route 53 to assign to all of the
     * resource record sets that it creates in the specified hosted zone.</p>
     */
    inline long long GetTTL() const{ return m_tTL; }

    /**
     * <p>(Optional) The TTL that you want Amazon Route 53 to assign to all of the
     * resource record sets that it creates in the specified hosted zone.</p>
     */
    inline void SetTTL(long long value) { m_tTLHasBeenSet = true; m_tTL = value; }

    /**
     * <p>(Optional) The TTL that you want Amazon Route 53 to assign to all of the
     * resource record sets that it creates in the specified hosted zone.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithTTL(long long value) { SetTTL(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want to use to create resource record
     * sets in the specified hosted zone.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    /**
     * <p>The ID of the traffic policy that you want to use to create resource record
     * sets in the specified hosted zone.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The ID of the traffic policy that you want to use to create resource record
     * sets in the specified hosted zone.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The ID of the traffic policy that you want to use to create resource record
     * sets in the specified hosted zone.</p>
     */
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }

    /**
     * <p>The ID of the traffic policy that you want to use to create resource record
     * sets in the specified hosted zone.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want to use to create resource record
     * sets in the specified hosted zone.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The ID of the traffic policy that you want to use to create resource record
     * sets in the specified hosted zone.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The version of the traffic policy that you want to use to create resource
     * record sets in the specified hosted zone.</p>
     */
    inline int GetTrafficPolicyVersion() const{ return m_trafficPolicyVersion; }

    /**
     * <p>The version of the traffic policy that you want to use to create resource
     * record sets in the specified hosted zone.</p>
     */
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }

    /**
     * <p>The version of the traffic policy that you want to use to create resource
     * record sets in the specified hosted zone.</p>
     */
    inline CreateTrafficPolicyInstanceRequest& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}

  private:
    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    long long m_tTL;
    bool m_tTLHasBeenSet;
    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet;
    int m_trafficPolicyVersion;
    bool m_trafficPolicyVersionHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
