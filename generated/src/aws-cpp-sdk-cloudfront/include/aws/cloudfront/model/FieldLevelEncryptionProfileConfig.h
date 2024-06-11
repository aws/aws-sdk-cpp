/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex data type of profiles for the field-level encryption.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FieldLevelEncryptionProfileConfig">AWS
   * API Reference</a></p>
   */
  class FieldLevelEncryptionProfileConfig
  {
  public:
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfileConfig();
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfileConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfileConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FieldLevelEncryptionProfileConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FieldLevelEncryptionProfileConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FieldLevelEncryptionProfileConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }
    inline FieldLevelEncryptionProfileConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}
    inline FieldLevelEncryptionProfileConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}
    inline FieldLevelEncryptionProfileConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment for the field-level encryption profile. The comment
     * cannot be longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline FieldLevelEncryptionProfileConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline FieldLevelEncryptionProfileConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline FieldLevelEncryptionProfileConfig& WithComment(const char* value) { SetComment(value); return *this;}
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
    inline FieldLevelEncryptionProfileConfig& WithEncryptionEntities(const EncryptionEntities& value) { SetEncryptionEntities(value); return *this;}
    inline FieldLevelEncryptionProfileConfig& WithEncryptionEntities(EncryptionEntities&& value) { SetEncryptionEntities(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    EncryptionEntities m_encryptionEntities;
    bool m_encryptionEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
