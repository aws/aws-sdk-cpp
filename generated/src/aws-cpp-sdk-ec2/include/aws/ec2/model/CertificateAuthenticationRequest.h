﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about the client certificate to be used for
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CertificateAuthenticationRequest">AWS
   * API Reference</a></p>
   */
  class CertificateAuthenticationRequest
  {
  public:
    AWS_EC2_API CertificateAuthenticationRequest() = default;
    AWS_EC2_API CertificateAuthenticationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CertificateAuthenticationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in Certificate Manager
     * (ACM).</p>
     */
    inline const Aws::String& GetClientRootCertificateChainArn() const { return m_clientRootCertificateChainArn; }
    inline bool ClientRootCertificateChainArnHasBeenSet() const { return m_clientRootCertificateChainArnHasBeenSet; }
    template<typename ClientRootCertificateChainArnT = Aws::String>
    void SetClientRootCertificateChainArn(ClientRootCertificateChainArnT&& value) { m_clientRootCertificateChainArnHasBeenSet = true; m_clientRootCertificateChainArn = std::forward<ClientRootCertificateChainArnT>(value); }
    template<typename ClientRootCertificateChainArnT = Aws::String>
    CertificateAuthenticationRequest& WithClientRootCertificateChainArn(ClientRootCertificateChainArnT&& value) { SetClientRootCertificateChainArn(std::forward<ClientRootCertificateChainArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientRootCertificateChainArn;
    bool m_clientRootCertificateChainArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
