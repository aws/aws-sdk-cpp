﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InitializeClusterRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API InitializeClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitializeCluster"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier (ID) of the cluster that you are claiming. To find the cluster
     * ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline InitializeClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline InitializeClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline InitializeClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline const Aws::String& GetSignedCert() const{ return m_signedCert; }
    inline bool SignedCertHasBeenSet() const { return m_signedCertHasBeenSet; }
    inline void SetSignedCert(const Aws::String& value) { m_signedCertHasBeenSet = true; m_signedCert = value; }
    inline void SetSignedCert(Aws::String&& value) { m_signedCertHasBeenSet = true; m_signedCert = std::move(value); }
    inline void SetSignedCert(const char* value) { m_signedCertHasBeenSet = true; m_signedCert.assign(value); }
    inline InitializeClusterRequest& WithSignedCert(const Aws::String& value) { SetSignedCert(value); return *this;}
    inline InitializeClusterRequest& WithSignedCert(Aws::String&& value) { SetSignedCert(std::move(value)); return *this;}
    inline InitializeClusterRequest& WithSignedCert(const char* value) { SetSignedCert(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. You must use a self-signed certificate. The
     * certificate used to sign the HSM CSR must be directly available, and thus must
     * be the root certificate. The certificate must be in PEM format and can contain a
     * maximum of 5000 characters.</p>
     */
    inline const Aws::String& GetTrustAnchor() const{ return m_trustAnchor; }
    inline bool TrustAnchorHasBeenSet() const { return m_trustAnchorHasBeenSet; }
    inline void SetTrustAnchor(const Aws::String& value) { m_trustAnchorHasBeenSet = true; m_trustAnchor = value; }
    inline void SetTrustAnchor(Aws::String&& value) { m_trustAnchorHasBeenSet = true; m_trustAnchor = std::move(value); }
    inline void SetTrustAnchor(const char* value) { m_trustAnchorHasBeenSet = true; m_trustAnchor.assign(value); }
    inline InitializeClusterRequest& WithTrustAnchor(const Aws::String& value) { SetTrustAnchor(value); return *this;}
    inline InitializeClusterRequest& WithTrustAnchor(Aws::String&& value) { SetTrustAnchor(std::move(value)); return *this;}
    inline InitializeClusterRequest& WithTrustAnchor(const char* value) { SetTrustAnchor(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_signedCert;
    bool m_signedCertHasBeenSet = false;

    Aws::String m_trustAnchor;
    bool m_trustAnchorHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
