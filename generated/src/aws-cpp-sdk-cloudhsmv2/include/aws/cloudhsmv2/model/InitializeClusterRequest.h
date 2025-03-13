/**
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
    AWS_CLOUDHSMV2_API InitializeClusterRequest() = default;

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
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    InitializeClusterRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster certificate issued (signed) by your issuing certificate authority
     * (CA). The certificate must be in PEM format and can contain a maximum of 5000
     * characters.</p>
     */
    inline const Aws::String& GetSignedCert() const { return m_signedCert; }
    inline bool SignedCertHasBeenSet() const { return m_signedCertHasBeenSet; }
    template<typename SignedCertT = Aws::String>
    void SetSignedCert(SignedCertT&& value) { m_signedCertHasBeenSet = true; m_signedCert = std::forward<SignedCertT>(value); }
    template<typename SignedCertT = Aws::String>
    InitializeClusterRequest& WithSignedCert(SignedCertT&& value) { SetSignedCert(std::forward<SignedCertT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuing certificate of the issuing certificate authority (CA) that issued
     * (signed) the cluster certificate. You must use a self-signed certificate. The
     * certificate used to sign the HSM CSR must be directly available, and thus must
     * be the root certificate. The certificate must be in PEM format and can contain a
     * maximum of 5000 characters.</p>
     */
    inline const Aws::String& GetTrustAnchor() const { return m_trustAnchor; }
    inline bool TrustAnchorHasBeenSet() const { return m_trustAnchorHasBeenSet; }
    template<typename TrustAnchorT = Aws::String>
    void SetTrustAnchor(TrustAnchorT&& value) { m_trustAnchorHasBeenSet = true; m_trustAnchor = std::forward<TrustAnchorT>(value); }
    template<typename TrustAnchorT = Aws::String>
    InitializeClusterRequest& WithTrustAnchor(TrustAnchorT&& value) { SetTrustAnchor(std::forward<TrustAnchorT>(value)); return *this;}
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
