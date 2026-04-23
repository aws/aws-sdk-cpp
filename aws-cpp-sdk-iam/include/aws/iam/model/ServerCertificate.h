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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/iam/model/ServerCertificateMetadata.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about a server certificate.</p> <p> This data type is
   * used as a response element in the <a>GetServerCertificate</a> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ServerCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API ServerCertificate
  {
  public:
    ServerCertificate();
    ServerCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServerCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The meta information of the server certificate, such as its name, path, ID,
     * and ARN.</p>
     */
    inline const ServerCertificateMetadata& GetServerCertificateMetadata() const{ return m_serverCertificateMetadata; }

    /**
     * <p>The meta information of the server certificate, such as its name, path, ID,
     * and ARN.</p>
     */
    inline bool ServerCertificateMetadataHasBeenSet() const { return m_serverCertificateMetadataHasBeenSet; }

    /**
     * <p>The meta information of the server certificate, such as its name, path, ID,
     * and ARN.</p>
     */
    inline void SetServerCertificateMetadata(const ServerCertificateMetadata& value) { m_serverCertificateMetadataHasBeenSet = true; m_serverCertificateMetadata = value; }

    /**
     * <p>The meta information of the server certificate, such as its name, path, ID,
     * and ARN.</p>
     */
    inline void SetServerCertificateMetadata(ServerCertificateMetadata&& value) { m_serverCertificateMetadataHasBeenSet = true; m_serverCertificateMetadata = std::move(value); }

    /**
     * <p>The meta information of the server certificate, such as its name, path, ID,
     * and ARN.</p>
     */
    inline ServerCertificate& WithServerCertificateMetadata(const ServerCertificateMetadata& value) { SetServerCertificateMetadata(value); return *this;}

    /**
     * <p>The meta information of the server certificate, such as its name, path, ID,
     * and ARN.</p>
     */
    inline ServerCertificate& WithServerCertificateMetadata(ServerCertificateMetadata&& value) { SetServerCertificateMetadata(std::move(value)); return *this;}


    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline const Aws::String& GetCertificateBody() const{ return m_certificateBody; }

    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline bool CertificateBodyHasBeenSet() const { return m_certificateBodyHasBeenSet; }

    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline void SetCertificateBody(const Aws::String& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = value; }

    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline void SetCertificateBody(Aws::String&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::move(value); }

    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline void SetCertificateBody(const char* value) { m_certificateBodyHasBeenSet = true; m_certificateBody.assign(value); }

    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline ServerCertificate& WithCertificateBody(const Aws::String& value) { SetCertificateBody(value); return *this;}

    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline ServerCertificate& WithCertificateBody(Aws::String&& value) { SetCertificateBody(std::move(value)); return *this;}

    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline ServerCertificate& WithCertificateBody(const char* value) { SetCertificateBody(value); return *this;}


    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline ServerCertificate& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline ServerCertificate& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline ServerCertificate& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

  private:

    ServerCertificateMetadata m_serverCertificateMetadata;
    bool m_serverCertificateMetadataHasBeenSet;

    Aws::String m_certificateBody;
    bool m_certificateBodyHasBeenSet;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
