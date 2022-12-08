/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DeleteLoadBalancerTlsCertificateRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteLoadBalancerTlsCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLoadBalancerTlsCertificate"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The load balancer name.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The load balancer name.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The load balancer name.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The load balancer name.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The load balancer name.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The load balancer name.</p>
     */
    inline DeleteLoadBalancerTlsCertificateRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The load balancer name.</p>
     */
    inline DeleteLoadBalancerTlsCertificateRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The load balancer name.</p>
     */
    inline DeleteLoadBalancerTlsCertificateRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline DeleteLoadBalancerTlsCertificateRequest& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline DeleteLoadBalancerTlsCertificateRequest& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The SSL/TLS certificate name.</p>
     */
    inline DeleteLoadBalancerTlsCertificateRequest& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>When <code>true</code>, forces the deletion of an SSL/TLS certificate.</p>
     * <p>There can be two certificates associated with a Lightsail load balancer: the
     * primary and the backup. The <code>force</code> parameter is required when the
     * primary SSL/TLS certificate is in use by an instance attached to the load
     * balancer.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>When <code>true</code>, forces the deletion of an SSL/TLS certificate.</p>
     * <p>There can be two certificates associated with a Lightsail load balancer: the
     * primary and the backup. The <code>force</code> parameter is required when the
     * primary SSL/TLS certificate is in use by an instance attached to the load
     * balancer.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>When <code>true</code>, forces the deletion of an SSL/TLS certificate.</p>
     * <p>There can be two certificates associated with a Lightsail load balancer: the
     * primary and the backup. The <code>force</code> parameter is required when the
     * primary SSL/TLS certificate is in use by an instance attached to the load
     * balancer.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>When <code>true</code>, forces the deletion of an SSL/TLS certificate.</p>
     * <p>There can be two certificates associated with a Lightsail load balancer: the
     * primary and the backup. The <code>force</code> parameter is required when the
     * primary SSL/TLS certificate is in use by an instance attached to the load
     * balancer.</p>
     */
    inline DeleteLoadBalancerTlsCertificateRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
