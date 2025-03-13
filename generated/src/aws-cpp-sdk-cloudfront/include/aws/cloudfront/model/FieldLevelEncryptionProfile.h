/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FieldLevelEncryptionProfile">AWS
   * API Reference</a></p>
   */
  class FieldLevelEncryptionProfile
  {
  public:
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfile() = default;
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FieldLevelEncryptionProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID for a field-level encryption profile configuration which includes a
     * set of profiles that specify certain selected data fields to be encrypted by
     * specific public keys.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FieldLevelEncryptionProfile& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the field-level encryption profile was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    FieldLevelEncryptionProfile& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex data type that includes the profile name and the encryption
     * entities for the field-level encryption profile.</p>
     */
    inline const FieldLevelEncryptionProfileConfig& GetFieldLevelEncryptionProfileConfig() const { return m_fieldLevelEncryptionProfileConfig; }
    inline bool FieldLevelEncryptionProfileConfigHasBeenSet() const { return m_fieldLevelEncryptionProfileConfigHasBeenSet; }
    template<typename FieldLevelEncryptionProfileConfigT = FieldLevelEncryptionProfileConfig>
    void SetFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfigT&& value) { m_fieldLevelEncryptionProfileConfigHasBeenSet = true; m_fieldLevelEncryptionProfileConfig = std::forward<FieldLevelEncryptionProfileConfigT>(value); }
    template<typename FieldLevelEncryptionProfileConfigT = FieldLevelEncryptionProfileConfig>
    FieldLevelEncryptionProfile& WithFieldLevelEncryptionProfileConfig(FieldLevelEncryptionProfileConfigT&& value) { SetFieldLevelEncryptionProfileConfig(std::forward<FieldLevelEncryptionProfileConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    FieldLevelEncryptionProfileConfig m_fieldLevelEncryptionProfileConfig;
    bool m_fieldLevelEncryptionProfileConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
