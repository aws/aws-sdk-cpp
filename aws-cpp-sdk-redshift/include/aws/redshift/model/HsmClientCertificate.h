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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Returns information about an HSM client certificate. The certificate is
   * stored in a secure Hardware Storage Module (HSM), and used by the Amazon
   * Redshift cluster to encrypt data files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/HsmClientCertificate">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API HsmClientCertificate
  {
  public:
    HsmClientCertificate();
    HsmClientCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    HsmClientCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }

    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::move(value); }

    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }

    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline HsmClientCertificate& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline HsmClientCertificate& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline HsmClientCertificate& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}


    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificatePublicKey() const{ return m_hsmClientCertificatePublicKey; }

    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline bool HsmClientCertificatePublicKeyHasBeenSet() const { return m_hsmClientCertificatePublicKeyHasBeenSet; }

    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline void SetHsmClientCertificatePublicKey(const Aws::String& value) { m_hsmClientCertificatePublicKeyHasBeenSet = true; m_hsmClientCertificatePublicKey = value; }

    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline void SetHsmClientCertificatePublicKey(Aws::String&& value) { m_hsmClientCertificatePublicKeyHasBeenSet = true; m_hsmClientCertificatePublicKey = std::move(value); }

    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline void SetHsmClientCertificatePublicKey(const char* value) { m_hsmClientCertificatePublicKeyHasBeenSet = true; m_hsmClientCertificatePublicKey.assign(value); }

    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline HsmClientCertificate& WithHsmClientCertificatePublicKey(const Aws::String& value) { SetHsmClientCertificatePublicKey(value); return *this;}

    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline HsmClientCertificate& WithHsmClientCertificatePublicKey(Aws::String&& value) { SetHsmClientCertificatePublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline HsmClientCertificate& WithHsmClientCertificatePublicKey(const char* value) { SetHsmClientCertificatePublicKey(value); return *this;}


    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline HsmClientCertificate& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline HsmClientCertificate& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline HsmClientCertificate& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline HsmClientCertificate& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet;

    Aws::String m_hsmClientCertificatePublicKey;
    bool m_hsmClientCertificatePublicKeyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
