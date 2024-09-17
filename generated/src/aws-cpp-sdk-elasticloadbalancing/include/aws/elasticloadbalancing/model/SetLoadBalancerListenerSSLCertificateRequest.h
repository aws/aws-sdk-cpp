/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * SetLoadBalancerListenerSSLCertificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/SetLoadBalancerListenerSSLCertificateInput">AWS
   * API Reference</a></p>
   */
  class SetLoadBalancerListenerSSLCertificateRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API SetLoadBalancerListenerSSLCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoadBalancerListenerSSLCertificate"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that uses the specified SSL certificate.</p>
     */
    inline int GetLoadBalancerPort() const{ return m_loadBalancerPort; }
    inline bool LoadBalancerPortHasBeenSet() const { return m_loadBalancerPortHasBeenSet; }
    inline void SetLoadBalancerPort(int value) { m_loadBalancerPortHasBeenSet = true; m_loadBalancerPort = value; }
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerPort(int value) { SetLoadBalancerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline const Aws::String& GetSSLCertificateId() const{ return m_sSLCertificateId; }
    inline bool SSLCertificateIdHasBeenSet() const { return m_sSLCertificateIdHasBeenSet; }
    inline void SetSSLCertificateId(const Aws::String& value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId = value; }
    inline void SetSSLCertificateId(Aws::String&& value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId = std::move(value); }
    inline void SetSSLCertificateId(const char* value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId.assign(value); }
    inline SetLoadBalancerListenerSSLCertificateRequest& WithSSLCertificateId(const Aws::String& value) { SetSSLCertificateId(value); return *this;}
    inline SetLoadBalancerListenerSSLCertificateRequest& WithSSLCertificateId(Aws::String&& value) { SetSSLCertificateId(std::move(value)); return *this;}
    inline SetLoadBalancerListenerSSLCertificateRequest& WithSSLCertificateId(const char* value) { SetSSLCertificateId(value); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    int m_loadBalancerPort;
    bool m_loadBalancerPortHasBeenSet = false;

    Aws::String m_sSLCertificateId;
    bool m_sSLCertificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
