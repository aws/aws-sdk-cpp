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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/FieldLevelEncryptionProfileConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API FieldLevelEncryptionProfileConfig
  {
  public:
    FieldLevelEncryptionProfileConfig();
    FieldLevelEncryptionProfileConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    FieldLevelEncryptionProfileConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Profile name for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithName(const char* value) { SetName(value); return *this;}


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
    inline FieldLevelEncryptionProfileConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique number that ensures that the request can't be replayed.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>A complex data type of encryption entities for the field-level encryption
     * profile that include the public key ID, provider, and field patterns for
     * specifying which fields to encrypt with this key.</p>
     */
    inline const EncryptionEntities& GetEncryptionEntities() const{ return m_encryptionEntities; }

    /**
     * <p>A complex data type of encryption entities for the field-level encryption
     * profile that include the public key ID, provider, and field patterns for
     * specifying which fields to encrypt with this key.</p>
     */
    inline bool EncryptionEntitiesHasBeenSet() const { return m_encryptionEntitiesHasBeenSet; }

    /**
     * <p>A complex data type of encryption entities for the field-level encryption
     * profile that include the public key ID, provider, and field patterns for
     * specifying which fields to encrypt with this key.</p>
     */
    inline void SetEncryptionEntities(const EncryptionEntities& value) { m_encryptionEntitiesHasBeenSet = true; m_encryptionEntities = value; }

    /**
     * <p>A complex data type of encryption entities for the field-level encryption
     * profile that include the public key ID, provider, and field patterns for
     * specifying which fields to encrypt with this key.</p>
     */
    inline void SetEncryptionEntities(EncryptionEntities&& value) { m_encryptionEntitiesHasBeenSet = true; m_encryptionEntities = std::move(value); }

    /**
     * <p>A complex data type of encryption entities for the field-level encryption
     * profile that include the public key ID, provider, and field patterns for
     * specifying which fields to encrypt with this key.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithEncryptionEntities(const EncryptionEntities& value) { SetEncryptionEntities(value); return *this;}

    /**
     * <p>A complex data type of encryption entities for the field-level encryption
     * profile that include the public key ID, provider, and field patterns for
     * specifying which fields to encrypt with this key.</p>
     */
    inline FieldLevelEncryptionProfileConfig& WithEncryptionEntities(EncryptionEntities&& value) { SetEncryptionEntities(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    EncryptionEntities m_encryptionEntities;
    bool m_encryptionEntitiesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
