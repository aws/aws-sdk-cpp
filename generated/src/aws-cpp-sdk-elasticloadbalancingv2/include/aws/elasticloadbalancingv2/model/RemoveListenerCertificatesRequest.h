﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RemoveListenerCertificatesRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API RemoveListenerCertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveListenerCertificates"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }
    inline RemoveListenerCertificatesRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}
    inline RemoveListenerCertificatesRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}
    inline RemoveListenerCertificatesRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate to remove. You can specify one certificate per call. Set
     * <code>CertificateArn</code> to the certificate ARN but do not set
     * <code>IsDefault</code>.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const{ return m_certificates; }
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
    inline void SetCertificates(const Aws::Vector<Certificate>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }
    inline void SetCertificates(Aws::Vector<Certificate>&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }
    inline RemoveListenerCertificatesRequest& WithCertificates(const Aws::Vector<Certificate>& value) { SetCertificates(value); return *this;}
    inline RemoveListenerCertificatesRequest& WithCertificates(Aws::Vector<Certificate>&& value) { SetCertificates(std::move(value)); return *this;}
    inline RemoveListenerCertificatesRequest& AddCertificates(const Certificate& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }
    inline RemoveListenerCertificatesRequest& AddCertificates(Certificate&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
