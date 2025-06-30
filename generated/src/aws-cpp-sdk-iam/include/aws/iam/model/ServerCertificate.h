/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/iam/model/ServerCertificateMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/Tag.h>
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
   * used as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetServerCertificate.html">GetServerCertificate</a>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ServerCertificate">AWS
   * API Reference</a></p>
   */
  class ServerCertificate
  {
  public:
    AWS_IAM_API ServerCertificate() = default;
    AWS_IAM_API ServerCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API ServerCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The meta information of the server certificate, such as its name, path, ID,
     * and ARN.</p>
     */
    inline const ServerCertificateMetadata& GetServerCertificateMetadata() const { return m_serverCertificateMetadata; }
    inline bool ServerCertificateMetadataHasBeenSet() const { return m_serverCertificateMetadataHasBeenSet; }
    template<typename ServerCertificateMetadataT = ServerCertificateMetadata>
    void SetServerCertificateMetadata(ServerCertificateMetadataT&& value) { m_serverCertificateMetadataHasBeenSet = true; m_serverCertificateMetadata = std::forward<ServerCertificateMetadataT>(value); }
    template<typename ServerCertificateMetadataT = ServerCertificateMetadata>
    ServerCertificate& WithServerCertificateMetadata(ServerCertificateMetadataT&& value) { SetServerCertificateMetadata(std::forward<ServerCertificateMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the public key certificate.</p>
     */
    inline const Aws::String& GetCertificateBody() const { return m_certificateBody; }
    inline bool CertificateBodyHasBeenSet() const { return m_certificateBodyHasBeenSet; }
    template<typename CertificateBodyT = Aws::String>
    void SetCertificateBody(CertificateBodyT&& value) { m_certificateBodyHasBeenSet = true; m_certificateBody = std::forward<CertificateBodyT>(value); }
    template<typename CertificateBodyT = Aws::String>
    ServerCertificate& WithCertificateBody(CertificateBodyT&& value) { SetCertificateBody(std::forward<CertificateBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the public key certificate chain.</p>
     */
    inline const Aws::String& GetCertificateChain() const { return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    template<typename CertificateChainT = Aws::String>
    void SetCertificateChain(CertificateChainT&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::forward<CertificateChainT>(value); }
    template<typename CertificateChainT = Aws::String>
    ServerCertificate& WithCertificateChain(CertificateChainT&& value) { SetCertificateChain(std::forward<CertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are attached to the server certificate. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ServerCertificate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ServerCertificate& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    ServerCertificateMetadata m_serverCertificateMetadata;
    bool m_serverCertificateMetadataHasBeenSet = false;

    Aws::String m_certificateBody;
    bool m_certificateBodyHasBeenSet = false;

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
