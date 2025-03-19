/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/RdsDbSnapshotAttributeValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for an Amazon RDS DB snapshot. You
   * can propose a configuration for a new Amazon RDS DB snapshot or an Amazon RDS DB
   * snapshot that you own by specifying the <code>RdsDbSnapshotAttributeValue</code>
   * and optional KMS encryption key. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_ModifyDBSnapshotAttribute.html">ModifyDBSnapshotAttribute</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/RdsDbSnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsDbSnapshotConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API RdsDbSnapshotConfiguration() = default;
    AWS_ACCESSANALYZER_API RdsDbSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API RdsDbSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The names and values of manual DB snapshot attributes. Manual DB snapshot
     * attributes are used to authorize other Amazon Web Services accounts to restore a
     * manual DB snapshot. The only valid value for <code>attributeName</code> for the
     * attribute map is restore.</p>
     */
    inline const Aws::Map<Aws::String, RdsDbSnapshotAttributeValue>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, RdsDbSnapshotAttributeValue>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, RdsDbSnapshotAttributeValue>>
    RdsDbSnapshotConfiguration& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = RdsDbSnapshotAttributeValue>
    RdsDbSnapshotConfiguration& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB snapshot. The KMS key
     * identifier is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     * <ul> <li> <p>If the configuration is for an existing Amazon RDS DB snapshot and
     * you do not specify the <code>kmsKeyId</code>, or you specify an empty string,
     * then the access preview uses the existing <code>kmsKeyId</code> of the
     * snapshot.</p> </li> <li> <p>If the access preview is for a new resource and you
     * do not specify the specify the <code>kmsKeyId</code>, then the access preview
     * considers the snapshot as unencrypted.</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    RdsDbSnapshotConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, RdsDbSnapshotAttributeValue> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
