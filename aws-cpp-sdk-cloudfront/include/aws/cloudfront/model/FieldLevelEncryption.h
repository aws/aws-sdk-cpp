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
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/FieldLevelEncryptionConfig.h>
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
   * <p>A complex data type that includes the profile configurations and other
   * options specified for field-level encryption. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/FieldLevelEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API FieldLevelEncryption
  {
  public:
    FieldLevelEncryption();
    FieldLevelEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    FieldLevelEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline FieldLevelEncryption& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline FieldLevelEncryption& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline FieldLevelEncryption& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The last time the field-level encryption configuration was changed. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the field-level encryption configuration was changed. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time the field-level encryption configuration was changed. </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time the field-level encryption configuration was changed. </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the field-level encryption configuration was changed. </p>
     */
    inline FieldLevelEncryption& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the field-level encryption configuration was changed. </p>
     */
    inline FieldLevelEncryption& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A complex data type that includes the profile configurations specified for
     * field-level encryption. </p>
     */
    inline const FieldLevelEncryptionConfig& GetFieldLevelEncryptionConfig() const{ return m_fieldLevelEncryptionConfig; }

    /**
     * <p>A complex data type that includes the profile configurations specified for
     * field-level encryption. </p>
     */
    inline bool FieldLevelEncryptionConfigHasBeenSet() const { return m_fieldLevelEncryptionConfigHasBeenSet; }

    /**
     * <p>A complex data type that includes the profile configurations specified for
     * field-level encryption. </p>
     */
    inline void SetFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = value; }

    /**
     * <p>A complex data type that includes the profile configurations specified for
     * field-level encryption. </p>
     */
    inline void SetFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = std::move(value); }

    /**
     * <p>A complex data type that includes the profile configurations specified for
     * field-level encryption. </p>
     */
    inline FieldLevelEncryption& WithFieldLevelEncryptionConfig(const FieldLevelEncryptionConfig& value) { SetFieldLevelEncryptionConfig(value); return *this;}

    /**
     * <p>A complex data type that includes the profile configurations specified for
     * field-level encryption. </p>
     */
    inline FieldLevelEncryption& WithFieldLevelEncryptionConfig(FieldLevelEncryptionConfig&& value) { SetFieldLevelEncryptionConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    FieldLevelEncryptionConfig m_fieldLevelEncryptionConfig;
    bool m_fieldLevelEncryptionConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
