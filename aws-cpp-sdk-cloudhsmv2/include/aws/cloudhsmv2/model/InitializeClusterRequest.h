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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSMV2_API InitializeClusterRequest : public CloudHSMV2Request
  {
  public:
    InitializeClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitializeCluster"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline InitializeClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline InitializeClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline InitializeClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline const Aws::String& GetSignedCert() const{ return m_signedCert; }

    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline bool SignedCertHasBeenSet() const { return m_signedCertHasBeenSet; }

    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline void SetSignedCert(const Aws::String& value) { m_signedCertHasBeenSet = true; m_signedCert = value; }

    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline void SetSignedCert(Aws::String&& value) { m_signedCertHasBeenSet = true; m_signedCert = std::move(value); }

    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline void SetSignedCert(const char* value) { m_signedCertHasBeenSet = true; m_signedCert.assign(value); }

    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline InitializeClusterRequest& WithSignedCert(const Aws::String& value) { SetSignedCert(value); return *this;}

    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline InitializeClusterRequest& WithSignedCert(Aws::String&& value) { SetSignedCert(std::move(value)); return *this;}

    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline InitializeClusterRequest& WithSignedCert(const char* value) { SetSignedCert(value); return *this;}


    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline const Aws::String& GetTrustAnchor() const{ return m_trustAnchor; }

    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline bool TrustAnchorHasBeenSet() const { return m_trustAnchorHasBeenSet; }

    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline void SetTrustAnchor(const Aws::String& value) { m_trustAnchorHasBeenSet = true; m_trustAnchor = value; }

    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline void SetTrustAnchor(Aws::String&& value) { m_trustAnchorHasBeenSet = true; m_trustAnchor = std::move(value); }

    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline void SetTrustAnchor(const char* value) { m_trustAnchorHasBeenSet = true; m_trustAnchor.assign(value); }

    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline InitializeClusterRequest& WithTrustAnchor(const Aws::String& value) { SetTrustAnchor(value); return *this;}

    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline InitializeClusterRequest& WithTrustAnchor(Aws::String&& value) { SetTrustAnchor(std::move(value)); return *this;}

    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. This can be a root (self-signed) certificate
     * or a certificate chain that begins with the certificate that issued the cluster
     * certificate and ends with a root certificate. The certificate or certificate
     * chain must be in PEM format and can contain a maximum of 5000 characters.</p>
     */
    inline InitializeClusterRequest& WithTrustAnchor(const char* value) { SetTrustAnchor(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::String m_signedCert;
    bool m_signedCertHasBeenSet;

    Aws::String m_trustAnchor;
    bool m_trustAnchorHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
