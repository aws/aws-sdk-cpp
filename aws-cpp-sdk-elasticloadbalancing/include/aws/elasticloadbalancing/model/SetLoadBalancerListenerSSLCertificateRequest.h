/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_ELASTICLOADBALANCING_API SetLoadBalancerListenerSSLCertificateRequest : public ElasticLoadBalancingRequest
  {
  public:
    SetLoadBalancerListenerSSLCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetLoadBalancerListenerSSLCertificate"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The port that uses the specified SSL certificate.</p>
     */
    inline int GetLoadBalancerPort() const{ return m_loadBalancerPort; }

    /**
     * <p>The port that uses the specified SSL certificate.</p>
     */
    inline bool LoadBalancerPortHasBeenSet() const { return m_loadBalancerPortHasBeenSet; }

    /**
     * <p>The port that uses the specified SSL certificate.</p>
     */
    inline void SetLoadBalancerPort(int value) { m_loadBalancerPortHasBeenSet = true; m_loadBalancerPort = value; }

    /**
     * <p>The port that uses the specified SSL certificate.</p>
     */
    inline SetLoadBalancerListenerSSLCertificateRequest& WithLoadBalancerPort(int value) { SetLoadBalancerPort(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline const Aws::String& GetSSLCertificateId() const{ return m_sSLCertificateId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline bool SSLCertificateIdHasBeenSet() const { return m_sSLCertificateIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline void SetSSLCertificateId(const Aws::String& value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline void SetSSLCertificateId(Aws::String&& value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline void SetSSLCertificateId(const char* value) { m_sSLCertificateIdHasBeenSet = true; m_sSLCertificateId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline SetLoadBalancerListenerSSLCertificateRequest& WithSSLCertificateId(const Aws::String& value) { SetSSLCertificateId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline SetLoadBalancerListenerSSLCertificateRequest& WithSSLCertificateId(Aws::String&& value) { SetSSLCertificateId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SSL certificate.</p>
     */
    inline SetLoadBalancerListenerSSLCertificateRequest& WithSSLCertificateId(const char* value) { SetSSLCertificateId(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    int m_loadBalancerPort;
    bool m_loadBalancerPortHasBeenSet;

    Aws::String m_sSLCertificateId;
    bool m_sSLCertificateIdHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
