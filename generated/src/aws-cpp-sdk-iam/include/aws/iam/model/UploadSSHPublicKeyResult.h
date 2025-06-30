/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/SSHPublicKey.h>
#include <aws/iam/model/ResponseMetadata.h>
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
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_UploadSSHPublicKey.html">UploadSSHPublicKey</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/UploadSSHPublicKeyResponse">AWS
   * API Reference</a></p>
   */
  class UploadSSHPublicKeyResult
  {
  public:
    AWS_IAM_API UploadSSHPublicKeyResult() = default;
    AWS_IAM_API UploadSSHPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API UploadSSHPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains information about the SSH public key.</p>
     */
    inline const SSHPublicKey& GetSSHPublicKey() const { return m_sSHPublicKey; }
    template<typename SSHPublicKeyT = SSHPublicKey>
    void SetSSHPublicKey(SSHPublicKeyT&& value) { m_sSHPublicKeyHasBeenSet = true; m_sSHPublicKey = std::forward<SSHPublicKeyT>(value); }
    template<typename SSHPublicKeyT = SSHPublicKey>
    UploadSSHPublicKeyResult& WithSSHPublicKey(SSHPublicKeyT&& value) { SetSSHPublicKey(std::forward<SSHPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UploadSSHPublicKeyResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SSHPublicKey m_sSHPublicKey;
    bool m_sSHPublicKeyHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
