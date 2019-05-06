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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/Certificate.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class AWS_ELASTICLOADBALANCINGV2_API AddListenerCertificatesRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AddListenerCertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddListenerCertificates"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline AddListenerCertificatesRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline AddListenerCertificatesRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline AddListenerCertificatesRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}


    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }

    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }

    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline AddListenerCertificatesRequest& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}

    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline AddListenerCertificatesRequest& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline AddListenerCertificatesRequest& AddCertificates(const Certificate& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }

    /**
     * <p>The certificate to add. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline AddListenerCertificatesRequest& AddCertificates(Certificate&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
