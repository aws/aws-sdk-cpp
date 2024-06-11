/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/EncryptionEntities.h>
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
   * <p>The field-level encryption profile summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FieldLevelEncryptionProfileSummary">AWS
   * API Reference</a></p>
   */
  class FieldLevelEncryptionProfileSummary
  {
  public:
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfileSummary();
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfileSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfileSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>ID for the field-level encryption profile summary.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FieldLevelEncryptionProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the field-level encryption profile summary was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline FieldLevelEncryptionProfileSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the field-level encryption profile summary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FieldLevelEncryptionProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex data type of encryption entities for the field-level encryption
     * profile that include the public key ID, provider, and field patterns for
     * specifying which fields to encrypt with this key.</p>
     */
    inline const EncryptionEntities& GetEncryptionEntities() const{ return m_encryptionEntities; }
    inline bool EncryptionEntitiesHasBeenSet() const { return m_encryptionEntitiesHasBeenSet; }
    inline void SetEncryptionEntities(const EncryptionEntities& value) { m_encryptionEntitiesHasBeenSet = true; m_encryptionEntities = value; }
    inline void SetEncryptionEntities(EncryptionEntities&& value) { m_encryptionEntitiesHasBeenSet = true; m_encryptionEntities = std::move(value); }
    inline FieldLevelEncryptionProfileSummary& WithEncryptionEntities(const EncryptionEntities& value) { SetEncryptionEntities(value); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithEncryptionEntities(EncryptionEntities&& value) { SetEncryptionEntities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment for the field-level encryption profile summary. The
     * comment cannot be longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline FieldLevelEncryptionProfileSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline FieldLevelEncryptionProfileSummary& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EncryptionEntities m_encryptionEntities;
    bool m_encryptionEntitiesHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
