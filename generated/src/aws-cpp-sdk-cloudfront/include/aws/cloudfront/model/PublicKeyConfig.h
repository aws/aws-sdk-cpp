/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Configuration information about a public key that you can use with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
   * URLs and signed cookies</a>, or with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
   * encryption</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/PublicKeyConfig">AWS
   * API Reference</a></p>
   */
  class PublicKeyConfig
  {
  public:
    AWS_CLOUDFRONT_API PublicKeyConfig();
    AWS_CLOUDFRONT_API PublicKeyConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API PublicKeyConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A string included in the request to help make sure that the request can't be
     * replayed.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }
    inline PublicKeyConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}
    inline PublicKeyConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}
    inline PublicKeyConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name to help identify the public key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PublicKeyConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PublicKeyConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PublicKeyConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key that you can use with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
     * URLs and signed cookies</a>, or with <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
     * encryption</a>.</p>
     */
    inline const Aws::String& GetEncodedKey() const{ return m_encodedKey; }
    inline bool EncodedKeyHasBeenSet() const { return m_encodedKeyHasBeenSet; }
    inline void SetEncodedKey(const Aws::String& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = value; }
    inline void SetEncodedKey(Aws::String&& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = std::move(value); }
    inline void SetEncodedKey(const char* value) { m_encodedKeyHasBeenSet = true; m_encodedKey.assign(value); }
    inline PublicKeyConfig& WithEncodedKey(const Aws::String& value) { SetEncodedKey(value); return *this;}
    inline PublicKeyConfig& WithEncodedKey(Aws::String&& value) { SetEncodedKey(std::move(value)); return *this;}
    inline PublicKeyConfig& WithEncodedKey(const char* value) { SetEncodedKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline PublicKeyConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline PublicKeyConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline PublicKeyConfig& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}
  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_encodedKey;
    bool m_encodedKeyHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
