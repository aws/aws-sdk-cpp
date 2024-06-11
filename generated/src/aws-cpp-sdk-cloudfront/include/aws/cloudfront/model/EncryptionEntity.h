﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * encryption key and field pattern specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/EncryptionEntity">AWS
   * API Reference</a></p>
   */
  class EncryptionEntity
  {
  public:
    AWS_CLOUDFRONT_API EncryptionEntity();
    AWS_CLOUDFRONT_API EncryptionEntity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API EncryptionEntity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The public key associated with a set of field-level encryption patterns, to
     * be used when encrypting the fields that match the patterns.</p>
     */
    inline const Aws::String& GetPublicKeyId() const{ return m_publicKeyId; }
    inline bool PublicKeyIdHasBeenSet() const { return m_publicKeyIdHasBeenSet; }
    inline void SetPublicKeyId(const Aws::String& value) { m_publicKeyIdHasBeenSet = true; m_publicKeyId = value; }
    inline void SetPublicKeyId(Aws::String&& value) { m_publicKeyIdHasBeenSet = true; m_publicKeyId = std::move(value); }
    inline void SetPublicKeyId(const char* value) { m_publicKeyIdHasBeenSet = true; m_publicKeyId.assign(value); }
    inline EncryptionEntity& WithPublicKeyId(const Aws::String& value) { SetPublicKeyId(value); return *this;}
    inline EncryptionEntity& WithPublicKeyId(Aws::String&& value) { SetPublicKeyId(std::move(value)); return *this;}
    inline EncryptionEntity& WithPublicKeyId(const char* value) { SetPublicKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider associated with the public key being used for encryption. This
     * value must also be provided with the private key for applications to be able to
     * decrypt data.</p>
     */
    inline const Aws::String& GetProviderId() const{ return m_providerId; }
    inline bool ProviderIdHasBeenSet() const { return m_providerIdHasBeenSet; }
    inline void SetProviderId(const Aws::String& value) { m_providerIdHasBeenSet = true; m_providerId = value; }
    inline void SetProviderId(Aws::String&& value) { m_providerIdHasBeenSet = true; m_providerId = std::move(value); }
    inline void SetProviderId(const char* value) { m_providerIdHasBeenSet = true; m_providerId.assign(value); }
    inline EncryptionEntity& WithProviderId(const Aws::String& value) { SetProviderId(value); return *this;}
    inline EncryptionEntity& WithProviderId(Aws::String&& value) { SetProviderId(std::move(value)); return *this;}
    inline EncryptionEntity& WithProviderId(const char* value) { SetProviderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Field patterns in a field-level encryption content type profile specify the
     * fields that you want to be encrypted. You can provide the full field name, or
     * any beginning characters followed by a wildcard (*). You can't overlap field
     * patterns. For example, you can't have both ABC* and AB*. Note that field
     * patterns are case-sensitive.</p>
     */
    inline const FieldPatterns& GetFieldPatterns() const{ return m_fieldPatterns; }
    inline bool FieldPatternsHasBeenSet() const { return m_fieldPatternsHasBeenSet; }
    inline void SetFieldPatterns(const FieldPatterns& value) { m_fieldPatternsHasBeenSet = true; m_fieldPatterns = value; }
    inline void SetFieldPatterns(FieldPatterns&& value) { m_fieldPatternsHasBeenSet = true; m_fieldPatterns = std::move(value); }
    inline EncryptionEntity& WithFieldPatterns(const FieldPatterns& value) { SetFieldPatterns(value); return *this;}
    inline EncryptionEntity& WithFieldPatterns(FieldPatterns&& value) { SetFieldPatterns(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_publicKeyId;
    bool m_publicKeyIdHasBeenSet = false;

    Aws::String m_providerId;
    bool m_providerIdHasBeenSet = false;

    FieldPatterns m_fieldPatterns;
    bool m_fieldPatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
