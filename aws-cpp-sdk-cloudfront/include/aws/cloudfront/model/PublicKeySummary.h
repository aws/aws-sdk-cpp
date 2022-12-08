/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information about a public key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/PublicKeySummary">AWS
   * API Reference</a></p>
   */
  class PublicKeySummary
  {
  public:
    AWS_CLOUDFRONT_API PublicKeySummary();
    AWS_CLOUDFRONT_API PublicKeySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API PublicKeySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline PublicKeySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the public key.</p>
     */
    inline PublicKeySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the public key.</p>
     */
    inline PublicKeySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A name to help identify the public key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name to help identify the public key.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name to help identify the public key.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name to help identify the public key.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name to help identify the public key.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name to help identify the public key.</p>
     */
    inline PublicKeySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name to help identify the public key.</p>
     */
    inline PublicKeySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name to help identify the public key.</p>
     */
    inline PublicKeySummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline PublicKeySummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time when the public key was uploaded.</p>
     */
    inline PublicKeySummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The public key.</p>
     */
    inline const Aws::String& GetEncodedKey() const{ return m_encodedKey; }

    /**
     * <p>The public key.</p>
     */
    inline bool EncodedKeyHasBeenSet() const { return m_encodedKeyHasBeenSet; }

    /**
     * <p>The public key.</p>
     */
    inline void SetEncodedKey(const Aws::String& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = value; }

    /**
     * <p>The public key.</p>
     */
    inline void SetEncodedKey(Aws::String&& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = std::move(value); }

    /**
     * <p>The public key.</p>
     */
    inline void SetEncodedKey(const char* value) { m_encodedKeyHasBeenSet = true; m_encodedKey.assign(value); }

    /**
     * <p>The public key.</p>
     */
    inline PublicKeySummary& WithEncodedKey(const Aws::String& value) { SetEncodedKey(value); return *this;}

    /**
     * <p>The public key.</p>
     */
    inline PublicKeySummary& WithEncodedKey(Aws::String&& value) { SetEncodedKey(std::move(value)); return *this;}

    /**
     * <p>The public key.</p>
     */
    inline PublicKeySummary& WithEncodedKey(const char* value) { SetEncodedKey(value); return *this;}


    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline PublicKeySummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline PublicKeySummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment to describe the public key. The comment cannot be longer than 128
     * characters.</p>
     */
    inline PublicKeySummary& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_encodedKey;
    bool m_encodedKeyHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
