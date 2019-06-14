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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FieldPatterns.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Complex data type for field-level encryption profiles that includes the
   * encryption key and field pattern specifications. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/EncryptionEntity">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API EncryptionEntity
  {
  public:
    EncryptionEntity();
    EncryptionEntity(const Aws::Utils::Xml::XmlNode& xmlNode);
    EncryptionEntity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline const Aws::String& GetPublicKeyId() const{ return m_publicKeyId; }

    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline bool PublicKeyIdHasBeenSet() const { return m_publicKeyIdHasBeenSet; }

    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline void SetPublicKeyId(const Aws::String& value) { m_publicKeyIdHasBeenSet = true; m_publicKeyId = value; }

    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline void SetPublicKeyId(Aws::String&& value) { m_publicKeyIdHasBeenSet = true; m_publicKeyId = std::move(value); }

    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline void SetPublicKeyId(const char* value) { m_publicKeyIdHasBeenSet = true; m_publicKeyId.assign(value); }

    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline EncryptionEntity& WithPublicKeyId(const Aws::String& value) { SetPublicKeyId(value); return *this;}

    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline EncryptionEntity& WithPublicKeyId(Aws::String&& value) { SetPublicKeyId(std::move(value)); return *this;}

    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns. </p>
     */
    inline EncryptionEntity& WithPublicKeyId(const char* value) { SetPublicKeyId(value); return *this;}


    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline const Aws::String& GetProviderId() const{ return m_providerId; }

    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline bool ProviderIdHasBeenSet() const { return m_providerIdHasBeenSet; }

    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline void SetProviderId(const Aws::String& value) { m_providerIdHasBeenSet = true; m_providerId = value; }

    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline void SetProviderId(Aws::String&& value) { m_providerIdHasBeenSet = true; m_providerId = std::move(value); }

    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline void SetProviderId(const char* value) { m_providerIdHasBeenSet = true; m_providerId.assign(value); }

    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline EncryptionEntity& WithProviderId(const Aws::String& value) { SetProviderId(value); return *this;}

    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline EncryptionEntity& WithProviderId(Aws::String&& value) { SetProviderId(std::move(value)); return *this;}

    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline EncryptionEntity& WithProviderId(const char* value) { SetProviderId(value); return *this;}


    /**
     * <p>Field patterns in a field-level encryption content type profile specify the
     * fields that you want to be encrypted. You can provide the full field name, or
     * any beginning characters followed by a wildcard (*). You can't overlap field
     * patterns. For example, you can't have both ABC* and AB*. Note that field
     * patterns are case-sensitive. </p>
     */
    inline const FieldPatterns& GetFieldPatterns() const{ return m_fieldPatterns; }

    /**
     * <p>Field patterns in a field-level encryption content type profile specify the
     * fields that you want to be encrypted. You can provide the full field name, or
     * any beginning characters followed by a wildcard (*). You can't overlap field
     * patterns. For example, you can't have both ABC* and AB*. Note that field
     * patterns are case-sensitive. </p>
     */
    inline bool FieldPatternsHasBeenSet() const { return m_fieldPatternsHasBeenSet; }

    /**
     * <p>Field patterns in a field-level encryption content type profile specify the
     * fields that you want to be encrypted. You can provide the full field name, or
     * any beginning characters followed by a wildcard (*). You can't overlap field
     * patterns. For example, you can't have both ABC* and AB*. Note that field
     * patterns are case-sensitive. </p>
     */
    inline void SetFieldPatterns(const FieldPatterns& value) { m_fieldPatternsHasBeenSet = true; m_fieldPatterns = value; }

    /**
     * <p>Field patterns in a field-level encryption content type profile specify the
     * fields that you want to be encrypted. You can provide the full field name, or
     * any beginning characters followed by a wildcard (*). You can't overlap field
     * patterns. For example, you can't have both ABC* and AB*. Note that field
     * patterns are case-sensitive. </p>
     */
    inline void SetFieldPatterns(FieldPatterns&& value) { m_fieldPatternsHasBeenSet = true; m_fieldPatterns = std::move(value); }

    /**
     * <p>Field patterns in a field-level encryption content type profile specify the
     * fields that you want to be encrypted. You can provide the full field name, or
     * any beginning characters followed by a wildcard (*). You can't overlap field
     * patterns. For example, you can't have both ABC* and AB*. Note that field
     * patterns are case-sensitive. </p>
     */
    inline EncryptionEntity& WithFieldPatterns(const FieldPatterns& value) { SetFieldPatterns(value); return *this;}

    /**
     * <p>Field patterns in a field-level encryption content type profile specify the
     * fields that you want to be encrypted. You can provide the full field name, or
     * any beginning characters followed by a wildcard (*). You can't overlap field
     * patterns. For example, you can't have both ABC* and AB*. Note that field
     * patterns are case-sensitive. </p>
     */
    inline EncryptionEntity& WithFieldPatterns(FieldPatterns&& value) { SetFieldPatterns(std::move(value)); return *this;}

  private:

    Aws::String m_publicKeyId;
    bool m_publicKeyIdHasBeenSet;

    Aws::String m_providerId;
    bool m_providerIdHasBeenSet;

    FieldPatterns m_fieldPatterns;
    bool m_fieldPatternsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
