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
  class AWS_EC2_API CertificateAuthenticationRequest
  {
  public:
    CertificateAuthenticationRequest();
    CertificateAuthenticationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    CertificateAuthenticationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline const Aws::String& GetClientRootCertificateChainArn() const{ return m_clientRootCertificateChainArn; }

    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline bool ClientRootCertificateChainArnHasBeenSet() const { return m_clientRootCertificateChainArnHasBeenSet; }

    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline void SetClientRootCertificateChainArn(const Aws::String& value) { m_clientRootCertificateChainArnHasBeenSet = true; m_clientRootCertificateChainArn = value; }

    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline void SetClientRootCertificateChainArn(Aws::String&& value) { m_clientRootCertificateChainArnHasBeenSet = true; m_clientRootCertificateChainArn = std::move(value); }

    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline void SetClientRootCertificateChainArn(const char* value) { m_clientRootCertificateChainArnHasBeenSet = true; m_clientRootCertificateChainArn.assign(value); }

    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline CertificateAuthenticationRequest& WithClientRootCertificateChainArn(const Aws::String& value) { SetClientRootCertificateChainArn(value); return *this;}

    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline CertificateAuthenticationRequest& WithClientRootCertificateChainArn(Aws::String&& value) { SetClientRootCertificateChainArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the client certificate. The certificate must be signed by a
     * certificate authority (CA) and it must be provisioned in AWS Certificate Manager
     * (ACM).</p>
     */
    inline CertificateAuthenticationRequest& WithClientRootCertificateChainArn(const char* value) { SetClientRootCertificateChainArn(value); return *this;}

  private:

    Aws::String m_clientRootCertificateChainArn;
    bool m_clientRootCertificateChainArnHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
