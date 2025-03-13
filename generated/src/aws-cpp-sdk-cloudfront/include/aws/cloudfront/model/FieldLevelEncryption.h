/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * options specified for field-level encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FieldLevelEncryption">AWS
   * API Reference</a></p>
   */
  class FieldLevelEncryption
  {
  public:
    AWS_CLOUDFRONT_API FieldLevelEncryption() = default;
    AWS_CLOUDFRONT_API FieldLevelEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FieldLevelEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The configuration ID for a field-level encryption configuration which
     * includes a set of profiles that specify certain selected data fields to be
     * encrypted by specific public keys.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FieldLevelEncryption& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the field-level encryption configuration was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    FieldLevelEncryption& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex data type that includes the profile configurations specified for
     * field-level encryption.</p>
     */
    inline const FieldLevelEncryptionConfig& GetFieldLevelEncryptionConfig() const { return m_fieldLevelEncryptionConfig; }
    inline bool FieldLevelEncryptionConfigHasBeenSet() const { return m_fieldLevelEncryptionConfigHasBeenSet; }
    template<typename FieldLevelEncryptionConfigT = FieldLevelEncryptionConfig>
    void SetFieldLevelEncryptionConfig(FieldLevelEncryptionConfigT&& value) { m_fieldLevelEncryptionConfigHasBeenSet = true; m_fieldLevelEncryptionConfig = std::forward<FieldLevelEncryptionConfigT>(value); }
    template<typename FieldLevelEncryptionConfigT = FieldLevelEncryptionConfig>
    FieldLevelEncryption& WithFieldLevelEncryptionConfig(FieldLevelEncryptionConfigT&& value) { SetFieldLevelEncryptionConfig(std::forward<FieldLevelEncryptionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    FieldLevelEncryptionConfig m_fieldLevelEncryptionConfig;
    bool m_fieldLevelEncryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
