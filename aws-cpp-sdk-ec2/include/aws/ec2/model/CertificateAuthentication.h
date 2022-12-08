/**
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
   * <p>Information about the client certificate used for
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CertificateAuthentication">AWS
   * API Reference</a></p>
   */
  class CertificateAuthentication
  {
  public:
    AWS_EC2_API CertificateAuthentication();
    AWS_EC2_API CertificateAuthentication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CertificateAuthentication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline const Aws::String& GetClientRootCertificateChain() const{ return m_clientRootCertificateChain; }

    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline bool ClientRootCertificateChainHasBeenSet() const { return m_clientRootCertificateChainHasBeenSet; }

    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline void SetClientRootCertificateChain(const Aws::String& value) { m_clientRootCertificateChainHasBeenSet = true; m_clientRootCertificateChain = value; }

    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline void SetClientRootCertificateChain(Aws::String&& value) { m_clientRootCertificateChainHasBeenSet = true; m_clientRootCertificateChain = std::move(value); }

    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline void SetClientRootCertificateChain(const char* value) { m_clientRootCertificateChainHasBeenSet = true; m_clientRootCertificateChain.assign(value); }

    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline CertificateAuthentication& WithClientRootCertificateChain(const Aws::String& value) { SetClientRootCertificateChain(value); return *this;}

    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline CertificateAuthentication& WithClientRootCertificateChain(Aws::String&& value) { SetClientRootCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The ARN of the client certificate. </p>
     */
    inline CertificateAuthentication& WithClientRootCertificateChain(const char* value) { SetClientRootCertificateChain(value); return *this;}

  private:

    Aws::String m_clientRootCertificateChain;
    bool m_clientRootCertificateChainHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
