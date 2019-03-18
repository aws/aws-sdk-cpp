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
   * <p>Information about the client certificate used for
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CertificateAuthentication">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CertificateAuthentication
  {
  public:
    CertificateAuthentication();
    CertificateAuthentication(const Aws::Utils::Xml::XmlNode& xmlNode);
    CertificateAuthentication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_clientRootCertificateChainHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
