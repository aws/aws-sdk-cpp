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
    AWS_CLOUDFRONT_API PublicKey() = default;
    AWS_CLOUDFRONT_API PublicKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API PublicKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier of the public key.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PublicKey& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    PublicKey& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about a public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline const PublicKeyConfig& GetPublicKeyConfig() const { return m_publicKeyConfig; }
    inline bool PublicKeyConfigHasBeenSet() const { return m_publicKeyConfigHasBeenSet; }
    template<typename PublicKeyConfigT = PublicKeyConfig>
    void SetPublicKeyConfig(PublicKeyConfigT&& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = std::forward<PublicKeyConfigT>(value); }
    template<typename PublicKeyConfigT = PublicKeyConfig>
    PublicKey& WithPublicKeyConfig(PublicKeyConfigT&& value) { SetPublicKeyConfig(std::forward<PublicKeyConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    PublicKeyConfig m_publicKeyConfig;
    bool m_publicKeyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
