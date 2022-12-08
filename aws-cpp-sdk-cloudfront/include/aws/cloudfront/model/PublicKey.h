/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/PublicKeyConfig.h>
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
   * <p>A public key that you can use with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
   * URLs and signed cookies</a>, or with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
   * encryption</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/PublicKey">AWS
   * API Reference</a></p>
   */
  class PublicKey
  {
  public:
    AWS_CLOUDFRONT_API PublicKey();
    AWS_CLOUDFRONT_API PublicKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API PublicKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier of the public key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the public key.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the public key.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the public key.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the public key.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the public key.</p>
     */
    inline PublicKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the public key.</p>
     */
    inline PublicKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the public key.</p>
     */
    inline PublicKey& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline PublicKey& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline PublicKey& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>Configuration information about a public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline const PublicKeyConfig& GetPublicKeyConfig() const{ return m_publicKeyConfig; }

    /**
     * <p>Configuration information about a public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline bool PublicKeyConfigHasBeenSet() const { return m_publicKeyConfigHasBeenSet; }

    /**
     * <p>Configuration information about a public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline void SetPublicKeyConfig(const PublicKeyConfig& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = value; }

    /**
     * <p>Configuration information about a public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline void SetPublicKeyConfig(PublicKeyConfig&& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = std::move(value); }

    /**
     * <p>Configuration information about a public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline PublicKey& WithPublicKeyConfig(const PublicKeyConfig& value) { SetPublicKeyConfig(value); return *this;}

    /**
     * <p>Configuration information about a public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline PublicKey& WithPublicKeyConfig(PublicKeyConfig&& value) { SetPublicKeyConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    PublicKeyConfig m_publicKeyConfig;
    bool m_publicKeyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
