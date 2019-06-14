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
   * <p>Information about a public key you add to CloudFront to use with features
   * like field-level encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/PublicKeyConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API PublicKeyConfig
  {
  public:
    PublicKeyConfig();
    PublicKeyConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    PublicKeyConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline PublicKeyConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline PublicKeyConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline PublicKeyConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline PublicKeyConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline PublicKeyConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for a public key you add to CloudFront to use with features like
     * field-level encryption.</p>
     */
    inline PublicKeyConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline const Aws::String& GetEncodedKey() const{ return m_encodedKey; }

    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline bool EncodedKeyHasBeenSet() const { return m_encodedKeyHasBeenSet; }

    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline void SetEncodedKey(const Aws::String& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = value; }

    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline void SetEncodedKey(Aws::String&& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = std::move(value); }

    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline void SetEncodedKey(const char* value) { m_encodedKeyHasBeenSet = true; m_encodedKey.assign(value); }

    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline PublicKeyConfig& WithEncodedKey(const Aws::String& value) { SetEncodedKey(value); return *this;}

    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline PublicKeyConfig& WithEncodedKey(Aws::String&& value) { SetEncodedKey(std::move(value)); return *this;}

    /**
     * <p>The encoded public key that you want to add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline PublicKeyConfig& WithEncodedKey(const char* value) { SetEncodedKey(value); return *this;}


    /**
     * <p>An optional comment about a public key.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>An optional comment about a public key.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>An optional comment about a public key.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>An optional comment about a public key.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>An optional comment about a public key.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>An optional comment about a public key.</p>
     */
    inline PublicKeyConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment about a public key.</p>
     */
    inline PublicKeyConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment about a public key.</p>
     */
    inline PublicKeyConfig& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_encodedKey;
    bool m_encodedKeyHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
