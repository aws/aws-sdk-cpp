/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ServerCertificateMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UploadServerCertificate.html">UploadServerCertificate</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadServerCertificateResponse">AWS
   * API Reference</a></p>
   */
  class UploadServerCertificateResult
  {
  public:
    AWS_IAM_API UploadServerCertificateResult() = default;
    AWS_IAM_API UploadServerCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API UploadServerCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The meta information of the uploaded server certificate without its
     * certificate body, certificate chain, and private key.</p>
     */
    inline const ServerCertificateMetadata& GetServerCertificateMetadata() const { return m_serverCertificateMetadata; }
    template<typename ServerCertificateMetadataT = ServerCertificateMetadata>
    void SetServerCertificateMetadata(ServerCertificateMetadataT&& value) { m_serverCertificateMetadataHasBeenSet = true; m_serverCertificateMetadata = std::forward<ServerCertificateMetadataT>(value); }
    template<typename ServerCertificateMetadataT = ServerCertificateMetadata>
    UploadServerCertificateResult& WithServerCertificateMetadata(ServerCertificateMetadataT&& value) { SetServerCertificateMetadata(std::forward<ServerCertificateMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are attached to the new IAM server certificate. The
     * returned list of tags is sorted by tag key. For more information about tagging,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UploadServerCertificateResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UploadServerCertificateResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UploadServerCertificateResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ServerCertificateMetadata m_serverCertificateMetadata;
    bool m_serverCertificateMetadataHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
