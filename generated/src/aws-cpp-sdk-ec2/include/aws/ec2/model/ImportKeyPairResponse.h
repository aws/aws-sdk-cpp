/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Tag.h>
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
namespace EC2
{
namespace Model
{
  class ImportKeyPairResponse
  {
  public:
    AWS_EC2_API ImportKeyPairResponse() = default;
    AWS_EC2_API ImportKeyPairResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ImportKeyPairResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <ul> <li> <p>For RSA key pairs, the key fingerprint is the MD5 public key
     * fingerprint as specified in section 4 of RFC 4716.</p> </li> <li> <p>For ED25519
     * key pairs, the key fingerprint is the base64-encoded SHA-256 digest, which is
     * the default for OpenSSH, starting with <a
     * href="http://www.openssh.com/txt/release-6.8">OpenSSH 6.8</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetKeyFingerprint() const { return m_keyFingerprint; }
    template<typename KeyFingerprintT = Aws::String>
    void SetKeyFingerprint(KeyFingerprintT&& value) { m_keyFingerprintHasBeenSet = true; m_keyFingerprint = std::forward<KeyFingerprintT>(value); }
    template<typename KeyFingerprintT = Aws::String>
    ImportKeyPairResponse& WithKeyFingerprint(KeyFingerprintT&& value) { SetKeyFingerprint(std::forward<KeyFingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key pair name that you provided.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    ImportKeyPairResponse& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resulting key pair.</p>
     */
    inline const Aws::String& GetKeyPairId() const { return m_keyPairId; }
    template<typename KeyPairIdT = Aws::String>
    void SetKeyPairId(KeyPairIdT&& value) { m_keyPairIdHasBeenSet = true; m_keyPairId = std::forward<KeyPairIdT>(value); }
    template<typename KeyPairIdT = Aws::String>
    ImportKeyPairResponse& WithKeyPairId(KeyPairIdT&& value) { SetKeyPairId(std::forward<KeyPairIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags applied to the imported key pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportKeyPairResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportKeyPairResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ImportKeyPairResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyFingerprint;
    bool m_keyFingerprintHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_keyPairId;
    bool m_keyPairIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
