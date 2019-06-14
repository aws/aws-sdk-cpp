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
#include <aws/cloudfront/model/FieldLevelEncryptionProfileConfig.h>
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
   * <p>A complex data type for field-level encryption profiles.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/FieldLevelEncryptionProfile">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API FieldLevelEncryptionProfile
  {
  public:
    FieldLevelEncryptionProfile();
    FieldLevelEncryptionProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    FieldLevelEncryptionProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline FieldLevelEncryptionProfile& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline FieldLevelEncryptionProfile& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline FieldLevelEncryptionProfile& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The last time the field-level encryption profile was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the field-level encryption profile was updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time the field-level encryption profile was updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time the field-level encryption profile was updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the field-level encryption profile was updated.</p>
     */
    inline FieldLevelEncryptionProfile& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the field-level encryption profile was updated.</p>
     */
    inline FieldLevelEncryptionProfile& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>A complex data type that includes the profile name and the encryption
     * entities for the field-level encryption profile.</p>
     */
    inline const FieldLevelEncryptionProfileConfig& GetFieldLevelEncryptionProfileConfig() const{ return m_fieldLevelEncryptionProfileConfig; }

    /**
     * <p>A complex data type that includes the profile name and the encryption
     * entities for the field-level encryption profile.</p>
     */
    inline bool FieldLevelEncryptionProfileConfigHasBeenSet() const { return m_fieldLevelEncryptionProfileConfigHasBeenSet; }

    /**
     * <p>A complex data type that includes the profile name and the encryption
     * entities for the field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfileConfig(const FieldLevelEncryptionProfileConfig& value) { m_fieldLevelEncryptionProfileConfigHasBeenSet = true; m_fieldLevelEncryptionProfileConfig = value; }

    /**
     * <p>A complex data type that includes the profile name and the encryption
     * entities for the field-level encryption profile.</p>
     */
    inline void SetFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfig&& value) { m_fieldLevelEncryptionProfileConfigHasBeenSet = true; m_fieldLevelEncryptionProfileConfig = std::move(value); }

    /**
     * <p>A complex data type that includes the profile name and the encryption
     * entities for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfile& WithFieldLevelEncryptionProfileConfig(const FieldLevelEncryptionProfileConfig& value) { SetFieldLevelEncryptionProfileConfig(value); return *this;}

    /**
     * <p>A complex data type that includes the profile name and the encryption
     * entities for the field-level encryption profile.</p>
     */
    inline FieldLevelEncryptionProfile& WithFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfig&& value) { SetFieldLevelEncryptionProfileConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    FieldLevelEncryptionProfileConfig m_fieldLevelEncryptionProfileConfig;
    bool m_fieldLevelEncryptionProfileConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
